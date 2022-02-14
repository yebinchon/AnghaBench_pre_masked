
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_private {int list; } ;
struct inode {struct pstore_private* i_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct pstore_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1)
{
 struct pstore_private *VAR_2 = VAR_1->i_private;
 unsigned long VAR_3;
 if (VAR_2) {
  FUNC_2(&VAR_0, VAR_3);
  FUNC_1(&VAR_2->list);
  FUNC_3(&VAR_0, VAR_3);
  FUNC_0(VAR_2);
 }
}
