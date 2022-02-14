
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct g_concat_softc {size_t sc_ndisks; TYPE_1__* sc_disks; } ;
struct TYPE_2__ {int * d_consumer; } ;



__attribute__((used)) static u_int
FUNC_0(struct g_concat_softc *VAR_0)
{
 u_int VAR_1, VAR_2;

 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->sc_ndisks; VAR_1++) {
  if (VAR_0->sc_disks[VAR_1].d_consumer != ((void*)0))
   VAR_2++;
 }

 return (VAR_2);
}
