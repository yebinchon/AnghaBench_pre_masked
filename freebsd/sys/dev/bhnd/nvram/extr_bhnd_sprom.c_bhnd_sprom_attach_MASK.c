
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bhnd_sprom_softc {int * store; int dev; } ;
struct bhnd_resource {int res; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bhnd_resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (struct bhnd_nvram_io*) ;
 struct bhnd_nvram_io* FUNC_2 (struct bhnd_resource*,scalar_t__,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,struct bhnd_nvram_io*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,struct bhnd_resource*) ;
 struct bhnd_sprom_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (int ) ;

int
FUNC_10(device_t VAR_6, bus_size_t VAR_7)
{
 struct bhnd_sprom_softc *VAR_8;
 struct bhnd_nvram_io *VAR_9;
 struct bhnd_resource *VAR_10;
 bus_size_t VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = FUNC_7(VAR_6);
 VAR_8->dev = VAR_6;
 VAR_8->store = ((void*)0);

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);


 VAR_13 = 0;
 VAR_10 = FUNC_0(VAR_6, VAR_4, &VAR_13, VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_6, "failed to allocate resources\n");
  return (VAR_2);
 }


 VAR_11 = FUNC_9(VAR_10->res);
 if (VAR_11 <= VAR_7 || (VAR_11 - VAR_7) > VAR_1) {
  FUNC_8(VAR_6, "invalid sprom offset\n");
  VAR_14 = VAR_2;
  goto failed;
 }

 VAR_12 = VAR_11 - VAR_7;



 VAR_9 = FUNC_2(VAR_10, VAR_7, VAR_12, sizeof(uint16_t));
 if (VAR_9 == ((void*)0)) {
  VAR_14 = VAR_2;
  goto failed;
 }


 VAR_14 = FUNC_4(&VAR_8->store, VAR_9,
     &VAR_5);
 if (VAR_14)
  goto failed;


 FUNC_1(VAR_9);
 FUNC_6(VAR_6, VAR_4, VAR_13, VAR_10);

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);


 if ((VAR_14 = FUNC_5(VAR_6, VAR_0))) {
  FUNC_8(VAR_6, "failed to register NVRAM provider: %d\n",
      VAR_14);
  goto failed;
 }

 return (0);

failed:

 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_9);

 if (VAR_10 != ((void*)0))
  FUNC_6(VAR_6, VAR_4, VAR_13, VAR_10);

 if (VAR_8->store != ((void*)0))
  FUNC_3(VAR_8->store);

 return (VAR_14);
}
