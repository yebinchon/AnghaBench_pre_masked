
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flgs; scalar_t__ low_time; scalar_t__ high_time; struct TYPE_5__* fow; } ;
typedef TYPE_1__ TIME_RNG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,scalar_t__*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_6(char *VAR_6)
{
 TIME_RNG *VAR_7;
 char *VAR_8 = ((void*)0);
 char *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;




 if ((VAR_6 == ((void*)0)) || (*VAR_6 == '\0')) {
  FUNC_2(1, "Empty time range string");
  return(-1);
 }




 if ((VAR_10 = FUNC_4(VAR_6, '/')) != ((void*)0))
  *VAR_10++ = '\0';

 for (VAR_9 = VAR_6; *VAR_9 != '\0'; ++VAR_9) {
  if ((*VAR_9 >= '0') && (*VAR_9 <= '9'))
   continue;
  if ((*VAR_9 == ',') && (VAR_8 == ((void*)0))) {
   *VAR_9 = '\0';
   VAR_8 = VAR_9 + 1;
   VAR_11 = 0;
   continue;
  }




  if ((*VAR_9 == '.') && (!VAR_11)) {
   ++VAR_11;
   continue;
  }
  FUNC_2(1, "Improperly specified time range: %s", VAR_6);
  goto out;
 }




 if ((VAR_7 = (TIME_RNG *)FUNC_1(sizeof(TIME_RNG))) == ((void*)0)) {
  FUNC_2(1, "Unable to allocate memory for time range");
  return(-1);
 }





 if ((VAR_10 == ((void*)0)) || (*VAR_10 == '\0'))
  VAR_7->flgs = VAR_1;
 else {
  VAR_7->flgs = 0;
  while (*VAR_10 != '\0') {
   switch(*VAR_10) {
   case 'M':
   case 'm':
    VAR_7->flgs |= VAR_1;
    break;
   case 'C':
   case 'c':
    VAR_7->flgs |= VAR_0;
    break;
   default:
    FUNC_2(1, "Bad option %c with time range %s",
        *VAR_10, VAR_6);
    FUNC_0(VAR_7);
    goto out;
   }
   ++VAR_10;
  }
 }




 VAR_7->low_time = VAR_7->high_time = FUNC_5(((void*)0));
 if (*VAR_6 != '\0') {



  if (FUNC_3(VAR_6, &(VAR_7->low_time)) < 0) {
   FUNC_2(1, "Illegal lower time range %s", VAR_6);
   FUNC_0(VAR_7);
   goto out;
  }
  VAR_7->flgs |= VAR_3;
 }

 if ((VAR_8 != ((void*)0)) && (*VAR_8 != '\0')) {



  if (FUNC_3(VAR_8, &(VAR_7->high_time)) < 0) {
   FUNC_2(1, "Illegal upper time range %s", VAR_8);
   FUNC_0(VAR_7);
   goto out;
  }
  VAR_7->flgs |= VAR_2;




  if (VAR_7->flgs & VAR_3) {
   if (VAR_7->low_time > VAR_7->high_time) {
    FUNC_2(1, "Upper %s and lower %s time overlap",
     VAR_8, VAR_6);
    FUNC_0(VAR_7);
    return(-1);
   }
  }
 }

 VAR_7->fow = ((void*)0);
 if (VAR_4 == ((void*)0)) {
  VAR_5 = VAR_4 = VAR_7;
  return(0);
 }
 VAR_5->fow = VAR_7;
 VAR_5 = VAR_7;
 return(0);

    out:
 FUNC_2(1, "Time range format is: [yy[mm[dd[hh]]]]mm[.ss][/[c][m]]");
 return(-1);
}
