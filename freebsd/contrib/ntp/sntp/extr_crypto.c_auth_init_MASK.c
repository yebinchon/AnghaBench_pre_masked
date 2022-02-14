
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_id; char* typen; int key_len; char* key_seq; scalar_t__ typei; struct key* next; } ;
typedef int kbuf ;
typedef int FILE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 struct key* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (char) ;
 int VAR_1 ;
 struct key* VAR_2 ;
 scalar_t__ FUNC_8 (char*,int *) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,int*,char*,char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*) ;

int
FUNC_14(
 const char *VAR_3,
 struct key **VAR_4
 )
{
 FILE *VAR_5 = FUNC_5(VAR_3, "r");
 struct key *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 1;
 char VAR_9[200];
 char VAR_10[129];


 FUNC_0();

 if (VAR_5 == ((void*)0)) {
  if (VAR_0)
   FUNC_10("sntp auth_init: Couldn't open key file %s for reading!\n", VAR_3);
  return -1;
 }
 if (FUNC_3(VAR_5)) {
  if (VAR_0)
   FUNC_10("sntp auth_init: Key file %s is empty!\n", VAR_3);
  FUNC_2(VAR_5);
  return -1;
 }
 VAR_1 = 0;
 while (!FUNC_3(VAR_5)) {
  char * VAR_11;
  struct key *VAR_12;
  int VAR_13 = 0;

  if (((void*)0) == FUNC_4(VAR_9, sizeof(VAR_9), VAR_5))
   continue;

  VAR_9[sizeof(VAR_9) - 1] = '\0';
  VAR_11 = FUNC_12(VAR_9, '#');
  if (VAR_11)
   *VAR_11 = '\0';
  VAR_12 = FUNC_1(sizeof(*VAR_12));

  VAR_7 = FUNC_11(VAR_9, "%d %15s %128s",
     &VAR_12->key_id, VAR_12->typen, VAR_10);
  if (VAR_7 == 3) {
   int VAR_14 = FUNC_13(VAR_10);
   VAR_13 = 1;
   if (VAR_14 <= 20) {
    VAR_12->key_len = VAR_14;
    FUNC_9(VAR_12->key_seq, VAR_10, VAR_14 + 1);
   } else if ((VAR_14 & 1) != 0) {
    VAR_13 = 0;
   } else {
    int VAR_15;
    VAR_12->key_len = VAR_14 >> 1;
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15+=2) {
     int VAR_16;
     VAR_16 = (FUNC_7(VAR_10[VAR_15]) << 4) |
            FUNC_7(VAR_10[VAR_15+1]);
     if (VAR_16 < 0) {
      VAR_13 = 0;
      break;
     }
     VAR_12->key_seq[VAR_15>>1] = (char)VAR_16;
    }
   }
   VAR_12->typei = FUNC_8(VAR_12->typen, ((void*)0));
   if (0 == VAR_12->typei) {
    FUNC_10("%s: line %d: key %d, %s not supported - ignoring\n",
     VAR_3, VAR_8,
     VAR_12->key_id, VAR_12->typen);
    VAR_13 = 0;
   }
  }
  if (VAR_13) {
   VAR_12->next = ((void*)0);
   if (((void*)0) == VAR_6)
    *VAR_4 = VAR_12;
   else
    VAR_6->next = VAR_12;
   VAR_6 = VAR_12;
   VAR_1++;
  } else {
   if (VAR_0) {
    FUNC_10("auth_init: scanf %d items, skipping line %d.",
     VAR_7, VAR_8);
   }
   FUNC_6(VAR_12);
  }
  VAR_8++;
 }
 FUNC_2(VAR_5);

 VAR_2 = *VAR_4;
 return VAR_1;
}
