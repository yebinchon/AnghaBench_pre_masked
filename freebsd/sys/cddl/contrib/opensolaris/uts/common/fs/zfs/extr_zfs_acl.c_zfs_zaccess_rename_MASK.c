
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_pflags; } ;
typedef TYPE_1__ znode_t ;
typedef int cred_t ;
struct TYPE_12__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_9__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int *) ;

int
FUNC_4(znode_t *VAR_7, znode_t *VAR_8, znode_t *VAR_9,
    znode_t *VAR_10, cred_t *VAR_11)
{
 int VAR_12;
 int VAR_13;

 if (VAR_8->z_pflags & VAR_6)
  return (FUNC_0(VAR_4));

 VAR_12 = (FUNC_1(VAR_8)->v_type == VAR_5) ?
     VAR_1 : VAR_0;
 if (FUNC_1(VAR_8)->v_type == VAR_5 && FUNC_1(VAR_7) != FUNC_1(VAR_9)) {
  if ((VAR_13 = FUNC_2(VAR_8, VAR_2, 0, VAR_3, VAR_11)))
   return (VAR_13);
 }







 if ((VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_11)))
  return (VAR_13);




 if (VAR_10) {
  if ((VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_11)))
   return (VAR_13);
 }




 VAR_13 = FUNC_2(VAR_9, VAR_12, 0, VAR_3, VAR_11);

 return (VAR_13);
}
