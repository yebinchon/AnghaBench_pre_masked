
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_softc {int avail; struct cpsw_slot* _slots; } ;
struct cpsw_slot {int bd_offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cpsw_slot*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct cpsw_slot*) ;

__attribute__((used)) static void
FUNC_4(struct cpsw_softc *VAR_1)
{
 struct cpsw_slot *VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->avail);


 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_1->_slots); VAR_3++) {
  VAR_2 = &VAR_1->_slots[VAR_3];
  VAR_2->bd_offset = FUNC_2(VAR_3);
  FUNC_1(&VAR_1->avail, VAR_2, VAR_0);
 }
}
