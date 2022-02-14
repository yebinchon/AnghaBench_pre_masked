
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds13rtc_softc {int chiptype; int use_century; int is_binary_counter; void* osfaddr; void* secaddr; int busdev; int dev; } ;
typedef int device_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct ds13rtc_softc*) ;
 int FUNC_1 (int ) ;
 struct ds13rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9)
{
 struct ds13rtc_softc *VAR_10;

 VAR_10 = FUNC_2(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->busdev = FUNC_1(VAR_9);




 if ((VAR_10->chiptype = FUNC_4(VAR_9)) == VAR_7) {
  FUNC_3(VAR_9, "impossible: cannot determine chip type\n");
  return (VAR_6);
 }


 if (VAR_10->chiptype == 128)
  VAR_10->secaddr = VAR_3;
 else
  VAR_10->secaddr = VAR_5;







 switch (VAR_10->chiptype) {
 case 140:
 case 139:
 case 137:
  VAR_10->osfaddr = VAR_5;
  break;
 case 138:
 case 136:
 case 134:
 case 133:
 case 129:
  VAR_10->osfaddr = VAR_0;
  VAR_10->use_century = 1;
  break;
 case 135:
  VAR_10->osfaddr = VAR_1;
  break;
 case 132:
 case 131:
 case 130:
  VAR_10->osfaddr = VAR_2;
  VAR_10->is_binary_counter = 1;
  break;
 case 128:
  VAR_10->osfaddr = VAR_4;
  break;
 }





 FUNC_0(VAR_8, VAR_10);

 return (0);
}
