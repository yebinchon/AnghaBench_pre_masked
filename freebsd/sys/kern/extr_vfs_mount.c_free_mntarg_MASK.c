
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntarg {struct mntarg* v; int list; } ;
struct mntaarg {struct mntaarg* v; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mntarg* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mntarg*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mntarg *VAR_2)
{
 struct mntaarg *VAR_3;

 while (!FUNC_0(&VAR_2->list)) {
  VAR_3 = FUNC_1(&VAR_2->list);
  FUNC_2(&VAR_2->list, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
 FUNC_3(VAR_2->v, VAR_0);
 FUNC_3(VAR_2, VAR_0);
}
