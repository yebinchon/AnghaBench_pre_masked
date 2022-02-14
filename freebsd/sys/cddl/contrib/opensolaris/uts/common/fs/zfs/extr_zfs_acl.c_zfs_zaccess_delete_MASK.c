
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_pflags; } ;
typedef TYPE_1__ znode_t ;
typedef int uint32_t ;
typedef int mode_t ;
typedef int cred_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int,int*,int *,int ,int *) ;

int
FUNC_6(znode_t *VAR_12, znode_t *VAR_13, cred_t *VAR_14)
{
 uint32_t VAR_15 = 0;
 uint32_t VAR_16 = 0;
 int VAR_17, VAR_18;
 mode_t VAR_19;
 boolean_t VAR_20 = VAR_5;
 boolean_t VAR_21 = VAR_5;
 if (VAR_13->z_pflags & (VAR_10 | VAR_11))
  return (FUNC_1(VAR_7));





 if ((VAR_17 = FUNC_5(VAR_12, VAR_1,
     &VAR_15, &VAR_20, VAR_4, VAR_14)) == 0)
  return (0);




 if ((VAR_18 = FUNC_5(VAR_13, VAR_0, &VAR_16,
     &VAR_21, VAR_4, VAR_14)) == 0)
  return (0);

 FUNC_0(VAR_17 && VAR_18);

 if (!VAR_20)
  return (VAR_17);
 if (!VAR_21)
  return (VAR_18);
 if (VAR_17 == VAR_6)
  return (FUNC_3(FUNC_2(VAR_12), VAR_14));






 VAR_17 = FUNC_5(VAR_12, VAR_2|VAR_3,
     &VAR_15, &VAR_20, VAR_4, VAR_14);

 if (VAR_17 != 0 && !VAR_20)
  return (VAR_17);





 VAR_19 = (VAR_15 & VAR_3) ? 0 : VAR_9;
 VAR_19 |= (VAR_15 & VAR_2) ? 0 : VAR_8;

 return (FUNC_4(VAR_13, VAR_12, VAR_19, VAR_14));

}
