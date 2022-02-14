
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char jsmntok_t ;
struct TYPE_4__ {int toknext; } ;
typedef TYPE_1__ jsmn_parser ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t,char*,size_t) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,int) ;

int FUNC_8() {
 int VAR_5;
 int VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 char VAR_9[VAR_0];

 jsmn_parser VAR_10;
 jsmntok_t *VAR_11;
 size_t VAR_12 = 2;


 FUNC_3(&VAR_10);


 VAR_11 = FUNC_5(sizeof(*VAR_11) * VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_3, "malloc(): errno=%d\n", VAR_2);
  return 3;
 }

 for (;;) {

  VAR_5 = FUNC_2(VAR_9, 1, sizeof(VAR_9), VAR_4);
  if (VAR_5 < 0) {
   FUNC_1(VAR_3, "fread(): %d, errno=%d\n", VAR_5, VAR_2);
   return 1;
  }
  if (VAR_5 == 0) {
   if (VAR_6 != 0) {
    return 0;
   } else {
    FUNC_1(VAR_3, "fread(): unexpected EOF\n");
    return 2;
   }
  }

  VAR_7 = FUNC_6(VAR_7, VAR_8 + VAR_5 + 1);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_3, "realloc(): errno=%d\n", VAR_2);
   return 3;
  }
  FUNC_7(VAR_7 + VAR_8, VAR_9, VAR_5);
  VAR_8 = VAR_8 + VAR_5;

again:
  VAR_5 = FUNC_4(&VAR_10, VAR_7, VAR_8, VAR_11, VAR_12);
  if (VAR_5 < 0) {
   if (VAR_5 == VAR_1) {
    VAR_12 = VAR_12 * 2;
    VAR_11 = FUNC_6(VAR_11, sizeof(*VAR_11) * VAR_12);
    if (VAR_11 == ((void*)0)) {
     FUNC_1(VAR_3, "realloc(): errno=%d\n", VAR_2);
     return 3;
    }
    goto again;
   }
  } else {
   FUNC_0(VAR_7, VAR_11, VAR_10.toknext, 0);
   VAR_6 = 1;
  }
 }

 return 0;
}
