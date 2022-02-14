
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pv_chunks_list {int pvc_lock; int pvc_list; } ;
struct pv_chunk {int dummy; } ;


 int FUNC_0 (int *,struct pv_chunk*,int ) ;
 int FUNC_1 (struct pv_chunk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 size_t FUNC_4 (struct pv_chunk*) ;
 struct pv_chunks_list* VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct pv_chunk *VAR_2)
{
 struct pv_chunks_list *VAR_3;

 VAR_3 = &VAR_1[FUNC_4(VAR_2)];
 FUNC_2(&VAR_3->pvc_lock);
 FUNC_0(&VAR_3->pvc_list, VAR_2, VAR_0);
 FUNC_3(&VAR_3->pvc_lock);
 FUNC_1(VAR_2);
}
