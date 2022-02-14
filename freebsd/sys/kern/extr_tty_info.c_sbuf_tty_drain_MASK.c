
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct tty*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, const char *VAR_4, int VAR_5)
{
 struct tty *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3;

 if (VAR_1) {
  FUNC_0(VAR_4, VAR_5);
  return (VAR_5);
 }
 if (VAR_6 != ((void*)0) && VAR_2 == ((void*)0)) {
  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
  if (VAR_7 != 0)
   return (-VAR_0);
  return (VAR_5);
 }
 return (-VAR_0);
}
