
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct hid_item {int kind; int collection; int flags; int usage; } ;
struct hid_data {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (struct hid_data*) ;

 scalar_t__ FUNC_2 (struct hid_data*,struct hid_item*) ;

 struct hid_data* FUNC_3 (void const*,int ,int) ;

int
FUNC_4(const void *VAR_6, uint16_t VAR_7)
{
 struct hid_data *VAR_8;
 struct hid_item VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_3(VAR_6, VAR_7, 1 << 128);
 if (VAR_8 == ((void*)0))
  return (0);

 VAR_10 = 0;
 VAR_11 = 0;

 while (FUNC_2(VAR_8, &VAR_9)) {
  switch (VAR_9.kind) {
  case 130:
   if (VAR_10 != 0)
    VAR_10++;
   else if (VAR_9.collection == 1 &&
        VAR_9.usage ==
         FUNC_0(VAR_5, VAR_2))
    VAR_10++;
   break;
  case 129:
   if (VAR_10 != 0)
    VAR_10--;
   break;
  case 128:
   if (VAR_10 == 0)
    break;
   if (VAR_9.usage ==
        FUNC_0(VAR_5, VAR_3) &&
       (VAR_9.flags & (VAR_0|VAR_1)) == VAR_1)
    VAR_11++;
   if (VAR_9.usage ==
        FUNC_0(VAR_5, VAR_4) &&
       (VAR_9.flags & (VAR_0|VAR_1)) == VAR_1)
    VAR_11++;
   break;
  default:
   break;
  }
 }
 FUNC_1(VAR_8);
 return (VAR_11);
}
