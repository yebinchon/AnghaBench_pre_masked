
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
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ctf_decl_t *VAR_3)
{
 ctf_decl_node_t *VAR_4, *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_0; VAR_6 < VAR_1; VAR_6++) {
  for (VAR_4 = FUNC_0(&VAR_3->cd_nodes[VAR_6]);
      VAR_4 != ((void*)0); VAR_4 = VAR_5) {
   VAR_5 = FUNC_0(VAR_4);
   FUNC_1(VAR_4, VAR_2);
  }
 }
}
