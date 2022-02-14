
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



__attribute__((used)) static u_char *
FUNC_0(u_char *VAR_0, int VAR_1)
{
 char VAR_2;

 while (--VAR_1 >= 0) {
  VAR_2 = VAR_0[0]; VAR_0[0] = VAR_0[3]; VAR_0[3] = VAR_2;
  VAR_2 = VAR_0[2]; VAR_0[2] = VAR_0[1]; VAR_0[1] = VAR_2;
  VAR_0 += 4;
 }
 return (VAR_0);
}
