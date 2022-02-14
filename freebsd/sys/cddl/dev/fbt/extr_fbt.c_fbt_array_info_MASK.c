
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_12__ {scalar_t__ ctftab; } ;
typedef TYPE_1__ linker_ctf_t ;
struct TYPE_13__ {int ctt_info; } ;
typedef TYPE_2__ ctf_type_t ;
typedef int ctf_id_t ;
struct TYPE_14__ {int cth_version; } ;
typedef TYPE_3__ ctf_header_t ;
struct TYPE_15__ {int cta_nelems; int cta_index; int cta_contents; } ;
typedef TYPE_4__ ctf_array_t ;
struct TYPE_16__ {int ctr_nelems; int ctr_index; int ctr_contents; } ;
typedef TYPE_5__ ctf_arinfo_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__*,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_2__ const*,int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(linker_ctf_t *VAR_1, ctf_id_t VAR_2, ctf_arinfo_t *VAR_3)
{
 const ctf_header_t *VAR_4 = (const ctf_header_t *) VAR_1->ctftab;
 const ctf_type_t *VAR_5;
 const ctf_array_t *VAR_6;
 ssize_t VAR_7;

 FUNC_1(VAR_3, sizeof(*VAR_3));

 if ((VAR_5 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
  return;

 if (FUNC_0(VAR_5->ctt_info) != VAR_0)
  return;

 (void) FUNC_3(VAR_4->cth_version, VAR_5, ((void*)0), &VAR_7);

 VAR_6 = (const ctf_array_t *)((uintptr_t)VAR_5 + VAR_7);
 VAR_3->ctr_contents = VAR_6->cta_contents;
 VAR_3->ctr_index = VAR_6->cta_index;
 VAR_3->ctr_nelems = VAR_6->cta_nelems;
}
