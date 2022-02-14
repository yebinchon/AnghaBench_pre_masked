
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplebus_devinfo {int rl; } ;
struct resource_list_entry {int end; int start; } ;
struct resource_list {int dummy; } ;
struct jz4780_pinctrl_softc {int * dev; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 struct resource_list* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 struct simplebus_devinfo* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct jz4780_pinctrl_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ,int,int,int) ;
 struct resource_list_entry* FUNC_13 (struct resource_list*,int ,int ) ;
 int * FUNC_14 (int *,scalar_t__,int ,int *,int,int *) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_3)
{
 struct jz4780_pinctrl_softc *VAR_4;
 struct resource_list *VAR_5;
 struct resource_list_entry *VAR_6;
 phandle_t VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_4 = FUNC_8(VAR_3);
 VAR_4->dev = VAR_3;




 VAR_5 = FUNC_0(FUNC_7(VAR_3), VAR_3);
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 VAR_6 = FUNC_13(VAR_5, VAR_2, 0);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_15(VAR_3, 0);


 VAR_7 = FUNC_11(VAR_3);
 VAR_9 = 0;
 for (VAR_8 = FUNC_2(VAR_7); VAR_8 != 0;
     VAR_8 = FUNC_4(VAR_8)) {
  struct simplebus_devinfo *VAR_11;
  device_t VAR_12;
  bus_addr_t VAR_13;
  bus_size_t VAR_14;


  if (!FUNC_3(VAR_8, "gpio-controller"))
   continue;
  VAR_12 = FUNC_14(VAR_3, VAR_8, 0, ((void*)0), -1, ((void*)0));
  if (VAR_12 == ((void*)0))
   break;

  VAR_13 = FUNC_1(VAR_6->start, VAR_9);
  VAR_14 = VAR_0;
  if (VAR_13 + VAR_14 - 1 <= VAR_6->end) {
   VAR_11 = FUNC_6(VAR_12);
   FUNC_12(&VAR_11->rl, VAR_2, 0,
       VAR_13, VAR_13 + VAR_14 - 1, VAR_14);
  }
  VAR_9++;
 }

 VAR_10 = FUNC_5(VAR_3);
 if (VAR_10 == 0) {
     FUNC_10(VAR_3, "ingenic,pins");
     FUNC_9(VAR_3);
 }
 return (VAR_10);
}
