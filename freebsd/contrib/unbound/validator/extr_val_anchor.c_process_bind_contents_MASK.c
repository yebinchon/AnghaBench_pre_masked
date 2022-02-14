
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_anchors {int dummy; } ;
typedef int sldns_buffer ;
typedef int FILE ;


 int FUNC_0 (struct val_anchors*,int *,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *,int*,int) ;
 scalar_t__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,int ) ;
 char* FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(struct val_anchors* VAR_0, sldns_buffer* VAR_1,
 int* VAR_2, FILE* VAR_3)
{





 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 1;
 int VAR_7;
 char* VAR_8 = 0;
 FUNC_6(VAR_1);
 while((VAR_7=FUNC_4(VAR_3, VAR_1, VAR_2, VAR_6))) {
  if(VAR_7 == 1 && FUNC_8(VAR_1) == 1
   && FUNC_2((unsigned char)*FUNC_5(VAR_1))) {

   FUNC_6(VAR_1);
   continue;
  } else if(VAR_7 == 1 && FUNC_7(VAR_1)[-1] == '"') {

   if(VAR_4 == 0) {
    VAR_5 = 1;
    VAR_6 = 0;
   }
   FUNC_10(VAR_1, -1);
   if(VAR_4 > 0 && VAR_5) {
    if(FUNC_9(VAR_1) < 8+1) {
     FUNC_3("line %d, too long", *VAR_2);
     return 0;
    }
    FUNC_11(VAR_1, " DNSKEY ", 8);
    VAR_5 = 0;
    VAR_6 = 1;
   } else if(VAR_4 > 0)
    VAR_6 = !VAR_6;
   continue;
  } else if(VAR_7 == 1 && FUNC_7(VAR_1)[-1] == ';') {

   if(VAR_4 < 5) {
    FUNC_12(VAR_1, 0);
    FUNC_3("line %d, bad key", *VAR_2);
    return 0;
   }
   FUNC_10(VAR_1, -1);
   FUNC_12(VAR_1, 0);
   VAR_8 = FUNC_13((char*)FUNC_5(VAR_1));
   if(!VAR_8) {
    FUNC_3("line %d, allocation failure", *VAR_2);
    return 0;
   }
   if(!FUNC_0(VAR_0, VAR_1, VAR_8)) {
    FUNC_3("line %d, bad key", *VAR_2);
    FUNC_1(VAR_8);
    return 0;
   }
   FUNC_1(VAR_8);
   FUNC_6(VAR_1);
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 1;
   continue;
  } else if(VAR_7 == 1 && FUNC_7(VAR_1)[-1] == '}') {
   if(VAR_4 > 0) {
    FUNC_12(VAR_1, 0);
    FUNC_3("line %d, bad key before }", *VAR_2);
    return 0;
   }
   return 1;
  } else if(VAR_7 == 1 &&
   FUNC_2((unsigned char)FUNC_7(VAR_1)[-1])) {

  } else {

   VAR_4 ++;
   if(VAR_4 == 1 && !VAR_5) {
    if(FUNC_9(VAR_1) < 8+1) {
     FUNC_3("line %d, too long", *VAR_2);
     return 0;
    }
    FUNC_11(VAR_1, " DNSKEY ", 8);
   }
  }
 }

 FUNC_3("line %d, EOF before }", *VAR_2);
 return 0;
}
