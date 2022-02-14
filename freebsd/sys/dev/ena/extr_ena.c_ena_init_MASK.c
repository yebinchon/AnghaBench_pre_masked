
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int ioctl_sx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ena_adapter *VAR_2 = (struct ena_adapter *)VAR_1;

 if (!FUNC_0(VAR_0, VAR_2)) {
  FUNC_3(&VAR_2->ioctl_sx);
  FUNC_1(VAR_2);
  FUNC_2(&VAR_2->ioctl_sx);
 }
}
