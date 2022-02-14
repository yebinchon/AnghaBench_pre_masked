
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scb {TYPE_1__* hscb; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_2__ {int sgptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct ahd_softc*,struct scb*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct ahd_softc *VAR_1, struct scb *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_2(VAR_2->hscb->sgptr);
 if ((VAR_3 & VAR_0) != 0)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);
}
