
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_softc {int dummy; } ;
typedef int * device_t ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (int *,int *,char const*,void*,size_t*,int ) ;
 int FUNC_1 (int *,char const*,void*,size_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 struct bhnd_softc* FUNC_5 (int *) ;

int
FUNC_6(device_t VAR_2, device_t VAR_3, const char *VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 struct bhnd_softc *VAR_8;
 device_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5(VAR_2);


 VAR_9 = FUNC_3(VAR_3, VAR_0);
 if (VAR_9 != ((void*)0)) {
  VAR_11 = FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_2(VAR_3, VAR_9, VAR_0);
  return (VAR_11);
 }


 if ((VAR_10 = FUNC_4(VAR_2)) == ((void*)0))
  return (VAR_1);

 return (FUNC_0(FUNC_4(VAR_2), VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7));
}
