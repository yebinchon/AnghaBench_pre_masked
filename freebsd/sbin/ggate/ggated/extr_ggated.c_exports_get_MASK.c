
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (unsigned int,char*) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 char VAR_4[VAR_0], *VAR_5;
 unsigned VAR_6 = 0, VAR_7 = 0, VAR_8;
 FILE *VAR_9;

 FUNC_0();

 VAR_9 = FUNC_4(VAR_3, "r");
 if (VAR_9 == ((void*)0)) {
  FUNC_6("Cannot open exports file (%s): %s.", VAR_3,
      FUNC_8(VAR_2));
 }

 FUNC_5(VAR_1, "Reading exports file (%s).", VAR_3);

 for (;;) {
  if (FUNC_3(VAR_4, sizeof(VAR_4), VAR_9) == ((void*)0)) {
   if (FUNC_2(VAR_9))
    break;

   FUNC_6("Error while reading exports file: %s.",
       FUNC_8(VAR_2));
  }


  VAR_6++;


  for (VAR_5 = VAR_4; *VAR_5 == ' ' || *VAR_5 == '\t'; ++VAR_5)
   ;


  if (*VAR_5 == '\n' || *VAR_5 == '#' || *VAR_5 == '\0')
   continue;

  VAR_8 = FUNC_9(VAR_5);
  if (VAR_5[VAR_8 - 1] == '\n') {

   VAR_5[VAR_8 - 1] = '\0';
  } else {
   if (!FUNC_2(VAR_9))
    FUNC_6("Line %u too long.", VAR_6);
  }

  FUNC_7(VAR_5, VAR_6);
  VAR_7++;
 }

 FUNC_1(VAR_9);

 if (VAR_7 == 0)
  FUNC_6("There are no objects to export.");

 FUNC_5(VAR_1, "Exporting %u object(s).", VAR_7);
}
