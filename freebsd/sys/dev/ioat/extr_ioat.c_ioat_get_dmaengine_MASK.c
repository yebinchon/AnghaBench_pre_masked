
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ioat_softc {int dmaengine; int submit_lock; scalar_t__ destroying; scalar_t__ quiescing; } ;
typedef int * bus_dmaengine_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ioat_softc** VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct ioat_softc*) ;
 int VAR_4 ;
 int FUNC_2 (struct ioat_softc*) ;
 int FUNC_3 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bus_dmaengine_t
FUNC_6(uint32_t VAR_5, int VAR_6)
{
 struct ioat_softc *VAR_7;

 FUNC_0((VAR_6 & ~(VAR_0 | VAR_1)) == 0,
     ("invalid flags: 0x%08x", VAR_6));
 FUNC_0((VAR_6 & (VAR_0 | VAR_1)) != (VAR_0 | VAR_1),
     ("invalid wait | nowait"));

 FUNC_4(&VAR_4);
 if (VAR_5 >= VAR_3 ||
     (VAR_7 = VAR_2[VAR_5]) == ((void*)0)) {
  FUNC_5(&VAR_4);
  return (((void*)0));
 }
 FUNC_4(&VAR_7->submit_lock);
 FUNC_5(&VAR_4);

 if (VAR_7->destroying) {
  FUNC_5(&VAR_7->submit_lock);
  return (((void*)0));
 }

 FUNC_1(VAR_7);
 if (VAR_7->quiescing) {
  if ((VAR_6 & VAR_0) != 0) {
   FUNC_2(VAR_7);
   FUNC_5(&VAR_7->submit_lock);
   return (((void*)0));
  }

  while (VAR_7->quiescing && !VAR_7->destroying)
   FUNC_3(&VAR_7->quiescing, &VAR_7->submit_lock, 0, "getdma", 0);

  if (VAR_7->destroying) {
   FUNC_2(VAR_7);
   FUNC_5(&VAR_7->submit_lock);
   return (((void*)0));
  }
 }
 FUNC_5(&VAR_7->submit_lock);
 return (&VAR_7->dmaengine);
}
