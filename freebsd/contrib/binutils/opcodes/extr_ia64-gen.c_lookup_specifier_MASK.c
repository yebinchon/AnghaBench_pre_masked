
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_31)
{
  if (FUNC_2 (VAR_31, '%'))
    {
      if (FUNC_4 (VAR_31, "AR[K%]") != ((void*)0))
        return VAR_4;
      if (FUNC_4 (VAR_31, "AR[UNAT]") != ((void*)0))
        return VAR_5;
      if (FUNC_4 (VAR_31, "AR%, % in 8") != ((void*)0))
        return VAR_1;
      if (FUNC_4 (VAR_31, "AR%, % in 48") != ((void*)0))
        return VAR_6;
      if (FUNC_4 (VAR_31, "BR%") != ((void*)0))
        return VAR_7;
      if (FUNC_4 (VAR_31, "CR[IRR%]") != ((void*)0))
        return VAR_12;
      if (FUNC_4 (VAR_31, "CR[LRR%]") != ((void*)0))
        return VAR_13;
      if (FUNC_4 (VAR_31, "CR%") != ((void*)0))
        return VAR_10;
      if (FUNC_4 (VAR_31, "FR%, % in 0") != ((void*)0))
        return VAR_15;
      if (FUNC_4 (VAR_31, "FR%, % in 2") != ((void*)0))
        return VAR_16;
      if (FUNC_4 (VAR_31, "GR%") != ((void*)0))
        return VAR_17;
      if (FUNC_4 (VAR_31, "PR%, % in 1 ") != ((void*)0))
        return VAR_25;
      if (FUNC_4 (VAR_31, "PR%, % in 16 ") != ((void*)0))
 return VAR_27;

      FUNC_5 (FUNC_1("don't know how to specify %% dependency %s\n"),
     VAR_31);
    }
  else if (FUNC_2 (VAR_31, '#'))
    {
      if (FUNC_4 (VAR_31, "CPUID#") != ((void*)0))
        return VAR_9;
      if (FUNC_4 (VAR_31, "DBR#") != ((void*)0))
        return VAR_14;
      if (FUNC_4 (VAR_31, "IBR#") != ((void*)0))
        return VAR_19;
      if (FUNC_4 (VAR_31, "MSR#") != ((void*)0))
 return VAR_21;
      if (FUNC_4 (VAR_31, "PKR#") != ((void*)0))
        return VAR_22;
      if (FUNC_4 (VAR_31, "PMC#") != ((void*)0))
        return VAR_23;
      if (FUNC_4 (VAR_31, "PMD#") != ((void*)0))
        return VAR_24;
      if (FUNC_4 (VAR_31, "RR#") != ((void*)0))
        return VAR_29;

      FUNC_5 (FUNC_1("Don't know how to specify # dependency %s\n"),
     VAR_31);
    }
  else if (FUNC_0 (VAR_31, "AR[FPSR]"))
    return VAR_3;
  else if (FUNC_0 (VAR_31, "AR["))
    return VAR_2;
  else if (FUNC_0 (VAR_31, "CR["))
    return VAR_11;
  else if (FUNC_0 (VAR_31, "PSR."))
    return VAR_28;
  else if (FUNC_3 (VAR_31, "InService*") == 0)
    return VAR_20;
  else if (FUNC_3 (VAR_31, "GR0") == 0)
    return VAR_18;
  else if (FUNC_3 (VAR_31, "CFM") == 0)
    return VAR_8;
  else if (FUNC_3 (VAR_31, "PR63") == 0)
    return VAR_26;
  else if (FUNC_3 (VAR_31, "RSE") == 0)
    return VAR_30;

  return VAR_0;
}
