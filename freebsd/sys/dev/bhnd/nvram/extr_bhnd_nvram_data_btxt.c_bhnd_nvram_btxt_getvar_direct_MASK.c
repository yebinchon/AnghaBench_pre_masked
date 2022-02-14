
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
typedef int buf ;
typedef int btxt_parse_state ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char const*,int) ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char) ;
 size_t FUNC_3 (int,size_t) ;
 size_t FUNC_4 (struct bhnd_nvram_io*) ;
 int FUNC_5 (struct bhnd_nvram_io*,size_t,char*,size_t) ;
 int FUNC_6 (char*,size_t,int ,void*,size_t*,int ) ;
 char* FUNC_7 (char*,char,size_t) ;
 int FUNC_8 (char*,char*,size_t) ;
 size_t FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_11(struct bhnd_nvram_io *VAR_3, const char *VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 char VAR_8[512];
 btxt_parse_state VAR_9;
 size_t VAR_10, VAR_11;
 size_t VAR_12, VAR_13;
 size_t VAR_14, VAR_15;
 size_t VAR_16;
 int VAR_17;

 VAR_10 = FUNC_4(VAR_3);
 VAR_11 = 0;


 VAR_9 = 131;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = FUNC_9(VAR_4);
 VAR_15 = 0;
 VAR_16 = 0;

 while ((VAR_11 - VAR_13) < VAR_10) {
  FUNC_0(VAR_13 <= VAR_12,
      ("buf position invalid (%zu > %zu)", VAR_13, VAR_12));
  FUNC_0(VAR_12 <= sizeof(VAR_8),
      ("buf length invalid (%zu > %zu", VAR_12, sizeof(VAR_8)));


  if (VAR_12 - VAR_13 == 0) {
   FUNC_0(VAR_11 < VAR_10, ("offset overrun"));

   VAR_12 = FUNC_3(sizeof(VAR_8), VAR_10 - VAR_11);
   VAR_13 = 0;

   VAR_17 = FUNC_5(VAR_3, VAR_11, VAR_8, VAR_12);
   if (VAR_17)
    return (VAR_17);

   VAR_11 += VAR_12;
  }

  switch (VAR_9) {
  case 131:
   FUNC_0(VAR_13 < VAR_12, ("empty buffer!"));


   VAR_15 = 0;


   while (VAR_13 < VAR_12 && FUNC_2(VAR_8[VAR_13]))
   {
    VAR_13++;
   }

   if (VAR_13 == VAR_12) {

    VAR_9 = 131;
   } else if (VAR_13 < VAR_12 && VAR_8[VAR_13] == '#') {

    VAR_9 = 130;
   } else {

    VAR_9 = 133;
   }


   break;

  case 133: {
   size_t VAR_18, VAR_19;

   VAR_19 = VAR_14 - VAR_15;
   VAR_18 = FUNC_3(VAR_12 - VAR_13, VAR_19);

   if (FUNC_10(VAR_4+VAR_15, VAR_8+VAR_13, VAR_18) == 0) {

    VAR_15 += VAR_18;
    VAR_13 += VAR_18;

    if (VAR_15 == VAR_14) {


     VAR_9 = 132;
    } else {

     VAR_9 = 133;
    }
   } else {


    VAR_9 = 130;
   }

   break;
  }

  case 132:
   FUNC_0(VAR_13 < VAR_12, ("empty buffer!"));

   if (VAR_8[VAR_13] == '=') {


    VAR_13++;
    VAR_9 = 128;
   } else {


    VAR_9 = 130;
   }

   break;

  case 130: {
   const char *VAR_20;


   VAR_20 = FUNC_7(VAR_8+VAR_13, '\n', VAR_12 - VAR_13);
   if (VAR_20 == ((void*)0))
    VAR_20 = FUNC_7(VAR_8+VAR_13, '\r', VAR_12 - VAR_13);

   if (VAR_20 != ((void*)0)) {


    VAR_9 = 131;
    VAR_13 = (VAR_20 - VAR_8);
   } else {



    VAR_9 = 130;
    VAR_13 = VAR_12;
   }

   break;
  }

  case 128: {
   const char *VAR_21;


   VAR_21 = FUNC_7(VAR_8+VAR_13, '\n', VAR_12 - VAR_13);
   if (VAR_21 == ((void*)0))
    VAR_21 = FUNC_7(VAR_8+VAR_13, '\r', VAR_12 - VAR_13);

   if (VAR_21 != ((void*)0)) {

    VAR_16 = VAR_21 - &VAR_8[VAR_13];
    VAR_9 = 129;

   } else if (VAR_21 == ((void*)0) && VAR_11 == VAR_10) {


    VAR_16 = VAR_12 - VAR_13;
    VAR_9 = 129;

   } else if (VAR_21 == ((void*)0) && VAR_13 > 0) {
    size_t VAR_22;



    FUNC_8(VAR_8, VAR_8+VAR_13, VAR_12 - VAR_13);
    VAR_12 = VAR_13;
    VAR_13 = 0;



    VAR_22 = FUNC_3(sizeof(VAR_8) - VAR_12,
        VAR_10 - VAR_11);

    VAR_17 = FUNC_5(VAR_3, VAR_11,
        VAR_8+VAR_12, VAR_22);
    if (VAR_17)
     return (VAR_17);

    VAR_11 += VAR_22;
    VAR_12 += VAR_22;
   } else {

    FUNC_1("cannot parse value for '%s' "
        "(exceeds %zu byte limit)\n", VAR_4,
        sizeof(VAR_8));

    return (VAR_2);
   }

   break;
  }

  case 129:
   FUNC_0(VAR_16 <= VAR_12, ("value buf overrun"));


   while (VAR_16 > 0 && FUNC_2(VAR_8[VAR_13+VAR_16-1]))
    VAR_16--;


   return (FUNC_6(VAR_8+VAR_13, VAR_16,
       VAR_0, VAR_5, VAR_6, VAR_7));
  }
 }


 return (VAR_1);
}
