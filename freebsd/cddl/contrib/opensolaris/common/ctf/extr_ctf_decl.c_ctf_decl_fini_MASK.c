
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cd_nodes; } ;
typedef TYPE_1__ ctf_decl_t ;
typedef int ctf_decl_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;

void
FUNC_2(ctf_decl_t *VAR_2)
{
 ctf_decl_node_t *VAR_3, *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_3 = FUNC_1(&VAR_2->cd_nodes[VAR_5]);
      VAR_3 != ((void*)0); VAR_3 = VAR_4) {
   VAR_4 = FUNC_1(VAR_3);
   FUNC_0(VAR_3, sizeof (ctf_decl_node_t));
  }
 }
}
