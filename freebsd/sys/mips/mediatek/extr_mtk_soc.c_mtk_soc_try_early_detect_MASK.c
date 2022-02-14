
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int phandle_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
struct TYPE_2__ {int ocd_data; int * ocd_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_12 (int,int *) ;

void
FUNC_13(void)
{
 bus_space_tag_t VAR_19;
 bus_space_handle_t VAR_20;
 uint32_t VAR_21;
 phandle_t VAR_22;
 int VAR_23;

 if ((VAR_22 = FUNC_0("/")) == -1)
  return;

 for (VAR_23 = 0; VAR_11[VAR_23].ocd_str != ((void*)0); VAR_23++) {
  if (FUNC_12(VAR_22, VAR_11[VAR_23].ocd_str)) {
   VAR_16 = VAR_11[VAR_23].ocd_data;
   break;
  }
 }

 if (VAR_16 == VAR_4) {

  return;
 }

 VAR_19 = VAR_12;
 if (VAR_16 == 135)
  VAR_21 = VAR_3;
 else if (VAR_16 == 138)
  VAR_21 = VAR_2;
 else
  VAR_21 = VAR_0;

 if (FUNC_1(VAR_19, VAR_21, VAR_1, 0, &VAR_20))
  return;


 VAR_13 = FUNC_2(VAR_19, VAR_20, VAR_9);
 VAR_14 = FUNC_2(VAR_19, VAR_20, VAR_10);


 switch (VAR_16) {
 case 135:
  VAR_15 = FUNC_7(VAR_19, VAR_20);
  break;
 case 134:
 case 133:
 case 132:
  VAR_15 = FUNC_8(VAR_19, VAR_20);
  break;
 case 131:
  VAR_15 = FUNC_9(VAR_19, VAR_20);
  break;
 case 130:
 case 129:
  VAR_15 = FUNC_10(VAR_19, VAR_20);
  break;
 case 128:
  VAR_15 = FUNC_11(VAR_19, VAR_20);
  break;
 case 140:
 case 139:
  VAR_15 = FUNC_4(VAR_19, VAR_20);
  break;
 case 138:
  VAR_15 = FUNC_5(VAR_19, VAR_20);
  break;
 case 137:
 case 136:
  VAR_15 = FUNC_6(VAR_19, VAR_20);
  break;
 default:

  break;
 }


 if (VAR_16 == 138) {
  VAR_17 = VAR_15 / 2;

 } else {




  VAR_17 = VAR_15 / 2;
 }

 switch (VAR_16) {
 case 135:
  VAR_18 = VAR_15 / VAR_5;
  break;
 case 132:
 case 134:
 case 133:

  VAR_18 = VAR_15 / VAR_6;
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 140:
 case 139:
 case 137:
 case 136:

  VAR_18 = VAR_7;
  break;
 case 138:

  VAR_18 = VAR_8;
  break;
 default:

  break;
 }

 FUNC_3(VAR_19, VAR_20, VAR_1);
}
