
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_15__ {int ctt_info; } ;
typedef TYPE_2__ ctf_type_t ;
typedef int ctf_id_t ;
struct TYPE_16__ {TYPE_1__* ctf_dmodel; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_17__ {int ctr_contents; int ctr_nelems; } ;
typedef TYPE_4__ ctf_arinfo_t ;
struct TYPE_14__ {int ctd_pointer; int ctd_int; } ;


 int VAR_0 ;




 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__ const*,int *,int *) ;
 TYPE_2__* FUNC_3 (TYPE_3__**,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

ssize_t
FUNC_5(ctf_file_t *VAR_1, ctf_id_t VAR_2)
{
 const ctf_type_t *VAR_3;
 ssize_t VAR_4;
 ctf_arinfo_t VAR_5;

 if ((VAR_2 = FUNC_4(VAR_1, VAR_2)) == VAR_0)
  return (-1);

 if ((VAR_3 = FUNC_3(&VAR_1, VAR_2)) == ((void*)0))
  return (-1);

 switch (FUNC_0(VAR_1, VAR_3->ctt_info)) {
 case 128:
  return (VAR_1->ctf_dmodel->ctd_pointer);

 case 129:
  return (0);

 case 130:
  return (VAR_1->ctf_dmodel->ctd_int);

 case 131:







  if ((VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0), ((void*)0))) > 0)
   return (VAR_4);

  if (FUNC_1(VAR_1, VAR_2, &VAR_5) == VAR_0 ||
      (VAR_4 = FUNC_5(VAR_1, VAR_5.ctr_contents)) == VAR_0)
   return (-1);

  return (VAR_4 * VAR_5.ctr_nelems);

 default:
  return (FUNC_2(VAR_1, VAR_3, ((void*)0), ((void*)0)));
 }
}
