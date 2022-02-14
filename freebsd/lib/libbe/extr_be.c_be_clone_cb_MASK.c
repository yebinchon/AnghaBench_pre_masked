
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct libbe_deep_clone {char* snapname; int depth_limit; int depth; TYPE_1__* lbh; } ;
struct libbe_dccb {int * props; int * zhp; TYPE_1__* lbh; } ;
typedef int snap_path ;
typedef int nvlist_t ;
typedef int be_path ;
struct TYPE_2__ {int lzh; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct libbe_deep_clone*,char const*,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,int,char*,char const*,char*) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,char*,int ) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int (*) (int *,void*),struct libbe_deep_clone*) ;
 int * FUNC_11 (int ,char*,int ) ;
 scalar_t__ FUNC_12 (int ,struct libbe_dccb*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_13(zfs_handle_t *VAR_14, void *VAR_15)
{
 int VAR_16;
 char VAR_17[VAR_5];
 char VAR_18[VAR_5];
 const char *VAR_19;
 zfs_handle_t *VAR_20;
 nvlist_t *VAR_21;
 struct libbe_deep_clone *VAR_22;
 struct libbe_dccb VAR_23;

 VAR_22 = (struct libbe_deep_clone *)VAR_15;
 VAR_19 = FUNC_9(VAR_14);

 FUNC_5(VAR_18, sizeof(VAR_18), "%s@%s", VAR_19, VAR_22->snapname);


 if (FUNC_0(VAR_22, VAR_19, VAR_17, sizeof(VAR_17)) != VAR_1)
  return (FUNC_4(VAR_22->lbh, VAR_2));


 if (FUNC_8(VAR_22->lbh->lzh, VAR_17, VAR_9))
  return (FUNC_4(VAR_22->lbh, VAR_0));


 if (!FUNC_8(VAR_22->lbh->lzh, VAR_18, VAR_11))
  return (0);

 if ((VAR_20 =
     FUNC_11(VAR_22->lbh->lzh, VAR_18, VAR_11)) == ((void*)0))
  return (FUNC_4(VAR_22->lbh, VAR_4));

 FUNC_2(&VAR_21, VAR_8, VAR_7);
 FUNC_1(VAR_21, "canmount", "noauto");

 VAR_23.lbh = VAR_22->lbh;
 VAR_23.zhp = VAR_14;
 VAR_23.props = VAR_21;
 if (FUNC_12(VAR_13, &VAR_23, VAR_6, VAR_6,
     VAR_10) == VAR_12)
  return (-1);

 if ((VAR_16 = FUNC_6(VAR_20, VAR_17, VAR_21)) != 0)
  return (FUNC_4(VAR_22->lbh, VAR_3));

 FUNC_3(VAR_21);
 FUNC_7(VAR_20);

 if (VAR_22->depth_limit == -1 || VAR_22->depth < VAR_22->depth_limit) {
  VAR_22->depth++;
  VAR_16 = FUNC_10(VAR_14, FUNC_13, VAR_22);
  VAR_22->depth--;
 }

 return (FUNC_4(VAR_22->lbh, VAR_16));
}
