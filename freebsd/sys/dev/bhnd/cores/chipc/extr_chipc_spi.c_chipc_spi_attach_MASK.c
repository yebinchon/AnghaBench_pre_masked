
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_spi_softc {int sc_rid; int sc_flash_rid; int * sc_flash_res; int * sc_res; } ;
struct chipc_caps {int flash_type; } ;
typedef int * device_t ;


 struct chipc_caps* FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int *,int ,int*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int *) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int * FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct chipc_spi_softc* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_3)
{
 struct chipc_spi_softc *VAR_4;
 struct chipc_caps *VAR_5;
 device_t VAR_6;
 device_t VAR_7;
 const char *VAR_8;
 int VAR_9;

 VAR_4 = FUNC_10(VAR_3);


 VAR_4->sc_rid = 1;
 VAR_4->sc_res = FUNC_2(VAR_3, VAR_2, &VAR_4->sc_rid,
     VAR_1);
 if (VAR_4->sc_res == ((void*)0)) {
  FUNC_11(VAR_3, "failed to allocate device registers\n");
  return (VAR_0);
 }


 VAR_4->sc_flash_rid = 0;
 VAR_4->sc_flash_res = FUNC_2(VAR_3, VAR_2,
     &VAR_4->sc_flash_rid, VAR_1);
 if (VAR_4->sc_flash_res == ((void*)0)) {
  FUNC_11(VAR_3, "failed to allocate flash region\n");
  VAR_9 = VAR_0;
  goto failed;
 }







 if ((VAR_7 = FUNC_7(VAR_3, "spibus", -1)) == ((void*)0)) {
  FUNC_11(VAR_3, "failed to add spibus\n");
  VAR_9 = VAR_0;
  goto failed;
 }



 if ((VAR_9 = FUNC_3(VAR_3)))
  goto failed;


 VAR_5 = FUNC_0(FUNC_9(VAR_3));
 VAR_8 = FUNC_6(VAR_5->flash_type);
 if (VAR_8 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_7, 0, VAR_8, -1);
  if (VAR_6 == ((void*)0)) {
   FUNC_11(VAR_3, "failed to add %s\n", VAR_8);
   VAR_9 = VAR_0;
   goto failed;
  }

  FUNC_5(VAR_5->flash_type);

  if ((VAR_9 = FUNC_12(VAR_6))) {
   FUNC_11(VAR_3, "failed to attach %s: %d\n",
       VAR_8, VAR_9);
   goto failed;
  }
 }

 return (0);

failed:
 FUNC_8(VAR_3);

 if (VAR_4->sc_res != ((void*)0))
  FUNC_4(VAR_3, VAR_2, VAR_4->sc_rid,
      VAR_4->sc_res);

 if (VAR_4->sc_flash_res != ((void*)0))
  FUNC_4(VAR_3, VAR_2, VAR_4->sc_flash_rid,
      VAR_4->sc_flash_res);

 return (VAR_9);
}
