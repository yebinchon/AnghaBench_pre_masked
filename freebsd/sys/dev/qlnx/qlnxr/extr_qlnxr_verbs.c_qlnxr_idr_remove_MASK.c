
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlnxr_dev {int idr_lock; int qpidr; int * ha; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct qlnxr_dev *VAR_0, u32 VAR_1)
{
 qlnx_host_t *VAR_2;

 VAR_2 = VAR_0->ha;

 FUNC_1(VAR_2, "enter\n");

 if (!FUNC_0(VAR_0))
  return;

 FUNC_3(&VAR_0->idr_lock);
 FUNC_2(&VAR_0->qpidr, VAR_1);
 FUNC_4(&VAR_0->idr_lock);

 FUNC_1(VAR_2, "exit \n");

 return;
}
