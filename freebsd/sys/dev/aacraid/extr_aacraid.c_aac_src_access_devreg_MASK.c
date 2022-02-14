
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int msi_enabled; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_softc*,int ) ;
 int FUNC_1 (struct aac_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct aac_softc *VAR_10, int VAR_11)
{
 u_int32_t VAR_12;

 FUNC_2(VAR_10, VAR_6, "");

 switch (VAR_11) {
 case 130:
  FUNC_1(VAR_10, VAR_5,
   (VAR_10->msi_enabled ? VAR_2 :
               VAR_1));
  break;

 case 132:
  FUNC_1(VAR_10, VAR_5, VAR_0);
  break;

 case 128:

  VAR_12 = FUNC_0(VAR_10, VAR_3);
  VAR_12 |= 0x40;
  FUNC_1(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10, VAR_3);

  VAR_12 = VAR_7;
  FUNC_1(VAR_10, VAR_4, VAR_12);
  VAR_12 = FUNC_0(VAR_10, VAR_5);
  FUNC_1(VAR_10, VAR_5,
   VAR_12 & (~(VAR_9 | VAR_8)));
  break;

 case 131:

  VAR_12 = FUNC_0(VAR_10, VAR_3);
  VAR_12 &= ~0x40;
  FUNC_1(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10, VAR_3);
  break;

 case 134:

  VAR_12 = FUNC_0(VAR_10, VAR_3);
  VAR_12 |= 0x20;
  FUNC_1(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10, VAR_3);
  break;

 case 133:

  VAR_12 = FUNC_0(VAR_10, VAR_3);
  VAR_12 |= 0x10;
  FUNC_1(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10, VAR_3);
  break;

 case 129:

  VAR_12 = FUNC_0(VAR_10, VAR_3);
  VAR_12 |= 0x80;
  FUNC_1(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10, VAR_3);

  VAR_12 = VAR_7;
  FUNC_1(VAR_10, VAR_4, VAR_12);
  VAR_12 = FUNC_0(VAR_10, VAR_5);
  FUNC_1(VAR_10, VAR_5,
   VAR_12 & (~(VAR_9)));
  break;

 default:
  break;
 }
}
