
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct pci_devinfo {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int ,int) ;
 int FUNC_2 (int ,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int,int) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,struct pci_devinfo*) ;
 struct pci_devinfo* FUNC_9 (int ,int ,int ,int,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct pci_devinfo *VAR_8;
 device_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint16_t VAR_18;
 uint8_t VAR_19;





 VAR_9 = FUNC_6(VAR_7);
 VAR_15 = FUNC_10(VAR_7);
 VAR_10 = FUNC_0(VAR_9);
 for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++) {
  VAR_13 = 0;
  VAR_12 = 0;
  VAR_19 = FUNC_1(VAR_9, VAR_15, VAR_11, VAR_12, VAR_3, 1);
  if ((VAR_19 & VAR_0) > VAR_5)
   continue;
  if (VAR_19 & VAR_1)
   VAR_13 = VAR_4;
  VAR_16 = VAR_11 / 8;
  for (VAR_12 = 0; VAR_12 <= VAR_13; VAR_12++) {
   VAR_17 = FUNC_4(VAR_16, 0, VAR_11 % 8, VAR_12);
   if (!FUNC_7(VAR_17))
    continue;


   VAR_18 = FUNC_1(VAR_9, VAR_15, VAR_11, VAR_12, VAR_2, 2);


   switch (VAR_18) {
   case 132:
   case 129:
   case 134:
   case 128:
   case 133:
   case 130:
   case 131:
    continue;
   case 135:
    VAR_14 = FUNC_3(VAR_12);
    FUNC_2(VAR_9, VAR_15, VAR_11, VAR_12,
        VAR_6 << 2,
        (1 << 8) | VAR_14, 4);
   }
   VAR_8 = FUNC_9(VAR_9, VAR_7, FUNC_11(VAR_7),
       VAR_15, VAR_11, VAR_12);
   FUNC_8(VAR_7, VAR_8);
  }
 }
 return (FUNC_5(VAR_7));
}
