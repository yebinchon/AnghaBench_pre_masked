
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int dummy; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct bge_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bge_softc*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct bge_softc *VAR_1, bus_size_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((FUNC_1(VAR_1, VAR_2) & VAR_3) == 0)
   return;
  FUNC_2(100);
        }
}
