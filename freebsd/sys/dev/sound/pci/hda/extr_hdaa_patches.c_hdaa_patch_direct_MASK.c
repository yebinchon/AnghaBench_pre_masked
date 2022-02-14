
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_devinfo {int nid; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hdaa_devinfo*) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

void
FUNC_6(struct hdaa_devinfo *VAR_4)
{
 device_t VAR_5 = VAR_4->dev;
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_2(VAR_4);

 switch (VAR_6) {
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:

  FUNC_1(VAR_5, FUNC_0(0, VAR_4->nid,
      0xf98, 0x01));

 case 128:

  FUNC_1(VAR_5, FUNC_0(0, VAR_4->nid,
      0xf88, 0xc0));
  break;
 case 137:
  if (VAR_7 == 0xd9781462) {

   FUNC_5(VAR_5, 0x20, 0x07, 0x7cb);
  }
  break;
 }
 if (VAR_6 == VAR_1 || VAR_6 == VAR_2) {
  VAR_8 = FUNC_4(VAR_5, 0x20, 0x46);
  FUNC_5(VAR_5, 0x20, 0x46, VAR_8|0x3000);
 }
 if (VAR_7 == VAR_0)
  FUNC_1(VAR_5, FUNC_0(0, VAR_4->nid,
      0x7e7, 0));
 if (VAR_6 == VAR_3) {
  if (VAR_7 == 0x16e31043 || VAR_7 == 0x831a1043 ||
      VAR_7 == 0x834a1043 || VAR_7 == 0x83981043 ||
      VAR_7 == 0x83ce1043) {






   VAR_8 = FUNC_4(VAR_5, 0x20, 0x07);
   FUNC_5(VAR_5, 0x20, 0x07, VAR_8|0x80);
  }
  if (VAR_7 == 0x15171043) {

   FUNC_5(VAR_5, 0x20, 0x12, 0x2800);
  }
 }
}
