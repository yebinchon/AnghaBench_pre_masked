
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_0[0] = '\0';


 while ((VAR_2 = VAR_1 & (1 + ~VAR_1)) != 0) {
  VAR_1 &= ~VAR_2;
  FUNC_1(VAR_0, FUNC_0(VAR_2));
  if (VAR_1 != 0)
   FUNC_1(VAR_0, "/");
 }
 return VAR_0;
}
