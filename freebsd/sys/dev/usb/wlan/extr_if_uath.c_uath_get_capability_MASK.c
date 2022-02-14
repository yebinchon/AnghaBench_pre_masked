
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uath_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uath_softc*,int ,int *,int,int *,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct uath_softc *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 int VAR_5;

 VAR_3 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_2, VAR_1,
     &VAR_3, sizeof VAR_3, VAR_4, sizeof(uint32_t), VAR_0);
 if (VAR_5 != 0) {
  FUNC_1(VAR_2->sc_dev, "could not read capability %u\n",
      FUNC_0(VAR_3));
  return (VAR_5);
 }
 *VAR_4 = FUNC_0(*VAR_4);
 return (VAR_5);
}
