
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pcib_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 int FUNC_2 (int ,int,int,int,int,int,int) ;
 int FUNC_3 (struct mv_pcib_softc*,int) ;
 int FUNC_4 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct mv_pcib_softc *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_5);





 FUNC_2(VAR_1->sc_dev, VAR_2, VAR_3, VAR_4, VAR_8, ~0, 4);
 VAR_7 = FUNC_1(VAR_1->sc_dev, VAR_2, VAR_3, VAR_4, VAR_8, 4);
 if (VAR_7 == 0)
  return (1);


 VAR_9 = ((VAR_7 & 7) == 4) ? 2 : 1;

 VAR_6 = FUNC_3(VAR_1, VAR_7);
 if (!VAR_6)
  return (-1);

 if (VAR_0)
  FUNC_4("PCI %u:%u:%u: reg %x: smask=%08x: addr=%08x\n",
      VAR_2, VAR_3, VAR_4, VAR_8, VAR_7, VAR_6);

 FUNC_2(VAR_1->sc_dev, VAR_2, VAR_3, VAR_4, VAR_8, VAR_6, 4);
 if (VAR_9 == 2)
  FUNC_2(VAR_1->sc_dev, VAR_2, VAR_3, VAR_4, VAR_8 + 4,
      0, 4);

 return (VAR_9);
}
