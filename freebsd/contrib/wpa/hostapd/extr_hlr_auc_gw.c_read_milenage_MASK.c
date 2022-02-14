
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct milenage_parameters {scalar_t__ res_len; struct milenage_parameters* next; int sqn; int amf; int opc; int ki; int imsi; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,int ,int) ;
 struct milenage_parameters* VAR_2 ;
 int FUNC_5 (struct milenage_parameters*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*) ;
 struct milenage_parameters* FUNC_8 (int) ;
 int FUNC_9 (char*,char const*,...) ;
 char* FUNC_10 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_11(const char *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[200], *VAR_6, *VAR_7;
 struct milenage_parameters *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0;

 if (VAR_3 == ((void*)0))
  return -1;

 VAR_4 = FUNC_3(VAR_3, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_9("Could not open Milenage data file '%s'\n", VAR_3);
  return -1;
 }

 VAR_9 = 0;
 while (FUNC_2(VAR_5, sizeof(VAR_5), VAR_4)) {
  VAR_9++;


  VAR_5[sizeof(VAR_5) - 1] = '\0';
  if (VAR_5[0] == '#')
   continue;
  VAR_6 = VAR_5;
  while (*VAR_6 != '\0' && *VAR_6 != '\n')
   VAR_6++;
  if (*VAR_6 == '\n')
   *VAR_6 = '\0';
  VAR_6 = VAR_5;
  if (*VAR_6 == '\0')
   continue;

  VAR_8 = FUNC_8(sizeof(*VAR_8));
  if (VAR_8 == ((void*)0)) {
   VAR_10 = -1;
   break;
  }


  VAR_7 = ((void*)0);
  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (!VAR_6 || FUNC_7(VAR_6) >= sizeof(VAR_8->imsi)) {
   FUNC_9("%s:%d - Invalid IMSI\n", VAR_3, VAR_9);
   VAR_10 = -1;
   break;
  }
  FUNC_6(VAR_8->imsi, VAR_6, sizeof(VAR_8->imsi));


  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (!VAR_6 || FUNC_7(VAR_6) != 32 ||
      FUNC_4(VAR_6, VAR_8->ki, 16)) {
   FUNC_9("%s:%d - Invalid Ki\n", VAR_3, VAR_9);
   VAR_10 = -1;
   break;
  }


  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (!VAR_6 || FUNC_7(VAR_6) != 32 ||
      FUNC_4(VAR_6, VAR_8->opc, 16)) {
   FUNC_9("%s:%d - Invalid OPc\n", VAR_3, VAR_9);
   VAR_10 = -1;
   break;
  }


  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (!VAR_6 || FUNC_7(VAR_6) != 4 || FUNC_4(VAR_6, VAR_8->amf, 2)) {
   FUNC_9("%s:%d - Invalid AMF\n", VAR_3, VAR_9);
   VAR_10 = -1;
   break;
  }


  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (!VAR_6 || FUNC_7(VAR_6) != 12 ||
      FUNC_4(VAR_6, VAR_8->sqn, 6)) {
   FUNC_9("%s:%d - Invalid SEQ\n", VAR_3, VAR_9);
   VAR_10 = -1;
   break;
  }

  VAR_6 = FUNC_10(VAR_5, " ", &VAR_7);
  if (VAR_6) {
   VAR_8->res_len = FUNC_0(VAR_6);
   if (VAR_8->res_len &&
       (VAR_8->res_len < VAR_1 ||
        VAR_8->res_len > VAR_0)) {
    FUNC_9("%s:%d - Invalid RES_len\n",
           VAR_3, VAR_9);
    VAR_10 = -1;
    break;
   }
  }

  VAR_8->next = VAR_2;
  VAR_2 = VAR_8;
  VAR_8 = ((void*)0);
 }
 FUNC_5(VAR_8);

 FUNC_1(VAR_4);

 return VAR_10;
}
