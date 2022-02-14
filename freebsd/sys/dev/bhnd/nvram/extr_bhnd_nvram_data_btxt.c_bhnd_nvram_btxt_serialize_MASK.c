
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_prop ;
typedef int bhnd_nvram_plist ;
typedef int bhnd_nvram_data_class ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char const*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,size_t*,int ) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(bhnd_nvram_data_class *VAR_4, bhnd_nvram_plist *VAR_5,
    bhnd_nvram_plist *VAR_6, void *VAR_7, size_t *VAR_8)
{
 bhnd_nvram_prop *VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12;


 if (VAR_7 != ((void*)0))
  VAR_10 = *VAR_8;
 else
  VAR_10 = 0;

 VAR_11 = 0;


 VAR_9 = ((void*)0);
 while ((VAR_9 = FUNC_2(VAR_5, VAR_9)) != ((void*)0)) {
  const char *VAR_13;
  char *VAR_14;
  size_t VAR_15;
  size_t VAR_16, VAR_17;

  if (VAR_7 == ((void*)0) || VAR_10 < VAR_11) {
   VAR_14 = ((void*)0);
   VAR_15 = 0;
  } else {
   VAR_14 = ((char *)VAR_7) + VAR_11;
   VAR_15 = VAR_10 - VAR_11;
  }


  VAR_13 = FUNC_4(VAR_9);
  VAR_16 = FUNC_7(VAR_13) + 1;

  if (VAR_15 > VAR_16) {
   FUNC_6(VAR_14, VAR_13, VAR_16 - 1);
   VAR_14[VAR_16 - 1] = '=';

   VAR_15 -= VAR_16;
   VAR_14 += VAR_16;
  } else {
   VAR_15 = 0;
   VAR_14 = ((void*)0);
  }


  if (VAR_3 - VAR_11 < VAR_16)
   return (VAR_1);

  VAR_11 += VAR_16;



  VAR_17 = VAR_15;
  VAR_12 = FUNC_3(VAR_9, VAR_14, &VAR_17,
      VAR_0);
  if (VAR_14 != ((void*)0) && VAR_12 == 0) {

   FUNC_0(VAR_17 > 0, ("string length missing "
       "minimum required trailing NUL"));

   *(VAR_14 + (VAR_17 - 1)) = '\n';
  } else if (VAR_12 && VAR_12 != VAR_2) {



   FUNC_1("error serializing %s to required type "
       "%s: %d\n", VAR_13,
       FUNC_5(VAR_0),
       VAR_12);
   return (VAR_12);
  }


  if (VAR_3 - VAR_11 < VAR_17)
   return (VAR_1);

  VAR_11 += VAR_17;
 }


 *VAR_8 = VAR_11;
 if (VAR_10 < *VAR_8) {
  if (VAR_7 == ((void*)0))
   return (0);

  return (VAR_2);
 }

 return (0);
}
