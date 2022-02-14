
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_mfw_flags; } ;


 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int FUNC_3 (struct bge_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_19, int VAR_20)
{
 uint32_t VAR_21, VAR_22;

 if ((VAR_19->bge_mfw_flags & VAR_18) == 0)
  return;

 switch (VAR_20) {
 case 129:

  VAR_21 = FUNC_0(VAR_19, VAR_16);
  if (VAR_21 != VAR_17)
   FUNC_1(VAR_19, VAR_13, 0);
  else {
   VAR_21 = FUNC_0(VAR_19, VAR_13);
   FUNC_1(VAR_19, VAR_13, ++VAR_21);
  }
  FUNC_1(VAR_19, VAR_16,
      VAR_17);
  FUNC_1(VAR_19, VAR_14,
      VAR_15);


  FUNC_1(VAR_19, VAR_7,
      FUNC_2(1, 0));
  FUNC_1(VAR_19, VAR_5,
      VAR_6);
  FUNC_1(VAR_19, VAR_12,
      VAR_11);
  FUNC_1(VAR_19, VAR_8,
      VAR_9);
  VAR_22 = VAR_2;
  break;
 case 130:
  FUNC_1(VAR_19, VAR_8,
      VAR_10);
  VAR_22 = VAR_4;
  break;
 case 128:
  VAR_22 = VAR_3;
  break;
 default:
  return;
 }

 FUNC_3(VAR_19, VAR_22 | VAR_0 |
     VAR_1);
}
