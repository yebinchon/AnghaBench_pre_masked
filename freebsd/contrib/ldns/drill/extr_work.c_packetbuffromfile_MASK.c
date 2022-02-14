
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,scalar_t__*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_6 (char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__* FUNC_9 (int) ;

__attribute__((used)) static size_t
FUNC_10(char *VAR_3, uint8_t *VAR_4)
{
 FILE *VAR_5 = ((void*)0);
 int VAR_6;






 int VAR_7 = 0;
 uint8_t *VAR_8 = FUNC_9(VAR_1);
 int VAR_9 = 0;
 size_t VAR_10;

 if (FUNC_7(VAR_3, "-", 2) == 0) {
  VAR_5 = VAR_2;
 } else {
  VAR_5 = FUNC_2(VAR_3, "r");
 }
 if (VAR_5 == ((void*)0)) {
  FUNC_6("Unable to open file for reading");
  FUNC_8(VAR_8);
  return 0;
 }



 VAR_6 = FUNC_1(VAR_5);
 while (VAR_6 != VAR_0 && VAR_9 < VAR_1) {
  if (VAR_7 < 2 && !FUNC_4(VAR_6)) {

   VAR_7 = 2;
  }
  switch (VAR_7) {
   case 0:
    if ( (VAR_6 >= '0' && VAR_6 <= '9') ||
     (VAR_6 >= 'a' && VAR_6 <= 'f') ||
     (VAR_6 >= 'A' && VAR_6 <= 'F') )
    {
     VAR_8[VAR_9] = (uint8_t) VAR_6;
     VAR_9++;
    } else if (VAR_6 == ';') {
     VAR_7 = 1;
    } else if (VAR_6 == ' ' || VAR_6 == '\t' || VAR_6 == '\n') {

    }
    break;
   case 1:
    if (VAR_6 == '\n' || VAR_6 == VAR_0) {
     VAR_7 = 0;
    }
    break;
   case 2:
    VAR_8[VAR_9] = (uint8_t) VAR_6;
    VAR_9++;
    break;
  }
  VAR_6 = FUNC_1(VAR_5);
 }

 if (VAR_6 == VAR_0) {
 }
 if (VAR_9 >= VAR_1) {

 }


 if (VAR_9 % 2 != 0) {
  VAR_8[VAR_9] = (uint8_t) '0';
  VAR_9++;
 }

 if (VAR_7 < 2) {
  VAR_10 = FUNC_3((char *) VAR_8,
       VAR_9,
       VAR_4,
       0,
       VAR_1);
 } else {
  FUNC_5(VAR_4, VAR_8, (size_t) VAR_9);
  VAR_10 = (size_t) VAR_9;
 }
 if (VAR_5 != VAR_2) {
  FUNC_0(VAR_5);
 }
 FUNC_8(VAR_8);
 return VAR_10;
}
