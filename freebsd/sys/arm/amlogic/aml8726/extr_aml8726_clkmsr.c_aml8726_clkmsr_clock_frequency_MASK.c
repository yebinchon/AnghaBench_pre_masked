
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aml8726_clkmsr_softc {int dummy; } ;
struct TYPE_2__ {int mux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct aml8726_clkmsr_softc*,int ) ;
 int FUNC_1 (struct aml8726_clkmsr_softc*,int ) ;
 int FUNC_2 (struct aml8726_clkmsr_softc*,int ,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct aml8726_clkmsr_softc *VAR_12, unsigned VAR_13)
{
 uint32_t VAR_14;

 if (VAR_13 >= VAR_10)
  return (0);






 FUNC_2(VAR_12, VAR_5, 0);

 FUNC_0(VAR_12, VAR_5);

 VAR_14 = (VAR_11[VAR_13].mux << VAR_4)
     | ((VAR_9 - 1) << VAR_1)
     | VAR_3
     | VAR_2;
 FUNC_2(VAR_12, VAR_5, VAR_14);

 FUNC_0(VAR_12, VAR_5);

 while ((FUNC_1(VAR_12, VAR_5) & VAR_0) != 0)
  FUNC_3();

 VAR_14 &= ~VAR_2;
 FUNC_2(VAR_12, VAR_5, VAR_14);

 FUNC_0(VAR_12, VAR_5);

 VAR_14 = (((FUNC_1(VAR_12, VAR_6) & VAR_7)
     >> VAR_8) + VAR_9 / 2) /
     VAR_9;

 return VAR_14;
}
