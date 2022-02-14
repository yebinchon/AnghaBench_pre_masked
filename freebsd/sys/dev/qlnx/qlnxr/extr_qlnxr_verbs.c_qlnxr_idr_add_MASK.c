
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlnxr_dev {int idr_lock; int qpidr; int * ha; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,void*,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct qlnxr_dev *VAR_3, void *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 qlnx_host_t *VAR_8;

 VAR_8 = VAR_3->ha;

 FUNC_2(VAR_8, "enter\n");

 if (!FUNC_0(VAR_3))
  return 0;

 do {
  if (!FUNC_4(&VAR_3->qpidr, VAR_2)) {
   FUNC_1(VAR_8, "idr_pre_get failed\n");
   return -VAR_1;
  }

  FUNC_5(&VAR_3->idr_lock);

  VAR_7 = FUNC_3(&VAR_3->qpidr, VAR_4, VAR_5, &VAR_6);

  FUNC_6(&VAR_3->idr_lock);

 } while (VAR_7 == -VAR_0);

 FUNC_2(VAR_8, "exit [%d]\n", VAR_7);

 return VAR_7;
}
