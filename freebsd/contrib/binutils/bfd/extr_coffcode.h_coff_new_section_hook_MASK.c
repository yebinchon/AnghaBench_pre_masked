
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int n_sclass; int n_type; } ;
struct TYPE_12__ {TYPE_1__ syment; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef TYPE_3__ combined_entry_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_14__ {int symbol; scalar_t__ alignment_power; } ;
typedef TYPE_4__ asection ;
struct TYPE_15__ {TYPE_3__* native; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_4__*,int ,int ) ;
 TYPE_5__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd * VAR_7, asection * VAR_8)
{
  combined_entry_type *VAR_9;
  bfd_size_type VAR_10;

  VAR_8->alignment_power = VAR_0;
  if (!FUNC_0 (VAR_7, VAR_8))
    return VAR_2;






  VAR_10 = sizeof (combined_entry_type) * 10;
  VAR_9 = FUNC_4 (VAR_7, VAR_10);
  if (VAR_9 == ((void*)0))
    return VAR_2;







  VAR_9->u.syment.n_type = VAR_4;
  VAR_9->u.syment.n_sclass = VAR_1;

  FUNC_6 (VAR_8->symbol)->native = VAR_9;

  FUNC_5 (VAR_7, VAR_8,
         VAR_5,
         VAR_6);

  return VAR_3;
}
