
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* key; int keylen; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_emitter_functions {int dummy; } ;
struct ucl_emitter_context {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int * VAR_6 ;
 struct ucl_emitter_functions* FUNC_4 (int *) ;
 int FUNC_5 (struct ucl_emitter_functions*) ;
 int FUNC_6 (struct ucl_emitter_context*,TYPE_1__*) ;
 int FUNC_7 (struct ucl_emitter_context*) ;
 int FUNC_8 (struct ucl_emitter_context*) ;
 struct ucl_emitter_context* FUNC_9 (TYPE_1__*,int ,struct ucl_emitter_functions*) ;
 int FUNC_10 (struct ucl_emitter_context*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (double) ;
 TYPE_1__* FUNC_12 (int) ;
 TYPE_1__* FUNC_13 (char*,int ,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,char*,int ,int) ;
 TYPE_1__* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*) ;

int
FUNC_17 (int VAR_7, char **VAR_8)
{
 ucl_object_t *VAR_9, *VAR_10, *VAR_11;
 FILE *VAR_12;
 const char *VAR_13 = ((void*)0);
 struct ucl_emitter_context *VAR_14;
 struct ucl_emitter_functions *VAR_15;
 int VAR_16 = 0;

 switch (VAR_7) {
 case 2:
  VAR_13 = VAR_8[1];
  break;
 }

 if (VAR_13 != ((void*)0)) {
  VAR_12 = FUNC_3 (VAR_13, "w");
  if (VAR_12 == ((void*)0)) {
   FUNC_1 (-VAR_5);
  }
 }
 else {
  VAR_12 = VAR_6;
 }

 VAR_9 = FUNC_15 (VAR_2);


 VAR_10 = FUNC_13 ("  test string    ", 0, VAR_4);
 FUNC_14 (VAR_9, VAR_10, "key1", 0, 0);
 VAR_10 = FUNC_13 ("  test \nstring\n    ", 0, VAR_4 | VAR_3);
 FUNC_14 (VAR_9, VAR_10, "key2", 0, 0);
 VAR_10 = FUNC_13 ("  test string    \n", 0, 0);
 FUNC_14 (VAR_9, VAR_10, "key3", 0, 0);

 VAR_15 = FUNC_4 (VAR_12);
 VAR_14 = FUNC_9 (VAR_9, VAR_1, VAR_15);

 FUNC_0 (VAR_14 != ((void*)0));


 VAR_11 = FUNC_15 (VAR_0);
 VAR_11->key = "key4";
 VAR_11->keylen = sizeof ("key4") - 1;

 FUNC_10 (VAR_14, VAR_11);
 VAR_10 = FUNC_12 (10);
 FUNC_6 (VAR_14, VAR_10);
 VAR_10 = FUNC_11 (10.1);
 FUNC_6 (VAR_14, VAR_10);
 VAR_10 = FUNC_11 (9.999);
 FUNC_6 (VAR_14, VAR_10);


 FUNC_7 (VAR_14);
 FUNC_8 (VAR_14);
 FUNC_5 (VAR_15);
 FUNC_16 (VAR_9);

 FUNC_2 (VAR_12);

 return VAR_16;
}
