
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int result; void* ioctl_cmnd; int done; } ;
struct TYPE_11__ {scalar_t__ vbus; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef int PVBUS ;
typedef TYPE_2__ IOCTL_ARG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(PVBUS_EXT VAR_3, IOCTL_ARG *VAR_4)
{
 VAR_4->result = -1;
 VAR_4->done = VAR_2;
 VAR_4->ioctl_cmnd = (void *)1;

 FUNC_1(VAR_3);
 FUNC_4((PVBUS)VAR_3->vbus, VAR_4);

 while (VAR_4->ioctl_cmnd) {
  if (FUNC_2(VAR_3, VAR_4, VAR_1, "hptctl", VAR_0)==0)
   break;
  FUNC_5((PVBUS)VAR_3->vbus);
  FUNC_0(VAR_3);
 }



 FUNC_3(VAR_3);
}
