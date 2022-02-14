
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ath_softc {int sc_ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_7, uint8_t VAR_8,
    uint8_t *VAR_9)
{
 uint32_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint32_t VAR_13;

 switch (VAR_8) {
 case 129:
  FUNC_0(VAR_7, VAR_0,
      "(MCI) Recv GPM COEX Version Query.\n");
  VAR_10 = FUNC_1(VAR_7->sc_ah,
      VAR_2, ((void*)0));
  break;

 case 128:
  FUNC_0(VAR_7, VAR_0,
      "(MCI) Recv GPM COEX Version Response.\n");
  VAR_11 = *(VAR_9 + VAR_4);
  VAR_12 = *(VAR_9 + VAR_5);
  FUNC_0(VAR_7, VAR_0,
      "(MCI) BT Coex version: %d.%d\n", VAR_11, VAR_12);
  VAR_10 = (VAR_11 << 8) + VAR_12;
  VAR_10 = FUNC_1(VAR_7->sc_ah,
      VAR_3, &VAR_10);
  break;

 case 130:
  FUNC_0(VAR_7, VAR_0,
      "(MCI) Recv GPM COEX Status Query = 0x%02x.\n",
      *(VAR_9 + VAR_6));
  FUNC_1(VAR_7->sc_ah,
      VAR_1, ((void*)0));
  break;

 case 132:




  FUNC_0(VAR_7, VAR_0,
      "(MCI) TODO: Recv GPM COEX BT_Profile_Info.\n");
  break;

 case 131:
  VAR_13 = *((uint32_t *)(VAR_9 + 12));
  FUNC_0(VAR_7, VAR_0,
      "(MCI) Recv GPM COEX BT_Status_Update: SEQ=%d\n",
      VAR_13);
  break;

 default:
  FUNC_0(VAR_7, VAR_0,
      "(MCI) Unknown GPM COEX message = 0x%02x\n", VAR_8);
  break;
 }
}
