
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_link_hash_table {int * relbrlt; int * brlt; int * glink; int * sfpr; } ;
struct bfd_link_info {int shared; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int) ;
 struct ppc_link_hash_table* FUNC_2 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_9, struct bfd_link_info *VAR_10)
{
  struct ppc_link_hash_table *VAR_11;
  flagword VAR_12;

  VAR_11 = FUNC_2 (VAR_10);


  VAR_12 = (VAR_1 | VAR_6 | VAR_2 | VAR_7
    | VAR_3 | VAR_4 | VAR_5);
  VAR_11->sfpr = FUNC_0 (VAR_9, ".sfpr",
         VAR_12);
  if (VAR_11->sfpr == ((void*)0)
      || ! FUNC_1 (VAR_9, VAR_11->sfpr, 2))
    return VAR_0;


  VAR_11->glink = FUNC_0 (VAR_9, ".glink",
          VAR_12);
  if (VAR_11->glink == ((void*)0)
      || ! FUNC_1 (VAR_9, VAR_11->glink, 3))
    return VAR_0;


  VAR_12 = (VAR_1 | VAR_6
    | VAR_3 | VAR_4 | VAR_5);
  VAR_11->brlt = FUNC_0 (VAR_9, ".branch_lt",
         VAR_12);
  if (VAR_11->brlt == ((void*)0)
      || ! FUNC_1 (VAR_9, VAR_11->brlt, 3))
    return VAR_0;

  if (!VAR_10->shared)
    return VAR_8;

  VAR_12 = (VAR_1 | VAR_6 | VAR_7
    | VAR_3 | VAR_4 | VAR_5);
  VAR_11->relbrlt = FUNC_0 (VAR_9,
            ".rela.branch_lt",
            VAR_12);
  if (!VAR_11->relbrlt
      || ! FUNC_1 (VAR_9, VAR_11->relbrlt, 3))
    return VAR_0;

  return VAR_8;
}
