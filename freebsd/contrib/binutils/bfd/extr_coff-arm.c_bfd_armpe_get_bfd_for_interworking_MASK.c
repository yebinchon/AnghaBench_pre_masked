
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_arm_link_hash_table {int * bfd_of_glue_owner; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int) ;
 struct coff_arm_link_hash_table* FUNC_4 (struct bfd_link_info*) ;

bfd_boolean
FUNC_5 (bfd * VAR_10,
      struct bfd_link_info * VAR_11)
{
  struct coff_arm_link_hash_table * VAR_12;
  flagword VAR_13;
  asection * VAR_14;



  if (VAR_11->relocatable)
    return VAR_9;

  VAR_12 = FUNC_4 (VAR_11);

  FUNC_0 (VAR_12 != ((void*)0));

  if (VAR_12->bfd_of_glue_owner != ((void*)0))
    return VAR_9;

  VAR_14 = FUNC_1 (VAR_10, VAR_0);

  if (VAR_14 == ((void*)0))
    {
      VAR_13 = (VAR_2 | VAR_6 | VAR_4 | VAR_5
        | VAR_3 | VAR_7);
      VAR_14 = FUNC_2 (VAR_10, VAR_0,
      VAR_13);
      if (VAR_14 == ((void*)0)
   || ! FUNC_3 (VAR_10, VAR_14, 2))
 return VAR_1;
    }

  VAR_14 = FUNC_1 (VAR_10, VAR_8);

  if (VAR_14 == ((void*)0))
    {
      VAR_13 = (VAR_2 | VAR_6 | VAR_4 | VAR_5
        | VAR_3 | VAR_7);
      VAR_14 = FUNC_2 (VAR_10, VAR_8,
      VAR_13);

      if (VAR_14 == ((void*)0)
   || ! FUNC_3 (VAR_10, VAR_14, 2))
 return VAR_1;
    }


  VAR_12->bfd_of_glue_owner = VAR_10;

  return VAR_9;
}
