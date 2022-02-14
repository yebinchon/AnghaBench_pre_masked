
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_usermount {int dummy; } ;
struct dtfs_poll {int dp_pcc; } ;
struct dtfs_mount {int dtm_pollent; scalar_t__ dtm_needwakeup; } ;


 struct dtfs_poll* FUNC_0 (int *) ;
 int FUNC_1 (struct dtfs_poll*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct dtfs_mount* FUNC_3 (struct puffs_usermount*) ;

__attribute__((used)) static void
FUNC_4(struct puffs_usermount *VAR_1)
{
 struct dtfs_mount *VAR_2 = FUNC_3(VAR_1);
 struct dtfs_poll *VAR_3;

 while (VAR_2->dtm_needwakeup) {
  VAR_2->dtm_needwakeup--;
  VAR_3 = FUNC_0(&VAR_2->dtm_pollent);
  if (VAR_3 == ((void*)0))
   return;

  FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_3->dp_pcc);
 }
}
