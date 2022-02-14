
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {size_t domain; scalar_t__ cpu; scalar_t__ version; int chan_idx; int device; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 struct ioat_softc* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,size_t*) ;
 int * VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 struct ioat_softc** VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (struct ioat_softc*) ;
 int FUNC_8 (struct ioat_softc*,int ) ;
 scalar_t__ FUNC_9 (struct ioat_softc*) ;
 int FUNC_10 (struct ioat_softc*) ;
 int FUNC_11 (struct ioat_softc*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_9)
{
 struct ioat_softc *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_9);
 VAR_10->device = VAR_9;
 if (FUNC_3(VAR_9, &VAR_10->domain) != 0)
  VAR_10->domain = 0;
 VAR_10->cpu = FUNC_0(&VAR_5[VAR_10->domain]) - 1;
 if (VAR_10->cpu < 0)
  VAR_10->cpu = FUNC_1();

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 != 0)
  goto err;

 VAR_10->version = FUNC_9(VAR_10);
 if (VAR_10->version < VAR_4) {
  VAR_11 = VAR_0;
  goto err;
 }

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 != 0)
  goto err;

 VAR_11 = FUNC_16(VAR_9);
 if (VAR_11 != 0)
  goto err;

 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11 != 0)
  goto err;

 VAR_11 = FUNC_10(VAR_10);
 if (VAR_11 != 0)
  goto err;

 FUNC_8(VAR_10, VAR_2);
 FUNC_12(VAR_9);

 FUNC_14(&VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_6[VAR_12] == ((void*)0))
   break;
 }
 if (VAR_12 >= VAR_3) {
  FUNC_15(&VAR_8);
  FUNC_4(VAR_9, "Too many I/OAT devices in system\n");
  VAR_11 = VAR_1;
  goto err;
 }
 VAR_10->chan_idx = VAR_12;
 VAR_6[VAR_12] = VAR_10;
 if (VAR_12 >= VAR_7)
  VAR_7 = VAR_12 + 1;
 FUNC_15(&VAR_8);

 FUNC_13();

err:
 if (VAR_11 != 0)
  FUNC_6(VAR_9);
 return (VAR_11);
}
