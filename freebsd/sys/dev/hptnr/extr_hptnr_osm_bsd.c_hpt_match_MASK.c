
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_8__ {int (* get_controller_count ) (TYPE_1__*,int ,int ) ;scalar_t__ (* get_supported_device_id ) (int,TYPE_1__*) ;struct TYPE_8__* next; } ;
struct TYPE_7__ {scalar_t__ vid; scalar_t__ did; } ;
typedef TYPE_1__ PCI_ID ;
typedef TYPE_2__ HIM ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static HIM *FUNC_4(device_t VAR_1, int VAR_2)
{
 PCI_ID VAR_3;
 HIM *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
  for (VAR_5=0; VAR_4->get_supported_device_id(VAR_5, &VAR_3); VAR_5++) {
   if (VAR_2 && VAR_4->get_controller_count)
    VAR_4->get_controller_count(&VAR_3,0,0);
   if ((FUNC_1(VAR_1) == VAR_3.vid) &&
    (FUNC_0(VAR_1) == VAR_3.did)){
    return (VAR_4);
   }
  }
 }

 return (((void*)0));
}
