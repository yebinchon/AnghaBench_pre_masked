
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cgen_parse_operand_result { ____Placeholder_cgen_parse_operand_result } cgen_parse_operand_result ;
typedef int bfd_vma ;
typedef int CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const**,int,int ,int*,int*) ;
 char const* FUNC_2 (int ,char const**,int,long*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_4 (CGEN_CPU_DESC VAR_6,
     const char **VAR_7,
     int VAR_8,
     long *VAR_9,
     long VAR_10)
{
  const char *VAR_11;
  enum cgen_parse_operand_result VAR_12;
  bfd_vma VAR_13;

  if (FUNC_3 (*VAR_7, "%lo(", 4) == 0)
    {
      *VAR_7 += 4;
      VAR_11 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_3,
       & VAR_12, & VAR_13);
      if (**VAR_7 != ')')
 return FUNC_0("missing `)'");
      ++*VAR_7;
      if (VAR_11 == ((void*)0)
   && VAR_12 == VAR_5)
 VAR_13 &= 0xffff;
      if (VAR_10)
 *VAR_9 = (long)(short) VAR_13;
      else
 *VAR_9 = VAR_13;
      return VAR_11;
    }

  if (FUNC_3 (*VAR_7, "%hi(", 4) == 0)
    {
      *VAR_7 += 4;
      VAR_11 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_1,
       & VAR_12, & VAR_13);
      if (**VAR_7 != ')')
 return FUNC_0("missing `)'");
      ++*VAR_7;
      if (VAR_11 == ((void*)0)
   && VAR_12 == VAR_5)
 VAR_13 = (VAR_13 + 0x8000) >> 16;
      *VAR_9 = VAR_13;
      return VAR_11;
    }

  if (FUNC_3 (*VAR_7, "%uhi(", 5) == 0)
    {
      *VAR_7 += 5;
      VAR_11 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_2,
       & VAR_12, & VAR_13);
      if (**VAR_7 != ')')
 return FUNC_0("missing `)'");
      ++*VAR_7;
      if (VAR_11 == ((void*)0)
   && VAR_12 == VAR_5)
 VAR_13 = VAR_13 >> 16;
      *VAR_9 = VAR_13;
      return VAR_11;
    }

  if (FUNC_3 (*VAR_7, "%sdaoff(", 8) == 0)
    {
      *VAR_7 += 8;
      VAR_11 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_0,
       ((void*)0), & VAR_13);
      if (**VAR_7 != ')')
 return FUNC_0("missing `)'");
      ++*VAR_7;
      *VAR_9 = VAR_13;
      return VAR_11;
    }

  if (FUNC_3 (*VAR_7, "%tpoff(", 7) == 0)
    {
      *VAR_7 += 7;
      VAR_11 = FUNC_1 (VAR_6, VAR_7, VAR_8, VAR_4,
       ((void*)0), & VAR_13);
      if (**VAR_7 != ')')
 return FUNC_0("missing `)'");
      ++*VAR_7;
      *VAR_9 = VAR_13;
      return VAR_11;
    }

  if (**VAR_7 == '%')
    return FUNC_0("invalid %function() here");

  return FUNC_2 (VAR_6, VAR_7, VAR_8, VAR_9);
}
