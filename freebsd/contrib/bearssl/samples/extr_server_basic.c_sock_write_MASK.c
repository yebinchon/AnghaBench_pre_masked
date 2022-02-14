
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 for (;;) {
  ssize_t VAR_5;

  VAR_5 = FUNC_0(*(int *)VAR_2, VAR_3, VAR_4);
  if (VAR_5 <= 0) {
   if (VAR_5 < 0 && VAR_1 == VAR_0) {
    continue;
   }
   return -1;
  }
  return (int)VAR_5;
 }
}
