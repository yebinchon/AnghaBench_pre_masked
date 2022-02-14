
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_triplet {struct gsm_triplet* next; int _rand; int sres; int kc; int imsi; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 struct gsm_triplet* VAR_0 ;
 scalar_t__ FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct gsm_triplet*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 struct gsm_triplet* FUNC_7 (int) ;
 int FUNC_8 (char*,char const*,...) ;
 char* FUNC_9 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_10(const char *VAR_1)
{
 FILE *VAR_2;
 char VAR_3[200], *VAR_4, *VAR_5;
 struct gsm_triplet *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_2 = FUNC_2(VAR_1, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_8("Could not open GSM triplet data file '%s'\n", VAR_1);
  return -1;
 }

 VAR_7 = 0;
 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_2)) {
  VAR_7++;


  VAR_3[sizeof(VAR_3) - 1] = '\0';
  if (VAR_3[0] == '#')
   continue;
  VAR_4 = VAR_3;
  while (*VAR_4 != '\0' && *VAR_4 != '\n')
   VAR_4++;
  if (*VAR_4 == '\n')
   *VAR_4 = '\0';
  VAR_4 = VAR_3;
  if (*VAR_4 == '\0')
   continue;

  VAR_6 = FUNC_7(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   VAR_8 = -1;
   break;
  }


  VAR_5 = ((void*)0);
  VAR_4 = FUNC_9(VAR_3, ":", &VAR_5);
  if (!VAR_4 || FUNC_6(VAR_4) >= sizeof(VAR_6->imsi)) {
   FUNC_8("%s:%d - Invalid IMSI\n", VAR_1, VAR_7);
   VAR_8 = -1;
   break;
  }
  FUNC_5(VAR_6->imsi, VAR_4, sizeof(VAR_6->imsi));


  VAR_4 = FUNC_9(VAR_3, ":", &VAR_5);
  if (!VAR_4 || FUNC_6(VAR_4) != 16 || FUNC_3(VAR_4, VAR_6->kc, 8)) {
   FUNC_8("%s:%d - Invalid Kc\n", VAR_1, VAR_7);
   VAR_8 = -1;
   break;
  }


  VAR_4 = FUNC_9(VAR_3, ":", &VAR_5);
  if (!VAR_4 || FUNC_6(VAR_4) != 8 ||
      FUNC_3(VAR_4, VAR_6->sres, 4)) {
   FUNC_8("%s:%d - Invalid SRES\n", VAR_1, VAR_7);
   VAR_8 = -1;
   break;
  }


  VAR_4 = FUNC_9(VAR_3, ":", &VAR_5);
  if (!VAR_4 || FUNC_6(VAR_4) != 32 ||
      FUNC_3(VAR_4, VAR_6->_rand, 16)) {
   FUNC_8("%s:%d - Invalid RAND\n", VAR_1, VAR_7);
   VAR_8 = -1;
   break;
  }

  VAR_6->next = VAR_0;
  VAR_0 = VAR_6;
  VAR_6 = ((void*)0);
 }
 FUNC_4(VAR_6);

 FUNC_0(VAR_2);

 return VAR_8;
}
