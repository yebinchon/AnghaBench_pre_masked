
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
typedef int objnum ;
struct TYPE_14__ {scalar_t__ dn_type; int dn_datablkszsec; } ;
typedef TYPE_2__ dnode_phys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,TYPE_2__*,int ,scalar_t__,size_t) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__ const*,int *,scalar_t__,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*,int ,int,int,scalar_t__*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_5(const spa_t *VAR_7)
{
 dnode_phys_t VAR_8;
 uint64_t VAR_9, VAR_10;
 size_t VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_3(VAR_7, &VAR_7->spa_mos, VAR_1,
     &VAR_8)) != 0)
  return (VAR_12);
 if ((VAR_12 = FUNC_4(VAR_7, &VAR_8, VAR_2,
     sizeof (VAR_9), 1, &VAR_9)) != 0) {




  return (0);
 }

 if ((VAR_12 = FUNC_3(VAR_7, &VAR_7->spa_mos, VAR_9, &VAR_8)) != 0)
  return (VAR_12);

 if (VAR_8.dn_type != VAR_0)
  return (VAR_3);

 VAR_11 = VAR_8.dn_datablkszsec * 512;
 if (FUNC_0(VAR_7, &VAR_8, 0, VAR_6, VAR_11))
  return (VAR_3);

 VAR_10 = *(uint64_t *) VAR_6;
 if (VAR_10 == VAR_4)
  VAR_12 = FUNC_2(&VAR_8, VAR_5);
 else
  VAR_12 = FUNC_1(VAR_7, &VAR_8, VAR_5);

 return (VAR_12);
}
