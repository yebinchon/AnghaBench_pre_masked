
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
struct hid_item {scalar_t__ kind; scalar_t__ usage; } ;
struct hid_data {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hid_data*) ;
 int FUNC_1 (struct hid_data*,struct hid_item*) ;
 int VAR_1 ;
 struct hid_data* FUNC_2 (void const*,int ,int ) ;

int
FUNC_3(const void *VAR_2, usb_size_t VAR_3, int32_t VAR_4)
{
 struct hid_data *VAR_5;
 struct hid_item VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_5 == ((void*)0))
  return (0);

 while ((VAR_7 = FUNC_1(VAR_5, &VAR_6))) {
   if (VAR_6.kind == VAR_0 &&
       VAR_6.usage == VAR_4)
   break;
 }
 FUNC_0(VAR_5);
 return (VAR_7);
}
