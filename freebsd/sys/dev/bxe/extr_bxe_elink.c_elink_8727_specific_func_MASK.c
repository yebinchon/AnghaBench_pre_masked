
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int flags; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_3 (struct elink_params*,struct elink_phy*,int) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_7,
         struct elink_params *VAR_8,
         uint32_t VAR_9)
{
 struct bxe_softc *VAR_10 = VAR_8->sc;
 uint16_t VAR_11;
 switch (VAR_9) {
 case 130:
  FUNC_3(VAR_8, VAR_7, 0);
  break;
 case 129:
  if (!(VAR_7->flags & VAR_1))
   FUNC_3(VAR_8, VAR_7, 1);
  break;
 case 128:
  FUNC_2(VAR_10, VAR_7,
     VAR_2, VAR_4,
     (1<<2) | (1<<5));
  FUNC_2(VAR_10, VAR_7,
     VAR_2, VAR_5,
     0);
  FUNC_2(VAR_10, VAR_7,
     VAR_2, VAR_3, 0x0006);

  FUNC_1(VAR_10, VAR_7, VAR_2,
    VAR_6,
    &VAR_11);
  VAR_11 |= (1<<12);
  if (VAR_7->flags & VAR_0)
   VAR_11 |= (3<<5);



  if (!(VAR_7->flags & VAR_0))
   VAR_11 &= 0xff8f;
  FUNC_2(VAR_10, VAR_7,
     VAR_2, VAR_6,
     VAR_11);
  break;
 default:
  FUNC_0(VAR_10, "Function 0x%x not supported by 8727\n",
     VAR_9);
  return;
 }
}
