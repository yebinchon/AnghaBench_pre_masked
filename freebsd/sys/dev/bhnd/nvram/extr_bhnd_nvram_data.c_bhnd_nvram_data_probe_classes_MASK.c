
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_data_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct bhnd_nvram_data**,struct bhnd_nvram_io*) ;
 int FUNC_3 (int *,struct bhnd_nvram_io*) ;
 int FUNC_4 (struct bhnd_nvram_data*) ;

int
FUNC_5(struct bhnd_nvram_data **VAR_4,
    struct bhnd_nvram_io *VAR_5, bhnd_nvram_data_class *VAR_6[],
    size_t VAR_7)
{
 bhnd_nvram_data_class *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = ((void*)0);
 VAR_10 = 0;
 *VAR_4 = ((void*)0);


 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = FUNC_1(VAR_3);
 }


 for (size_t VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  bhnd_nvram_data_class *VAR_13;

  VAR_13 = VAR_6[VAR_12];


  VAR_11 = FUNC_3(VAR_13, VAR_5);


  if (VAR_11 > 0)
   continue;



  if (VAR_8 != ((void*)0) && VAR_11 <= VAR_10)
   continue;


  if (*VAR_4 != ((void*)0)) {
   FUNC_4(*VAR_4);
   *VAR_4 = ((void*)0);
  }



  if (VAR_11 <= VAR_0) {

   VAR_9 = FUNC_2(VAR_13, VAR_4, VAR_5);
   if (VAR_9)
    continue;
  }


  VAR_10 = VAR_11;
  VAR_8 = VAR_13;




  if (VAR_11 == VAR_1)
   break;
 }


 if (VAR_8 == ((void*)0))
  return (VAR_2);


 if (*VAR_4 == ((void*)0)) {
  if ((VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5)))
   return (VAR_9);
 }

 return (0);
}
