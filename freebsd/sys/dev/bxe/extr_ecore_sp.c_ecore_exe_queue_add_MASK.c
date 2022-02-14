
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_exeq_elem {int link; } ;
struct ecore_exe_queue_obj {int (* optimize ) (struct bxe_softc*,int ,struct ecore_exeq_elem*) ;int (* validate ) (struct bxe_softc*,int ,struct ecore_exeq_elem*) ;int lock; int exe_queue; int owner; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct bxe_softc*,struct ecore_exeq_elem*) ;
 int FUNC_5 (struct bxe_softc*,int ,struct ecore_exeq_elem*) ;
 int FUNC_6 (struct bxe_softc*,int ,struct ecore_exeq_elem*) ;

__attribute__((used)) static inline int FUNC_7(struct bxe_softc *VAR_1,
          struct ecore_exe_queue_obj *VAR_2,
          struct ecore_exeq_elem *VAR_3,
          bool VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_2->lock);

 if (!VAR_4) {

  VAR_5 = VAR_2->optimize(VAR_1, VAR_2->owner, VAR_3);
  if (VAR_5)
   goto free_and_exit;


  VAR_5 = VAR_2->validate(VAR_1, VAR_2->owner, VAR_3);
  if (VAR_5) {
   FUNC_1(VAR_1, "Preamble failed: %d\n", VAR_5);
   goto free_and_exit;
  }
 }


 FUNC_0(&VAR_3->link, &VAR_2->exe_queue);

 FUNC_3(&VAR_2->lock);

 return VAR_0;

free_and_exit:
 FUNC_4(VAR_1, VAR_3);

 FUNC_3(&VAR_2->lock);

 return VAR_5;
}
