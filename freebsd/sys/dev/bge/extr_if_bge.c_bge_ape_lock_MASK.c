
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_mfw_flags; scalar_t__ bge_asicrev; int bge_func_addr; int bge_dev; } ;


 int FUNC_0 (struct bge_softc*,int) ;
 int FUNC_1 (struct bge_softc*,int,int) ;

 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct bge_softc *VAR_9, int VAR_10)
{
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if ((VAR_9->bge_mfw_flags & VAR_6) == 0)
  return (0);


 if (VAR_9->bge_asicrev == VAR_5) {
  VAR_13 = VAR_1;
  VAR_12 = VAR_0;
 } else {
  VAR_13 = VAR_4;
  VAR_12 = VAR_3;
 }

 VAR_16 = 4 * VAR_10;

 switch (VAR_10) {
 case 134:

  if (VAR_9->bge_asicrev == VAR_5)
   return (0);
  if (VAR_9->bge_func_addr == 0)
   VAR_11 = VAR_2;
  else
   VAR_11 = (1 << VAR_9->bge_func_addr);
  break;
 case 133:

  if (VAR_9->bge_func_addr == 0)
   VAR_11 = VAR_2;
  else
   VAR_11 = (1 << VAR_9->bge_func_addr);
  break;
 case 132:

  if (VAR_9->bge_func_addr == 0)
   VAR_11 = VAR_2;
  else
   VAR_11 = (1 << VAR_9->bge_func_addr);
  break;
 case 131:
 case 130:
 case 129:
 case 128:

  VAR_11 = VAR_2;
  break;
 default:
  return (VAR_8);
 }


 FUNC_1(VAR_9, VAR_13 + VAR_16, VAR_11);


 for (VAR_15 = 0; VAR_15 < 20000; VAR_15++) {
  VAR_14 = FUNC_0(VAR_9, VAR_12 + VAR_16);
  if (VAR_14 == VAR_11)
   break;
  FUNC_2(50);
 }


 if (VAR_14 != VAR_11) {
  FUNC_3(VAR_9->bge_dev, "APE lock %d request failed! "
      "request = 0x%04x[0x%04x], status = 0x%04x[0x%04x]\n",
      VAR_10, VAR_13 + VAR_16, VAR_11 & 0xFFFF, VAR_12 + VAR_16,
      VAR_14 & 0xFFFF);

  FUNC_1(VAR_9, VAR_12 + VAR_16, VAR_11);
  return (VAR_7);
 }

 return (0);
}
