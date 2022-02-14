
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {int dummy; } ;
typedef int driver_t ;
typedef int devclass_t ;
typedef int bhnd_erom_class_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bhnd_erom_io*,struct bhnd_chipid const*,struct bhnd_chipid*) ;
 int FUNC_2 (int ,int ***,int*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;

bhnd_erom_class_t *
FUNC_7(devclass_t VAR_2,
    struct bhnd_erom_io *VAR_3, const struct bhnd_chipid *VAR_4,
    struct bhnd_chipid *VAR_5)
{
 driver_t **VAR_6;
 int VAR_7;
 bhnd_erom_class_t *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = ((void*)0);
 VAR_10 = 0;


 VAR_9 = FUNC_2(VAR_2, &VAR_6, &VAR_7);
 if (VAR_9) {
  FUNC_6("error fetching bhnd(4) drivers for %s: %d\n",
      FUNC_3(VAR_2), VAR_9);
  return (((void*)0));
 }


 for (int VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  struct bhnd_chipid VAR_13;
  bhnd_erom_class_t *VAR_14;




  VAR_14 = FUNC_0(VAR_6[VAR_12]);
  if (VAR_14 == ((void*)0))
   continue;

  FUNC_5(VAR_14);


  VAR_11 = FUNC_1(VAR_14, VAR_3, VAR_4, &VAR_13);


  if (VAR_11 > 0)
   continue;


  if (VAR_8 == ((void*)0) || VAR_11 > VAR_10) {
   VAR_10 = VAR_11;

   *VAR_5 = VAR_13;
   VAR_8 = VAR_14;
  }


  if (VAR_11 == VAR_0)
   break;
 }

 FUNC_4(VAR_6, VAR_1);
 return (VAR_8);
}
