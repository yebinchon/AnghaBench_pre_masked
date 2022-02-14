
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mempolicy {int flags; int refcnt; } ;
typedef int nodemask_t ;
struct TYPE_5__ {struct mempolicy* mempolicy; } ;


 int VAR_0 ;
 struct mempolicy* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 () ;
 struct mempolicy* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mempolicy*,int *,int ) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

struct mempolicy *FUNC_10(struct mempolicy *VAR_7)
{
 struct mempolicy *VAR_8 = FUNC_4(VAR_6, VAR_1);

 if (!VAR_8)
  return FUNC_0(-VAR_0);


 if (VAR_7 == VAR_5->mempolicy) {
  FUNC_8(VAR_5);
  *VAR_8 = *VAR_7;
  FUNC_9(VAR_5);
 } else
  *VAR_8 = *VAR_7;

 FUNC_6();
 if (FUNC_3()) {
  nodemask_t VAR_9 = FUNC_2(VAR_5);
  if (VAR_8->flags & VAR_2)
   FUNC_5(VAR_8, &VAR_9, VAR_4);
  else
   FUNC_5(VAR_8, &VAR_9, VAR_3);
 }
 FUNC_7();
 FUNC_1(&VAR_8->refcnt, 1);
 return VAR_8;
}
