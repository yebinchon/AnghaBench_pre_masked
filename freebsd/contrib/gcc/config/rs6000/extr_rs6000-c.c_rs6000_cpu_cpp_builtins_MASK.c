
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;





 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

void
FUNC_2 (cpp_reader *VAR_18)
{
  if (VAR_9)
    FUNC_1 ("_ARCH_PWR2");
  else if (VAR_8)
    FUNC_1 ("_ARCH_PWR");
  if (VAR_10)
    FUNC_1 ("_ARCH_PPC");
  if (VAR_13)
    FUNC_1 ("_ARCH_PPCSQ");
  if (VAR_12)
    FUNC_1 ("_ARCH_PPCGR");
  if (VAR_11)
    FUNC_1 ("_ARCH_PPC64");
  if (VAR_5)
    FUNC_1 ("_ARCH_PWR4");
  if (VAR_7)
    FUNC_1 ("_ARCH_PWR5");
  if (VAR_2)
    FUNC_1 ("_ARCH_PWR5X");
  if (! VAR_8 && ! VAR_9 && ! VAR_10)
    FUNC_1 ("_ARCH_COM");
  if (VAR_1)
    {
      FUNC_1 ("__ALTIVEC__");
      FUNC_1 ("__VEC__=10206");


      FUNC_1 ("__vector=__attribute__((altivec(vector__)))");
      FUNC_1 ("__pixel=__attribute__((altivec(pixel__))) unsigned short");
      FUNC_1 ("__bool=__attribute__((altivec(bool__))) unsigned");
    }
  if (VAR_15)
    FUNC_1 ("__SPE__");
  if (VAR_14)
    FUNC_1 ("_SOFT_FLOAT");

  if (VAR_16 == VAR_0)
    FUNC_1 ("__PPC405__");

  if (VAR_6)
    FUNC_1 ("__NO_LWSYNC__");


  FUNC_0();

  if (VAR_4)
    FUNC_1 ("__LONG_DOUBLE_128__");

  switch (VAR_17)
    {
    case 128:
      FUNC_1 ("_CALL_SYSV");
      break;
    case 130:
      FUNC_1 ("_CALL_AIXDESC");
      FUNC_1 ("_CALL_AIX");
      break;
    case 129:
      FUNC_1 ("_CALL_DARWIN");
      break;
    default:
      break;
    }


  if (VAR_14 || !VAR_3)
    FUNC_1 ("__NO_FPRS__");
}
