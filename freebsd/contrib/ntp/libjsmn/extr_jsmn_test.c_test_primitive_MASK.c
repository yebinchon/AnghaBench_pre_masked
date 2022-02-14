
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,TYPE_1__,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5() {

 int VAR_2;
 jsmn_parser VAR_3;
 jsmntok_t VAR_4[10];
 const char *VAR_5;
 VAR_5 = "\"boolVar\" : true";
 FUNC_2(&VAR_3);
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "boolVar"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "true"));

 VAR_5 = "\"boolVar\" : false";
 FUNC_2(&VAR_3);
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "boolVar"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "false"));

 VAR_5 = "\"intVar\" : 12345";
 FUNC_2(&VAR_3);
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "intVar"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "12345"));

 VAR_5 = "\"floatVar\" : 12.345";
 FUNC_2(&VAR_3);
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "floatVar"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "12.345"));

 VAR_5 = "\"nullVar\" : null";
 FUNC_2(&VAR_3);
 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_1
   && VAR_4[1].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "nullVar"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "null"));

 return 0;
}
