
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct componentname {char* cn_nameptr; int cn_flags; int cn_thread; int cn_cred; } ;
struct TYPE_4__ {int lrc_txtype; } ;
struct TYPE_5__ {TYPE_1__ lr_common; int lr_link_obj; int lr_doid; } ;
typedef TYPE_2__ lr_link_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct componentname*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_7(void *VAR_7, void *VAR_8, boolean_t VAR_9)
{
 zfsvfs_t *VAR_10 = VAR_7;
 lr_link_t *VAR_11 = VAR_8;
 char *VAR_12 = (char *)(VAR_11 + 1);
 znode_t *VAR_13, *VAR_14;
 struct componentname VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_9)
  FUNC_4(VAR_11, sizeof (*VAR_11));

 if ((VAR_16 = FUNC_6(VAR_10, VAR_11->lr_doid, &VAR_13)) != 0)
  return (VAR_16);

 if ((VAR_16 = FUNC_6(VAR_10, VAR_11->lr_link_obj, &VAR_14)) != 0) {
  FUNC_0(FUNC_3(VAR_13));
  return (VAR_16);
 }

 if (VAR_11->lr_common.lrc_txtype & VAR_4)
  VAR_17 |= VAR_0;

 VAR_15.cn_nameptr = VAR_12;
 VAR_15.cn_cred = VAR_6;
 VAR_15.cn_thread = VAR_5;
 VAR_15.cn_flags = VAR_3;

 FUNC_5(FUNC_3(VAR_13), VAR_1 | VAR_2);
 FUNC_5(FUNC_3(VAR_14), VAR_1 | VAR_2);
 VAR_16 = FUNC_1(FUNC_3(VAR_13), FUNC_3(VAR_14), &VAR_15 );
 FUNC_2(FUNC_3(VAR_14), 0);
 FUNC_2(FUNC_3(VAR_13), 0);

 FUNC_0(FUNC_3(VAR_14));
 FUNC_0(FUNC_3(VAR_13));

 return (VAR_16);
}
