
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_4, int VAR_5, int VAR_6,
    size_t VAR_7, const char *VAR_8,
    int64_t VAR_9, int64_t VAR_10)
{
 size_t VAR_11;
 ssize_t VAR_12;

 if (VAR_6) {
  VAR_10 = FUNC_1(VAR_5,
      VAR_9 - VAR_10, VAR_2);
  if (VAR_10 != VAR_9) {
   FUNC_0(VAR_4, VAR_3, "Seek error");
   return (VAR_0);
  }
  return (VAR_1);
 }
 while (VAR_9 > VAR_10) {
  VAR_11 = VAR_7;
  if (VAR_9 < VAR_10 + (int64_t)VAR_7)
   VAR_11 = (size_t)(VAR_9 - VAR_10);
  VAR_12 = FUNC_2(VAR_5, VAR_8, VAR_11);
  if (VAR_12 < 0) {
   FUNC_0(VAR_4, VAR_3, "Write error");
   return (VAR_0);
  }
  VAR_10 += VAR_12;
 }
 return (VAR_1);
}
