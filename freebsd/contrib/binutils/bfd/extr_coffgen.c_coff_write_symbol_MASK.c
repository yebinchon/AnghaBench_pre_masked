
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {unsigned int n_numaux; int n_type; int n_sclass; int n_scnum; } ;
struct TYPE_16__ {TYPE_12__ syment; int auxent; } ;
struct TYPE_17__ {TYPE_2__ u; } ;
typedef TYPE_3__ combined_entry_type ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_18__ {int flags; TYPE_10__* section; } ;
typedef TYPE_4__ asymbol ;
typedef int asection ;
struct TYPE_15__ {int target_index; } ;
struct TYPE_13__ {TYPE_1__* output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int,int,unsigned int,void*) ;
 int FUNC_4 (int *,TYPE_12__*,void*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_10__*) ;
 scalar_t__ FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *,TYPE_4__*,TYPE_3__*,scalar_t__*,int **,scalar_t__*) ;
 int FUNC_10 (TYPE_4__*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_7,
     asymbol *VAR_8,
     combined_entry_type *VAR_9,
     bfd_vma *VAR_10,
     bfd_size_type *VAR_11,
     asection **VAR_12,
     bfd_size_type *VAR_13)
{
  unsigned int VAR_14 = VAR_9->u.syment.n_numaux;
  int VAR_15 = VAR_9->u.syment.n_type;
  int VAR_16 = VAR_9->u.syment.n_sclass;
  void * VAR_17;
  bfd_size_type VAR_18;

  if (VAR_9->u.syment.n_sclass == VAR_1)
    VAR_8->flags |= VAR_0;

  if (VAR_8->flags & VAR_0
      && FUNC_6 (VAR_8->section))
    VAR_9->u.syment.n_scnum = VAR_4;

  else if (FUNC_6 (VAR_8->section))
    VAR_9->u.syment.n_scnum = VAR_3;

  else if (FUNC_7 (VAR_8->section))
    VAR_9->u.syment.n_scnum = VAR_5;

  else
    VAR_9->u.syment.n_scnum =
      VAR_8->section->output_section->target_index;

  FUNC_9 (VAR_7, VAR_8, VAR_9, VAR_11,
   VAR_12, VAR_13);

  VAR_18 = FUNC_5 (VAR_7);
  VAR_17 = FUNC_0 (VAR_7, VAR_18);
  if (!VAR_17)
    return VAR_2;
  FUNC_4 (VAR_7, &VAR_9->u.syment, VAR_17);
  if (FUNC_1 (VAR_17, VAR_18, VAR_7) != VAR_18)
    return VAR_2;
  FUNC_8 (VAR_7, VAR_17);

  if (VAR_9->u.syment.n_numaux > 0)
    {
      bfd_size_type VAR_19;
      unsigned int VAR_20;

      VAR_19 = FUNC_2 (VAR_7);
      VAR_17 = FUNC_0 (VAR_7, VAR_19);
      if (!VAR_17)
 return VAR_2;
      for (VAR_20 = 0; VAR_20 < VAR_9->u.syment.n_numaux; VAR_20++)
 {
   FUNC_3 (VAR_7,
     &((VAR_9 + VAR_20 + 1)->u.auxent),
     VAR_15, VAR_16, (int) VAR_20,
     VAR_9->u.syment.n_numaux,
     VAR_17);
   if (FUNC_1 (VAR_17, VAR_19, VAR_7) != VAR_19)
     return VAR_2;
 }
      FUNC_8 (VAR_7, VAR_17);
    }


  FUNC_10 (VAR_8, *VAR_10);

  *VAR_10 += VAR_14 + 1;
  return VAR_6;
}
