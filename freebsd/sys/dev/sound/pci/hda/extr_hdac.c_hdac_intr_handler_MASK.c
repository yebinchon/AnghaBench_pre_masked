
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct hdac_softc {scalar_t__ unsolq_rp; scalar_t__ unsolq_wp; int num_ss; int mem; TYPE_1__* streams; int unsolq_task; } ;
typedef int * device_t ;
struct TYPE_2__ {int stream; int dir; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct hdac_softc*) ;
 int FUNC_6 (struct hdac_softc*) ;
 int FUNC_7 (struct hdac_softc*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_9(void *VAR_11)
{
 struct hdac_softc *VAR_12;
 device_t VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;
 int VAR_16;

 VAR_12 = (struct hdac_softc *)VAR_11;
 FUNC_5(VAR_12);


 VAR_14 = FUNC_1(&VAR_12->mem, VAR_0);
 if ((VAR_14 & VAR_2) == 0) {
  FUNC_7(VAR_12);
  return;
 }


 if (VAR_14 & VAR_1) {
  VAR_15 = FUNC_0(&VAR_12->mem, VAR_4);

  while (VAR_15 & VAR_5) {
   FUNC_3(&VAR_12->mem,
       VAR_4, VAR_5);
   FUNC_6(VAR_12);
   VAR_15 = FUNC_0(&VAR_12->mem, VAR_4);
  }
  if (VAR_12->unsolq_rp != VAR_12->unsolq_wp)
   FUNC_8(VAR_10, &VAR_12->unsolq_task);
 }

 if (VAR_14 & VAR_3) {
  for (VAR_16 = 0; VAR_16 < VAR_12->num_ss; VAR_16++) {
   if ((VAR_14 & (1 << VAR_16)) == 0)
    continue;
   FUNC_3(&VAR_12->mem, (VAR_16 << 5) + VAR_6,
       VAR_8 | VAR_9 | VAR_7 );
   if ((VAR_13 = VAR_12->streams[VAR_16].dev) != ((void*)0)) {
    FUNC_2(VAR_13,
        VAR_12->streams[VAR_16].dir, VAR_12->streams[VAR_16].stream);
   }
  }
 }

 FUNC_4(&VAR_12->mem, VAR_0, VAR_14);
 FUNC_7(VAR_12);
}
