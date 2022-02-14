
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {int dummy; } ;
struct bcma_erom {int dummy; } ;
struct bcma_devinfo {int dummy; } ;
struct bcma_corecfg {int dummy; } ;
typedef int * device_t ;
typedef int bhnd_erom_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct bhnd_chipid* FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bcma_erom*,struct bcma_corecfg**) ;
 int VAR_4 ;
 int FUNC_4 (struct bcma_corecfg*) ;
 int FUNC_5 (int *,int *,struct bcma_devinfo*,struct bcma_corecfg*) ;
 int * FUNC_6 (int *,struct bhnd_chipid const*,struct bhnd_erom_io*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bhnd_erom_io*) ;
 struct bhnd_erom_io* FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct bcma_devinfo* FUNC_13 (int *) ;

int
FUNC_14(device_t VAR_5)
{
 bhnd_erom_t *VAR_6;
 struct bcma_erom *VAR_7;
 struct bhnd_erom_io *VAR_8;
 const struct bhnd_chipid *VAR_9;
 struct bcma_corecfg *VAR_10;
 struct bcma_devinfo *VAR_11;
 device_t VAR_12;
 int VAR_13;

 VAR_9 = FUNC_1(VAR_5, VAR_5);
 VAR_10 = ((void*)0);


 VAR_8 = FUNC_9(VAR_5, VAR_0);
 VAR_6 = FUNC_6(&VAR_4, VAR_9, VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_8);
  return (VAR_1);
 }


 VAR_7 = (struct bcma_erom *)VAR_6;
 while ((VAR_13 = FUNC_3(VAR_7, &VAR_10)) == 0) {

  VAR_12 = FUNC_2(VAR_5, 0, ((void*)0), -1);
  if (VAR_12 == ((void*)0)) {
   VAR_13 = VAR_3;
   goto cleanup;
  }


  VAR_11 = FUNC_13(VAR_12);
  if ((VAR_13 = FUNC_5(VAR_5, VAR_12, VAR_11, VAR_10)))
   goto cleanup;


  VAR_10 = ((void*)0);



  if (FUNC_10(VAR_12))
   FUNC_12(VAR_12);


  FUNC_0(VAR_5, VAR_12);
 }


 if (VAR_13 == VAR_2)
  VAR_13 = 0;

cleanup:
 FUNC_7(VAR_6);

 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_10);

 if (VAR_13)
  FUNC_11(VAR_5);

 return (VAR_13);
}
