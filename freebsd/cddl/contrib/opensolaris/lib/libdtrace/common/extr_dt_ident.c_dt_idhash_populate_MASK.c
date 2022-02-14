
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dh_name; TYPE_2__* dh_tmpl; } ;
typedef TYPE_1__ dt_idhash_t ;
struct TYPE_7__ {int di_iarg; int * di_ops; int di_vers; int di_attr; int di_id; int di_flags; int di_kind; int * di_name; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_8__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,void*) ;
 int * FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int ,int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(dt_idhash_t *VAR_3)
{
 const dt_ident_t *VAR_4 = VAR_3->dh_tmpl;

 VAR_3->dh_tmpl = ((void*)0);
 FUNC_0("populating %s idhash from %p\n", VAR_3->dh_name, (void *)VAR_4);

 for (; VAR_4->di_name != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_3, VAR_4->di_name,
      VAR_4->di_kind, VAR_4->di_flags, VAR_4->di_id, VAR_4->di_attr,
      VAR_4->di_vers, VAR_4->di_ops ? VAR_4->di_ops : &VAR_1,
      VAR_4->di_iarg, 0) == ((void*)0))
   FUNC_2(VAR_2->pcb_jmpbuf, VAR_0);
 }
}
