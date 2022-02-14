
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cgen_parse_operand_result { ____Placeholder_cgen_parse_operand_result } cgen_parse_operand_result ;
typedef long bfd_vma ;
typedef int CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,char const**,int,int ,int*,long*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_3 (CGEN_CPU_DESC VAR_7, const char **VAR_8, int VAR_9, long *VAR_10)
{
  const char *VAR_11;
  enum cgen_parse_operand_result VAR_12;
  bfd_vma VAR_13;






  if (FUNC_2 (*VAR_8, "($", 2) == 0)
    return "not zero";

  if (FUNC_1 (*VAR_8, "%lo(", 4) == 0)
    {
      *VAR_8 += 4;
      VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_3,
       &VAR_12, &VAR_13);
      if (**VAR_8 != ')')
 return "missing `)'";
      ++*VAR_8;
      if (VAR_11 == ((void*)0)
   && (VAR_12 != VAR_6 || VAR_13 != 0))
 return "not zero";
      *VAR_10 = VAR_13;
      return VAR_11;
    }

  if (FUNC_1 (*VAR_8, "%hi(", 4) == 0)
    {
      *VAR_8 += 4;
      VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_1,
       &VAR_12, &VAR_13);
      if (**VAR_8 != ')')
 return "missing `)'";
      ++*VAR_8;
      if (VAR_11 == ((void*)0)
   && (VAR_12 != VAR_6 || VAR_13 != 0))
 return "not zero";
      *VAR_10 = VAR_13;
      return VAR_11;
    }

  if (FUNC_1 (*VAR_8, "%uhi(", 5) == 0)
    {
      *VAR_8 += 5;
      VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_2,
       &VAR_12, &VAR_13);
      if (**VAR_8 != ')')
 return "missing `)'";
      ++*VAR_8;
      if (VAR_11 == ((void*)0)
   && (VAR_12 != VAR_6 || VAR_13 != 0))
 return "not zero";
      *VAR_10 = VAR_13;
      return VAR_11;
    }

  if (FUNC_1 (*VAR_8, "%sdaoff(", 8) == 0)
    {
      *VAR_8 += 8;
      VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_0,
       &VAR_12, &VAR_13);
      if (**VAR_8 != ')')
 return "missing `)'";
      ++*VAR_8;
      if (VAR_11 == ((void*)0)
   && (VAR_12 != VAR_6 || VAR_13 != 0))
 return "not zero";
      *VAR_10 = VAR_13;
      return VAR_11;
    }

  if (FUNC_1 (*VAR_8, "%tpoff(", 7) == 0)
    {
      *VAR_8 += 7;
      VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_4,
       &VAR_12, &VAR_13);
      if (**VAR_8 != ')')
 return "missing `)'";
      ++*VAR_8;
      if (VAR_11 == ((void*)0)
   && (VAR_12 != VAR_6 || VAR_13 != 0))
 return "not zero";
      *VAR_10 = VAR_13;
      return VAR_11;
    }

  if (**VAR_8 == '%')
    return "invalid %function() here";

  VAR_11 = FUNC_0 (VAR_7, VAR_8, VAR_9, VAR_5,
          &VAR_12, &VAR_13);
  if (VAR_11 == ((void*)0)
      && (VAR_12 != VAR_6 || VAR_13 != 0))
    return "not zero";

  return VAR_11;
}
