
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_5__ {struct TYPE_5__* next; int ** files; } ;
typedef int FILE ;
typedef TYPE_1__ CLIENT ;


 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (int ,char*,int,...) ;

int
FUNC_13(void)
{
 FILE *VAR_9;
 CLIENT *VAR_10;
 u_int8_t *VAR_11;
 char VAR_12[VAR_2];
 char *VAR_13, *VAR_14;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0;

 if (VAR_0)
  return(1);

 FUNC_1();

 if ((VAR_9 = FUNC_7(VAR_5, "r")) == ((void*)0)) {
  FUNC_12(VAR_7, "ParseConfig: can't open config file (%s)",
         VAR_5);
  return(0);
 }
 VAR_17 = FUNC_8(FUNC_9(VAR_8));
 while (FUNC_6(VAR_12, VAR_2, VAR_9) != ((void*)0)) {
  VAR_18++;

  if (*VAR_12 == '\0' || *VAR_12 == '#')
   continue;

  if ((VAR_13 = FUNC_11(VAR_12,'#')) != ((void*)0))
   *VAR_13 = '\0';

  VAR_13 = VAR_12;
  while (isspace(*VAR_13) || *VAR_13 == ',') VAR_13++; VAR_14 = VAR_13; while (*VAR_13 && *VAR_13!=',' && !FUNC_0(*VAR_13)) VAR_13++; if (*VAR_13) *VAR_13++ = '\0';
  if (VAR_14 == VAR_13)
   continue;




  if ((VAR_11 = FUNC_3(VAR_14)) == ((void*)0)) {
   FUNC_12(VAR_7,
          "ParseConfig: line %d: can't parse <%s>",
          VAR_18, VAR_14);
   continue;
  }

  if ((VAR_10 = FUNC_2(VAR_11)) == ((void*)0))
   continue;

  while (FUNC_0(*VAR_13) || *VAR_13 == ',') VAR_13++; VAR_14 = VAR_13; while (*VAR_13 && *VAR_13!=',' && !FUNC_0(*VAR_13)) VAR_13++; if (*VAR_13) *VAR_13++ = '\0';






  VAR_15 = 0;
  if (VAR_14 == VAR_13)
   for (; VAR_15 < VAR_3 && VAR_1[VAR_15] != ((void*)0); VAR_15++)
    VAR_10->files[VAR_15] = VAR_1[VAR_15];
  else {
   do {





    for (VAR_16 = 0; ; VAR_16++) {
     if (VAR_16==VAR_3||VAR_1[VAR_16]==((void*)0)) {
      FUNC_12(VAR_7, "ParseConfig: line %d: no boot file (%s)",
             VAR_18, VAR_14);
      break;
     }
     if (FUNC_4(VAR_1[VAR_16], VAR_14)) {
      if (VAR_15 < VAR_3)
       VAR_10->files[VAR_15++] =
           VAR_1[VAR_16];
      else
       FUNC_12(VAR_7, "ParseConfig: line %d: too many boot files (%s)",
              VAR_18, VAR_14);
      break;
     }
    }
    while (FUNC_0(*VAR_13) || *VAR_13 == ',') VAR_13++; VAR_14 = VAR_13; while (*VAR_13 && *VAR_13!=',' && !FUNC_0(*VAR_13)) VAR_13++; if (*VAR_13) *VAR_13++ = '\0';
   } while (VAR_14 != VAR_13);







   if (VAR_15 == 0) {
    FUNC_0(VAR_10);
    continue;
   }
  }





  if (VAR_4)
   VAR_10->next = VAR_4;
  VAR_4 = VAR_10;
 }

 (void) FUNC_5(VAR_9);

 (void) FUNC_10(VAR_17);

 return(1);
}
