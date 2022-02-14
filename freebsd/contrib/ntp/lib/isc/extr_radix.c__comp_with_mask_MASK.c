
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 scalar_t__ FUNC_0 (void*,void*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1, u_int VAR_2) {


 if (VAR_2 == 0)
  return (1);

 if (FUNC_0(VAR_0, VAR_1, VAR_2 / 8) == 0) {
  int VAR_3 = VAR_2 / 8;
  int VAR_4 = ((~0) << (8 - (VAR_2 % 8)));

  if ((VAR_2 % 8) == 0 ||
      (((u_char *)VAR_0)[VAR_3] & VAR_4) == (((u_char *)VAR_1)[VAR_3] & VAR_4))
   return (1);
 }
 return (0);
}
