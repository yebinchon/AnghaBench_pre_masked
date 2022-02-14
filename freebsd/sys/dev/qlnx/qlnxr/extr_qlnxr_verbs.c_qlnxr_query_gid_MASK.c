
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct qlnxr_dev {int * sgid_tbl; int * ha; } ;
struct ib_device {scalar_t__ del_gid; scalar_t__ add_gid; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 struct qlnxr_dev* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct ib_device*,int ,int,union ib_gid*,int *) ;
 int FUNC_4 (union ib_gid*,int *,int) ;
 int FUNC_5 (union ib_gid*,int ,int) ;
 scalar_t__ FUNC_6 (struct ib_device*,int ) ;
 int VAR_4 ;

int
FUNC_7(struct ib_device *VAR_5, u8 VAR_6, int VAR_7,
 union ib_gid *VAR_8)
{
 struct qlnxr_dev *VAR_9;
 qlnx_host_t *VAR_10;

 VAR_9 = FUNC_2(VAR_5);
 VAR_10 = VAR_9->ha;
 FUNC_1(VAR_10, "enter index: %d\n", VAR_7);
 if ((VAR_7 >= VAR_3) || (VAR_7 < 0)) {
  FUNC_1(VAR_10, "invalid gid index %d\n", VAR_7);
  FUNC_5(VAR_8, 0, sizeof(*VAR_8));
  return -VAR_1;
 }
 FUNC_4(VAR_8, &VAR_9->sgid_tbl[VAR_7], sizeof(*VAR_8));

 FUNC_1(VAR_10, "exit : %p\n", VAR_8);

 return 0;
}
