
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int * res; } ;
struct resource {int dummy; } ;
struct bhnd_usb_softc {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct bhnd_usb_softc* FUNC_4 (scalar_t__) ;
 struct resource_list_entry* FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, struct resource *VAR_6)
{
 struct bhnd_usb_softc *VAR_7;
 struct resource_list_entry *VAR_8;
 bool VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_2);
 VAR_9 = (FUNC_3(VAR_3) != VAR_2);



 if (VAR_4 != VAR_1) {
  return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }


 if (FUNC_6(VAR_6) & VAR_0) {
  VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_10)
   return (VAR_10);
 }

 if ((VAR_10 = FUNC_7(VAR_6)))
  return (VAR_10);

 if (!VAR_9) {

  VAR_8 = FUNC_5(FUNC_1(VAR_2, VAR_3),
      VAR_4, VAR_5);
  if (VAR_8 != ((void*)0))
   VAR_8->res = ((void*)0);
 }

 return (0);
}
