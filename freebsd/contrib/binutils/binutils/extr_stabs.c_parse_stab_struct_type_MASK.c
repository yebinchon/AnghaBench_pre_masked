
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef scalar_t__ debug_type ;
typedef int debug_method ;
typedef int debug_field ;
typedef int debug_baseclass ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,int ,int ,int *,int *,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (void*,int ,int ,int *) ;
 int FUNC_2 (char const**,int *) ;
 int FUNC_3 (void*,struct stab_handle*,char const**,int **) ;
 int FUNC_4 (void*,struct stab_handle*,char const*,char const**,int const*,int **) ;
 int FUNC_5 (void*,struct stab_handle*,char const**,int **,int *) ;
 int FUNC_6 (void*,struct stab_handle*,char const**,int const*,scalar_t__*,int *) ;

__attribute__((used)) static debug_type
FUNC_7 (void *VAR_1, struct stab_handle *VAR_2,
   const char *VAR_3, const char **VAR_4,
   bfd_boolean VAR_5, const int *VAR_6)
{
  const char *VAR_7;
  bfd_vma VAR_8;
  debug_baseclass *VAR_9;
  debug_field *VAR_10;
  bfd_boolean VAR_11;
  debug_method *VAR_12;
  debug_type VAR_13;
  bfd_boolean VAR_14;

  VAR_7 = *VAR_4;


  VAR_8 = FUNC_2 (VAR_4, (bfd_boolean *) ((void*)0));


  if (! FUNC_3 (VAR_1, VAR_2, VAR_4, &VAR_9)
      || ! FUNC_5 (VAR_1, VAR_2, VAR_4, &VAR_10, &VAR_11)
      || ! FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, &VAR_12)
      || ! FUNC_6 (VAR_1, VAR_2, VAR_4, VAR_6, &VAR_13,
       &VAR_14))
    return VAR_0;

  if (! VAR_11
      && VAR_9 == ((void*)0)
      && VAR_12 == ((void*)0)
      && VAR_13 == VAR_0
      && ! VAR_14)
    return FUNC_1 (VAR_1, VAR_5, VAR_8, VAR_10);

  return FUNC_0 (VAR_1, VAR_5, VAR_8, VAR_10, VAR_9,
     VAR_12, VAR_13, VAR_14);
}
