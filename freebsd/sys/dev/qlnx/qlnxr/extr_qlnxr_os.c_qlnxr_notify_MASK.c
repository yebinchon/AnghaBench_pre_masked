
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_dev {int enet_state; int * ha; } ;
typedef int qlnx_host_t ;
typedef enum qlnx_rdma_event { ____Placeholder_qlnx_rdma_event } qlnx_rdma_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,char*,void*,int) ;
 int FUNC_1 (struct qlnxr_dev*,int ,int ) ;
 int FUNC_2 (struct qlnxr_dev*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, void *VAR_5, enum qlnx_rdma_event VAR_6)
{
 struct qlnxr_dev *VAR_7;
 qlnx_host_t *VAR_8;

 VAR_7 = VAR_5;

 if (VAR_7 == ((void*)0))
  return;

 VAR_8 = VAR_7->ha;

 FUNC_0(VAR_8, "enter (%p, %d)\n", VAR_5, VAR_6);

        switch (VAR_6) {

        case 128:
  if (!FUNC_3(VAR_2, &VAR_7->enet_state))
   FUNC_1(VAR_7, VAR_3,
    VAR_0);
                break;

        case 130:
                FUNC_2(VAR_7);
                break;

        case 129:
  if (FUNC_3(VAR_2, &VAR_7->enet_state))
   FUNC_1(VAR_7, VAR_3,
    VAR_1);
                break;
        }

 FUNC_0(VAR_8, "exit (%p, %d)\n", VAR_5, VAR_6);
 return;
}
