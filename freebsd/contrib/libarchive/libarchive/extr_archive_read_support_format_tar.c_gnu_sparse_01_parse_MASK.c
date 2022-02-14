
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int dummy; } ;
struct archive_read {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct tar*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_3, struct tar *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 int64_t VAR_7 = -1, VAR_8 = -1;

 for (;;) {
  VAR_6 = VAR_5;
  while (*VAR_6 != '\0' && *VAR_6 != ',') {
   if (*VAR_6 < '0' || *VAR_6 > '9')
    return (VAR_2);
   VAR_6++;
  }
  if (VAR_7 < 0) {
   VAR_7 = FUNC_1(VAR_5, VAR_6 - VAR_5);
   if (VAR_7 < 0)
    return (VAR_2);
  } else {
   VAR_8 = FUNC_1(VAR_5, VAR_6 - VAR_5);
   if (VAR_8 < 0)
    return (VAR_2);
   if (FUNC_0(VAR_3, VAR_4, VAR_7, VAR_8)
       != VAR_1)
    return (VAR_0);
   VAR_7 = -1;
  }
  if (*VAR_6 == '\0')
   return (VAR_1);
  VAR_5 = VAR_6 + 1;
 }
}
