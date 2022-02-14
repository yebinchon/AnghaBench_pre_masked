
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ulong_t ;
typedef int ctf_id_t ;
struct TYPE_5__ {int ctf_dthashlen; TYPE_2__** ctf_dthash; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_6__ {int dtd_type; struct TYPE_6__* dtd_hash; } ;
typedef TYPE_2__ ctf_dtdef_t ;



ctf_dtdef_t *
FUNC_0(ctf_file_t *VAR_0, ctf_id_t VAR_1)
{
 ulong_t VAR_2 = VAR_1 & (VAR_0->ctf_dthashlen - 1);
 ctf_dtdef_t *VAR_3;

 if (VAR_0->ctf_dthash == ((void*)0))
  return (((void*)0));

 for (VAR_3 = VAR_0->ctf_dthash[VAR_2]; VAR_3 != ((void*)0); VAR_3 = VAR_3->dtd_hash) {
  if (VAR_3->dtd_type == VAR_1)
   break;
 }

 return (VAR_3);
}
