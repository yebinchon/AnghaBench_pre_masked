
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsg_t ;
typedef int SCR ;
 int FUNC_0 () ;
 char const* FUNC_1 (int *,char*,size_t*) ;

const char *
FUNC_2(
 SCR *VAR_0,
 cmsg_t VAR_1,
 size_t *VAR_2)
{
 switch (VAR_1) {
 case 133:
  return (FUNC_1(VAR_0, "268|confirm? [ynq]", VAR_2));
 case 132:
  return (FUNC_1(VAR_0, "269|Press any key to continue: ", VAR_2));
 case 131:
  return (FUNC_1(VAR_0,
     "270|Press any key to continue [: to enter more ex commands]: ",
      VAR_2));
 case 129:
  return (FUNC_1(VAR_0, "161|Press Enter to continue: ", VAR_2));
 case 128:
  return (FUNC_1(VAR_0, "275| cont?", VAR_2));
 case 130:
  return (FUNC_1(VAR_0,
      "271|Press any key to continue [q to quit]: ", VAR_2));
 default:
  FUNC_0();
 }

}
