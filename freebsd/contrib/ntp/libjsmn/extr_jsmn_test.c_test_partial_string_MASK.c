
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ jsmntok_t ;
struct TYPE_8__ {int toknext; } ;
typedef TYPE_2__ jsmn_parser ;
typedef int js_unicode ;
typedef int js_slash ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,TYPE_1__,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int,TYPE_1__*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5() {
 int VAR_2;
 jsmn_parser VAR_3;
 jsmntok_t VAR_4[10];
 const char *VAR_5;

 FUNC_2(&VAR_3);
 VAR_5 = "\"x\": \"va";
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 == VAR_0 && VAR_4[0].type == VAR_1);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "x"));
 FUNC_1(VAR_3.toknext == 1);

 FUNC_2(&VAR_3);
 char VAR_6[9] = "\"x\": \"va\\";
 VAR_2 = FUNC_3(&VAR_3, VAR_6, sizeof(VAR_6), VAR_4, 10);
 FUNC_1(VAR_2 == VAR_0);

 FUNC_2(&VAR_3);
 char VAR_7[10] = "\"x\": \"va\\u";
 VAR_2 = FUNC_3(&VAR_3, VAR_7, sizeof(VAR_7), VAR_4, 10);
 FUNC_1(VAR_2 == VAR_0);

 VAR_5 = "\"x\": \"valu";
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 == VAR_0 && VAR_4[0].type == VAR_1);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "x"));
 FUNC_1(VAR_3.toknext == 1);

 VAR_5 = "\"x\": \"value\"";
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_1);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "x"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "value"));

 VAR_5 = "\"x\": \"value\", \"y\": \"value y\"";
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_1 && VAR_4[2].type == VAR_1
   && VAR_4[3].type == VAR_1);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "x"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "value"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[2], "y"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[3], "value y"));

 return 0;
}
