
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 size_t VAR_1 = FUNC_0(VAR_0);
 ssize_t VAR_2;

 while (VAR_1 > 0) {
  VAR_2 = FUNC_1(2, VAR_0, FUNC_0(VAR_0));
  if (VAR_2 <= 0)
   return;
  VAR_0 += VAR_2;
  VAR_1 -= VAR_2;
 }
}
