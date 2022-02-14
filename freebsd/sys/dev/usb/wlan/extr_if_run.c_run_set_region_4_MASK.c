
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct run_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct run_softc*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct run_softc *VAR_0, uint16_t VAR_1, uint32_t VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_0((VAR_3 & 3) == 0, ("run_set_region_4: Invalid data length.\n"));
 for (VAR_4 = 0; VAR_4 < VAR_3 && VAR_5 == 0; VAR_4 += 4)
  VAR_5 = FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2);
 return (VAR_5);
}
