
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_ccung_softc {intptr_t nresets; int mtx; TYPE_1__* resets; } ;
typedef int device_t ;
struct TYPE_2__ {char* offset; int shift; } ;


 int FUNC_0 (struct aw_ccung_softc*,char*) ;
 int FUNC_1 (struct aw_ccung_softc*,char*,int) ;
 struct aw_ccung_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, intptr_t VAR_1, bool VAR_2)
{
 struct aw_ccung_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_2(VAR_0);

 FUNC_3("%sassert reset id %ld\n", VAR_2 ? "" : "De", VAR_1);
 if (VAR_1 >= VAR_3->nresets || VAR_3->resets[VAR_1].offset == 0)
  return (0);

 FUNC_4(&VAR_3->mtx);
 VAR_4 = FUNC_0(VAR_3, VAR_3->resets[VAR_1].offset);
 FUNC_3("offset=%x Read %x\n", VAR_3->resets[VAR_1].offset, VAR_4);
 if (VAR_2)
  VAR_4 &= ~(1 << VAR_3->resets[VAR_1].shift);
 else
  VAR_4 |= 1 << VAR_3->resets[VAR_1].shift;
 FUNC_3("offset=%x Write %x\n", VAR_3->resets[VAR_1].offset, VAR_4);
 FUNC_1(VAR_3, VAR_3->resets[VAR_1].offset, VAR_4);
 FUNC_5(&VAR_3->mtx);

 return (0);
}
