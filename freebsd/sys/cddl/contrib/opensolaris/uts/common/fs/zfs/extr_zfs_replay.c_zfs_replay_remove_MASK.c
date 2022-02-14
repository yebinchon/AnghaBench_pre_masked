
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
typedef int vnode_t ;
struct componentname {char* cn_nameptr; int cn_flags; int cn_lkflags; int cn_thread; int cn_cred; int cn_nameiop; int cn_namelen; } ;
struct TYPE_4__ {int lrc_txtype; } ;
struct TYPE_5__ {TYPE_1__ lr_common; int lr_doid; } ;
typedef TYPE_2__ lr_remove_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int **,struct componentname*) ;
 int FUNC_3 (int ,int *,struct componentname*) ;
 int FUNC_4 (int ,int *,struct componentname*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_12(void *VAR_10, void *VAR_11, boolean_t VAR_12)
{
 zfsvfs_t *VAR_13 = VAR_10;
 lr_remove_t *VAR_14 = VAR_11;
 char *VAR_15 = (char *)(VAR_14 + 1);
 znode_t *VAR_16;
 struct componentname VAR_17;
 vnode_t *VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 if (VAR_12)
  FUNC_7(VAR_14, sizeof (*VAR_14));

 if ((VAR_19 = FUNC_11(VAR_13, VAR_14->lr_doid, &VAR_16)) != 0)
  return (VAR_19);

 if (VAR_14->lr_common.lrc_txtype & VAR_7)
  VAR_20 |= VAR_2;
 VAR_17.cn_nameptr = VAR_15;
 VAR_17.cn_namelen = FUNC_8(VAR_15);
 VAR_17.cn_nameiop = VAR_0;
 VAR_17.cn_flags = VAR_3 | VAR_6;
 VAR_17.cn_lkflags = VAR_4 | VAR_5;
 VAR_17.cn_cred = VAR_9;
 VAR_17.cn_thread = VAR_8;
 FUNC_9(FUNC_6(VAR_16), VAR_4 | VAR_5);
 VAR_19 = FUNC_2(FUNC_6(VAR_16), &VAR_18, &VAR_17);
 if (VAR_19 != 0) {
  FUNC_5(FUNC_6(VAR_16), 0);
  goto fail;
 }

 switch ((int)VAR_14->lr_common.lrc_txtype) {
 case 129:
  VAR_19 = FUNC_3(FUNC_6(VAR_16), VAR_18, &VAR_17 );
  break;
 case 128:
  VAR_19 = FUNC_4(FUNC_6(VAR_16), VAR_18, &VAR_17 );
  break;
 default:
  VAR_19 = FUNC_0(VAR_1);
 }
 FUNC_10(VAR_18);
 FUNC_5(FUNC_6(VAR_16), 0);

fail:
 FUNC_1(FUNC_6(VAR_16));

 return (VAR_19);
}
