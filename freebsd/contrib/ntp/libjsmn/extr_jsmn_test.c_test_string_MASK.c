
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,TYPE_1__,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5() {
 int VAR_1;
 jsmn_parser VAR_2;
 jsmntok_t VAR_3[10];
 const char *VAR_4;

 VAR_4 = "\"strVar\" : \"hello world\"";
 FUNC_2(&VAR_2);
 VAR_1 = FUNC_3(&VAR_2, VAR_4, FUNC_4(VAR_4), VAR_3, 10);
 FUNC_1(VAR_1 >= 0 && VAR_3[0].type == VAR_0
   && VAR_3[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_4, VAR_3[0], "strVar"));
 FUNC_1(FUNC_0(VAR_4, VAR_3[1], "hello world"));

 VAR_4 = "\"strVar\" : \"escapes: \\/\\r\\n\\t\\b\\f\\\"\\\\\"";
 FUNC_2(&VAR_2);
 VAR_1 = FUNC_3(&VAR_2, VAR_4, FUNC_4(VAR_4), VAR_3, 10);
 FUNC_1(VAR_1 >= 0 && VAR_3[0].type == VAR_0
   && VAR_3[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_4, VAR_3[0], "strVar"));
 FUNC_1(FUNC_0(VAR_4, VAR_3[1], "escapes: \\/\\r\\n\\t\\b\\f\\\"\\\\"));

 VAR_4 = "\"strVar\" : \"\"";
 FUNC_2(&VAR_2);
 VAR_1 = FUNC_3(&VAR_2, VAR_4, FUNC_4(VAR_4), VAR_3, 10);
 FUNC_1(VAR_1 >= 0 && VAR_3[0].type == VAR_0
   && VAR_3[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_4, VAR_3[0], "strVar"));
 FUNC_1(FUNC_0(VAR_4, VAR_3[1], ""));

 return 0;
}
