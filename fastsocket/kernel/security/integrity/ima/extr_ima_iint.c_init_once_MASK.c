
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_iint_cache {unsigned long flags; int refcount; scalar_t__ opencount; scalar_t__ writecount; scalar_t__ readcount; int mutex; scalar_t__ version; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ima_iint_cache*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ima_iint_cache *VAR_1 = VAR_0;

 FUNC_1(VAR_1, 0, sizeof *VAR_1);
 VAR_1->version = 0;
 VAR_1->flags = 0UL;
 FUNC_2(&VAR_1->mutex);
 VAR_1->readcount = 0;
 VAR_1->writecount = 0;
 VAR_1->opencount = 0;
 FUNC_0(&VAR_1->refcount, 1);
}
