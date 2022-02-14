
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct TYPE_2__ {int * el; int * bh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ocfs2_path*) ;
 scalar_t__ FUNC_3 (struct ocfs2_path*) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_path *VAR_1, struct ocfs2_path *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_3(VAR_1) != FUNC_3(VAR_2));
 FUNC_0(FUNC_2(VAR_1) != FUNC_2(VAR_2));

 for(VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_1->p_node[VAR_3].bh);

  VAR_1->p_node[VAR_3].bh = VAR_2->p_node[VAR_3].bh;
  VAR_1->p_node[VAR_3].el = VAR_2->p_node[VAR_3].el;

  VAR_2->p_node[VAR_3].bh = ((void*)0);
  VAR_2->p_node[VAR_3].el = ((void*)0);
 }
}
