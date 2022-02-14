
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cgen_operand_type { ____Placeholder_cgen_operand_type } cgen_operand_type ;
typedef unsigned long bfd_vma ;
typedef int CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 char const* FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,char const**,int,int,int *,unsigned long*) ;
 char const* FUNC_3 (int ,char const**,int,unsigned long*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_5 (CGEN_CPU_DESC VAR_3, const char **VAR_4,
   enum cgen_operand_type VAR_5, unsigned long *VAR_6)
{
  const char *VAR_7;
  bfd_vma VAR_8;



  if (FUNC_4 (*VAR_4, "%tpoff(", 7) == 0)
    {
      int VAR_9;
      *VAR_4 += 7;
      switch (VAR_5)
 {
 case 130:
   VAR_9 = VAR_0;
   break;
 case 129:
   VAR_9 = VAR_1;
   break;
 case 128:
   VAR_9 = VAR_2;
   break;
 default:

   FUNC_1 ();
 }
      VAR_7 = FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_9,
       ((void*)0), &VAR_8);
      if (**VAR_4 != ')')
 return "missing `)'";
      ++*VAR_4;
      *VAR_6 = VAR_8;
      return VAR_7;
    }

  if (**VAR_4 == '%')
    return FUNC_0("invalid %function() here");

  return FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_6);
}
