
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ iif_newidx; TYPE_4__* iif_template; scalar_t__ iif_refmerge; int iif_ta; } ;
typedef TYPE_5__ iifind_data_t ;
struct TYPE_12__ {scalar_t__ ii_type; int ii_nargs; TYPE_3__** ii_args; int ii_owner; TYPE_1__* ii_dtype; int ii_name; } ;
typedef TYPE_6__ iidesc_t ;
struct TYPE_10__ {scalar_t__ ii_type; char* ii_name; char* ii_owner; int ii_nargs; TYPE_2__** ii_args; } ;
struct TYPE_9__ {scalar_t__ t_id; } ;
struct TYPE_8__ {int t_id; } ;
struct TYPE_7__ {scalar_t__ t_id; } ;
 int FUNC_0 (int,char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, void *VAR_1)
{
 iidesc_t *VAR_2 = VAR_0;
 iifind_data_t *VAR_3 = VAR_1;
 int VAR_4;

 if (VAR_2->ii_type != VAR_3->iif_template->ii_type ||
     !FUNC_2(VAR_2->ii_name, VAR_3->iif_template->ii_name) ||
     VAR_2->ii_dtype->t_id != VAR_3->iif_newidx)
  return (0);

 if ((VAR_2->ii_type == 129 || VAR_2->ii_type == 131) &&
     !FUNC_2(VAR_2->ii_owner, VAR_3->iif_template->ii_owner))
  return (0);

 if (VAR_2->ii_nargs != VAR_3->iif_template->ii_nargs)
  return (0);

 for (VAR_4 = 0; VAR_4 < VAR_2->ii_nargs; VAR_4++) {
  if (FUNC_1(VAR_3->iif_ta,
      VAR_3->iif_template->ii_args[VAR_4]->t_id) !=
      VAR_2->ii_args[VAR_4]->t_id)
   return (0);
 }

 if (VAR_3->iif_refmerge) {
  switch (VAR_3->iif_template->ii_type) {
  case 135:
  case 131:
  case 134:
  case 129:
   FUNC_0(3, "suppressing duping of %d %s from %s\n",
       VAR_3->iif_template->ii_type,
       VAR_3->iif_template->ii_name,
       (VAR_3->iif_template->ii_owner ?
       VAR_3->iif_template->ii_owner : "NULL"));
   return (0);
  case 133:
  case 132:
  case 130:
  case 128:
   break;
  }
 }

 return (-1);
}
