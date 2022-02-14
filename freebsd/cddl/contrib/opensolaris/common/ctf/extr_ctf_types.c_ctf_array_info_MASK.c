
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_7__ {int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_8__ {int cta_nelems; int cta_index; int cta_contents; } ;
typedef TYPE_2__ ctf_array_t ;
struct TYPE_9__ {int ctr_nelems; int ctr_index; int ctr_contents; } ;
typedef TYPE_3__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__ const*,int *,scalar_t__*) ;
 TYPE_1__* FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(ctf_file_t *VAR_3, ctf_id_t VAR_4, ctf_arinfo_t *VAR_5)
{
 ctf_file_t *VAR_6 = VAR_3;
 const ctf_type_t *VAR_7;
 const ctf_array_t *VAR_8;
 ssize_t VAR_9;

 if ((VAR_7 = FUNC_2(&VAR_3, VAR_4)) == ((void*)0))
  return (VAR_0);

 if (FUNC_0(VAR_3, VAR_7->ctt_info) != VAR_1)
  return (FUNC_3(VAR_6, VAR_2));

 (void) FUNC_1(VAR_3, VAR_7, ((void*)0), &VAR_9);

 VAR_8 = (const ctf_array_t *)((uintptr_t)VAR_7 + VAR_9);
 VAR_5->ctr_contents = VAR_8->cta_contents;
 VAR_5->ctr_index = VAR_8->cta_index;
 VAR_5->ctr_nelems = VAR_8->cta_nelems;

 return (0);
}
