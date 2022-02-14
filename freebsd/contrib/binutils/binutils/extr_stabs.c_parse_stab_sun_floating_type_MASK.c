
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int debug_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const**,int *) ;

__attribute__((used)) static debug_type
FUNC_4 (void *VAR_4, const char **VAR_5)
{
  const char *VAR_6;
  bfd_vma VAR_7;
  bfd_vma VAR_8;

  VAR_6 = *VAR_5;



  VAR_7 = FUNC_3 (VAR_5, (bfd_boolean *) ((void*)0));
  if (**VAR_5 != ';')
    {
      FUNC_0 (VAR_6);
      return VAR_0;
    }


  VAR_8 = FUNC_3 (VAR_5, (bfd_boolean *) ((void*)0));
  if (**VAR_5 != ';')
    {
      FUNC_0 (VAR_6);
      return VAR_0;
    }

  if (VAR_7 == VAR_1
      || VAR_7 == VAR_2
      || VAR_7 == VAR_3)
    return FUNC_1 (VAR_4, VAR_8);

  return FUNC_2 (VAR_4, VAR_8);
}
