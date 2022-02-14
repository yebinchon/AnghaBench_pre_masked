
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_avgen_softc {int avg_width; scalar_t__ avg_flags; int avg_dev; } ;
typedef int device_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int ,char const,...) ;

__attribute__((used)) static int
FUNC_1(struct altera_avgen_softc *VAR_14,
    const char *VAR_15, const char *VAR_16, const char *VAR_17,
    const char *VAR_18, int VAR_19)
{
 const char *VAR_20;
 device_t VAR_21 = VAR_14->avg_dev;




 if (VAR_15 == ((void*)0) && VAR_16 == ((void*)0) && VAR_17 == ((void*)0)) {
  FUNC_0(VAR_21,
      "at least one of %s, %s, or %s must be specified\n",
      VAR_9, VAR_10,
      VAR_11);
  return (VAR_13);
 }






 if (VAR_16 != ((void*)0) && (VAR_15 != ((void*)0) || VAR_17 != ((void*)0))) {
  FUNC_0(VAR_21,
      "at most one of %s and (%s or %s) may be specified\n",
      VAR_10, VAR_9,
      VAR_11);
  return (VAR_13);
 }




 if (VAR_18 == ((void*)0) && VAR_19 != -1) {
  FUNC_0(VAR_21, "%s requires %s be specified\n",
      VAR_8, VAR_7);
  return (VAR_13);
 }




 switch (VAR_14->avg_width) {
 case 1:
 case 2:
 case 4:



  break;

 default:
  FUNC_0(VAR_21, "%s unsupported value %u\n",
      VAR_12, VAR_14->avg_width);
  return (VAR_13);
 }
 VAR_14->avg_flags = 0;
 if (VAR_15 != ((void*)0)) {
  for (VAR_20 = VAR_15; *VAR_20 != '\0'; VAR_20++) {
   switch (*VAR_20) {
   case 129:
    VAR_14->avg_flags |= VAR_5;
    break;

   case 128:
    VAR_14->avg_flags |= VAR_6;
    break;

   default:
    FUNC_0(VAR_21,
        "invalid %s character %c\n",
        VAR_9, *VAR_20);
    return (VAR_13);
   }
  }
 }
 if (VAR_16 != ((void*)0)) {
  for (VAR_20 = VAR_16; *VAR_20 != '\0'; VAR_20++){
   switch (*VAR_20) {
   case 129:
    VAR_14->avg_flags |= VAR_0;
    break;

   case 128:
    VAR_14->avg_flags |= VAR_1;
    break;

   default:
    FUNC_0(VAR_21,
        "invalid %s character %c\n",
        VAR_10, *VAR_20);
    return (VAR_13);
   }
  }
 }
 if (VAR_17 != ((void*)0)) {
  for (VAR_20 = VAR_17; *VAR_20 != '\0'; VAR_20++) {
   switch (*VAR_20) {
   case 129:
    VAR_14->avg_flags |= VAR_3;
    break;

   case 128:
    VAR_14->avg_flags |=
        VAR_4;
    break;

   case 130:
    VAR_14->avg_flags |= VAR_2;
    break;

   default:
    FUNC_0(VAR_21,
        "invalid %s character %c\n",
        VAR_11, *VAR_20);
    return (VAR_13);
   }
  }
 }
 return (0);
}
