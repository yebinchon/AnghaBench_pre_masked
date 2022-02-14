
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_softc {int dummy; } ;


 int FUNC_0 (struct sdma_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sdma_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct sdma_softc *VAR_3, int VAR_4,
  int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_0(VAR_3, VAR_1);
 if (VAR_5)
  VAR_8 |= (1 << VAR_4);
 else
  VAR_8 &= ~(1 << VAR_4);
 FUNC_1(VAR_3, VAR_1, VAR_8);


 VAR_8 = FUNC_0(VAR_3, VAR_2);
 if (VAR_6)
  VAR_8 |= (1 << VAR_4);
 else
  VAR_8 &= ~(1 << VAR_4);
 FUNC_1(VAR_3, VAR_2, VAR_8);


 VAR_8 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_7)
  VAR_8 |= (1 << VAR_4);
 else
  VAR_8 &= ~(1 << VAR_4);
 FUNC_1(VAR_3, VAR_0, VAR_8);

 return (0);
}
