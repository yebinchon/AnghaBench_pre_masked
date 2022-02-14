
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_7__ {scalar_t__ (* get_supported_device_id ) (int,TYPE_1__*) ;struct TYPE_7__* next; } ;
struct TYPE_6__ {int vid; scalar_t__ did; } ;
typedef TYPE_1__ PCI_ID ;
typedef TYPE_2__ HIM ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;

__attribute__((used)) static HIM *FUNC_3(device_t VAR_2)
{
 PCI_ID VAR_3;
 int VAR_4;
 HIM *VAR_5;


 if (FUNC_1(VAR_2) != 0x1103 && !VAR_0)
  return (((void*)0));
 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  for (VAR_4=0; VAR_5->get_supported_device_id(VAR_4, &VAR_3); VAR_4++) {
   if ((FUNC_1(VAR_2) == VAR_3.vid) &&
    (FUNC_0(VAR_2) == VAR_3.did)){
    return (VAR_5);
   }
  }
 }
 return (((void*)0));
}
