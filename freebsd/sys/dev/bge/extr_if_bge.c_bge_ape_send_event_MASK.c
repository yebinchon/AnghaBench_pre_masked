
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_mfw_flags; int bge_dev; } ;


 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct bge_softc*,int ) ;
 int FUNC_4 (struct bge_softc*,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(struct bge_softc *VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;


 if ((VAR_6->bge_mfw_flags & VAR_5) == 0)
  return;


 for (VAR_9 = 10; VAR_9 > 0; VAR_9--) {
  if (FUNC_3(VAR_6, VAR_4) != 0)
   break;
  VAR_8 = FUNC_0(VAR_6, VAR_2);
  if ((VAR_8 & VAR_3) == 0) {
   FUNC_1(VAR_6, VAR_2, VAR_7 |
       VAR_3);
   FUNC_4(VAR_6, VAR_4);
   FUNC_1(VAR_6, VAR_0, VAR_1);
   break;
  }
  FUNC_4(VAR_6, VAR_4);
  FUNC_2(100);
 }
 if (VAR_9 == 0)
  FUNC_5(VAR_6->bge_dev, "APE event 0x%08x send timed out\n",
      VAR_7);
}
