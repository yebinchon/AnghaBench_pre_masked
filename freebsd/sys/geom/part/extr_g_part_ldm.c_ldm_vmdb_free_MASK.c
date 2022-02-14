
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldm_xvblk {struct ldm_xvblk* data; } ;
struct ldm_vblk {struct ldm_vblk* data; } ;
struct ldm_db {int vblks; int xvblks; } ;


 int FUNC_0 (int *) ;
 struct ldm_xvblk* FUNC_1 (int *) ;
 int FUNC_2 (struct ldm_xvblk*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ldm_xvblk*) ;

__attribute__((used)) static void
FUNC_4(struct ldm_db *VAR_1)
{
 struct ldm_vblk *VAR_2;
 struct ldm_xvblk *VAR_3;

 while (!FUNC_0(&VAR_1->xvblks)) {
  VAR_3 = FUNC_1(&VAR_1->xvblks);
  FUNC_2(VAR_3, VAR_0);
  FUNC_3(VAR_3->data);
  FUNC_3(VAR_3);
 }
 while (!FUNC_0(&VAR_1->vblks)) {
  VAR_2 = FUNC_1(&VAR_1->vblks);
  FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
}
