
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

 FUNC_2(&VAR_3);
 VAR_5 = "key1: \"value\"\nkey2 : 123";

 VAR_2 = FUNC_3(&VAR_3, VAR_5, FUNC_4(VAR_5), VAR_4, 10);
 FUNC_1(VAR_2 >= 0 && VAR_4[0].type == VAR_0
   && VAR_4[1].type == VAR_1 && VAR_4[2].type == VAR_0
   && VAR_4[3].type == VAR_0);
 FUNC_1(FUNC_0(VAR_5, VAR_4[0], "key1"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[1], "value"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[2], "key2"));
 FUNC_1(FUNC_0(VAR_5, VAR_4[3], "123"));

 return 0;
}
