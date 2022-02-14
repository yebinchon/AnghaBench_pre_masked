
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndisusb_task {unsigned int nt_type; int nt_tasklist; int * nt_ctx; } ;
struct ndis_softc {int ndisusb_taskitem; int ndisusb_tasklock; int ndisusb_tasklist; } ;
typedef int irp ;
typedef int io_workitem_func ;
typedef int int32_t ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ,struct ndis_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ndis_softc* FUNC_5 (int ) ;
 struct ndisusb_task* FUNC_6 (int,int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int32_t
FUNC_7(irp *VAR_7, unsigned VAR_8)
{
 device_t VAR_9 = FUNC_0(VAR_7);
 struct ndis_softc *VAR_10 = FUNC_5(VAR_9);
 struct ndisusb_task *VAR_11;

 VAR_11 = FUNC_6(sizeof(struct ndisusb_task), VAR_1, VAR_0 | VAR_2);
 if (VAR_11 == ((void*)0))
  return (VAR_3);
 VAR_11->nt_type = VAR_8;
 VAR_11->nt_ctx = VAR_7;

 FUNC_3(&VAR_10->ndisusb_tasklock);
 FUNC_1((&VAR_10->ndisusb_tasklist), (&VAR_11->nt_tasklist));
 FUNC_4(&VAR_10->ndisusb_tasklock);

 FUNC_2(VAR_10->ndisusb_taskitem,
     (io_workitem_func)VAR_6, VAR_5, VAR_10);

 return (VAR_4);
}
