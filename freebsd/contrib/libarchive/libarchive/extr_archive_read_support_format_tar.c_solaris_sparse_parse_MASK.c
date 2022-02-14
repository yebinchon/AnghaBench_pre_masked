
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tar {TYPE_1__* sparse_last; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int hole; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct tar*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_3, struct tar *VAR_4,
    struct archive_entry *VAR_5, const char *VAR_6)
{
 const char *VAR_7;
 int64_t VAR_8, VAR_9;
 int VAR_10 = 1;

 (void)VAR_5;

 VAR_9 = 0;
 if (*VAR_6 == ' ')
  VAR_6++;
 else
  return (VAR_2);
 for (;;) {
  VAR_7 = VAR_6;
  while (*VAR_7 != '\0' && *VAR_7 != ' ') {
   if (*VAR_7 < '0' || *VAR_7 > '9')
    return (VAR_2);
   VAR_7++;
  }
  VAR_8 = VAR_9;
  VAR_9 = FUNC_1(VAR_6, VAR_7 - VAR_6);
  if (VAR_9 < 0)
   return (VAR_2);
  if (VAR_8 < VAR_9) {
   if (FUNC_0(VAR_3, VAR_4, VAR_8,
       VAR_9 - VAR_8) != VAR_1)
    return (VAR_0);
   VAR_4->sparse_last->hole = VAR_10;
  }
  if (*VAR_7 == '\0')
   return (VAR_1);
  VAR_6 = VAR_7 + 1;
  VAR_10 = VAR_10 == 0;
 }
}
