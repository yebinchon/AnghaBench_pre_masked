
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_IO_REQUEST {int dummy; } ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_STATUS ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int FUNC_0 (int ,int ,struct ISCI_IO_REQUEST*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(SCI_CONTROLLER_HANDLE_T VAR_0,
    SCI_REMOTE_DEVICE_HANDLE_T VAR_1,
    SCI_IO_REQUEST_HANDLE_T VAR_2, SCI_IO_STATUS VAR_3)
{
 struct ISCI_IO_REQUEST *VAR_4 =
     (struct ISCI_IO_REQUEST *)FUNC_1(VAR_2);

 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_4,
     VAR_3);
}
