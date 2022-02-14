
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_nvram_store {int dummy; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef int bhnd_nvram_plist ;
typedef int bhnd_nvram_data_class ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,void*,size_t*) ;
 int FUNC_1 (struct bhnd_nvram_io*) ;
 int FUNC_2 (struct bhnd_nvram_io*,size_t) ;
 int FUNC_3 (struct bhnd_nvram_io*,int ,void**,size_t,int *) ;
 struct bhnd_nvram_io* FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct bhnd_nvram_store*,char const*,int **,int **,int **,int ) ;

int
FUNC_7(struct bhnd_nvram_store *VAR_1, const char *VAR_2,
   struct bhnd_nvram_io **VAR_3, uint32_t VAR_4)
{
 bhnd_nvram_plist *VAR_5;
 bhnd_nvram_plist *VAR_6;
 bhnd_nvram_data_class *VAR_7;
 struct bhnd_nvram_io *VAR_8;
 void *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_8 = ((void*)0);


 VAR_11 = FUNC_6(VAR_1, VAR_2, &VAR_7, &VAR_5, &VAR_6,
     VAR_4);
 if (VAR_11)
  return (VAR_11);


 VAR_11 = FUNC_0(VAR_7, VAR_5, VAR_6, ((void*)0), &VAR_10);
 if (VAR_11)
  goto failed;


 if ((VAR_8 = FUNC_4(VAR_10, VAR_10)) == ((void*)0)) {
  VAR_11 = VAR_0;
  goto failed;
 }


 if ((VAR_11 = FUNC_3(VAR_8, 0, &VAR_9, VAR_10, ((void*)0))))
  goto failed;


 VAR_11 = FUNC_0(VAR_7, VAR_5, VAR_6, VAR_9, &VAR_10);
 if (VAR_11)
  goto failed;

 if ((VAR_11 = FUNC_2(VAR_8, VAR_10)))
  goto failed;


 FUNC_5(VAR_5);
 FUNC_5(VAR_6);

 *VAR_3 = VAR_8;
 return (0);

failed:
 if (VAR_5 != ((void*)0))
  FUNC_5(VAR_5);

 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6);

 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_8);

 return (VAR_11);
}
