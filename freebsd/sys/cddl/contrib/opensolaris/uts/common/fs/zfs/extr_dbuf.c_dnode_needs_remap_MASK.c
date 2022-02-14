
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_5__ {TYPE_1__* dn_phys; int dn_objset; } ;
typedef TYPE_2__ dnode_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
struct TYPE_4__ {scalar_t__ dn_nlevels; int dn_nblkptr; int * dn_blkptr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *) ;

boolean_t
FUNC_6(const dnode_t *VAR_6)
{
 spa_t *VAR_7 = FUNC_1(VAR_6->dn_objset);
 boolean_t VAR_8 = VAR_0;

 if (VAR_6->dn_phys->dn_nlevels == 0) {
  return (VAR_0);
 }

 FUNC_0(FUNC_4(VAR_7, VAR_5));

 FUNC_2(VAR_7, VAR_4, VAR_2, VAR_3);
 for (int VAR_9 = 0; VAR_9 < VAR_6->dn_phys->dn_nblkptr; VAR_9++) {
  blkptr_t VAR_10 = VAR_6->dn_phys->dn_blkptr[VAR_9];
  if (FUNC_5(VAR_7, &VAR_10, ((void*)0), ((void*)0))) {
   VAR_8 = VAR_1;
   break;
  }
 }
 FUNC_3(VAR_7, VAR_4, VAR_2);

 return (VAR_8);
}
