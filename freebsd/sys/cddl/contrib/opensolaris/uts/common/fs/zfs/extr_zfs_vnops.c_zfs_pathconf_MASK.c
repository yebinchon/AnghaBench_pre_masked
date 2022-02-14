
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct TYPE_12__ {int v_type; int v_vfsp; } ;
typedef TYPE_2__ vnode_t ;
typedef int ulong_t ;
typedef int cred_t ;
typedef int caller_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,TYPE_1__**,int) ;

__attribute__((used)) static int
FUNC_10(vnode_t *VAR_14, int VAR_15, ulong_t *VAR_16, cred_t *VAR_17,
    caller_context_t *VAR_18)
{
 znode_t *VAR_19, *VAR_20;
 zfsvfs_t *VAR_21;
 int VAR_22;

 switch (VAR_15) {
 case 133:
  *VAR_16 = FUNC_0(VAR_3, VAR_10);
  return (0);

 case 134:
  *VAR_16 = 64;
  return (0);
 case 132:
  *VAR_16 = (int)VAR_4;
  return (0);






 case 137:
  *VAR_16 = 0;
  return (0);

 case 136:
  *VAR_16 = 1;
  return (0);

 case 135:
  *VAR_16 = VAR_0;
  return (0);

 default:
  return (VAR_2);
 }
}
