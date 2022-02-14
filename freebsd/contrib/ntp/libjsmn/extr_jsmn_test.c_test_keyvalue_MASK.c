
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4() {
 const char *VAR_1;
 int VAR_2;
 jsmn_parser VAR_3;
 jsmntok_t VAR_4[10];

 VAR_1 = "{\"a\": 0, \"b\": \"c\"}";

 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == 5);
 FUNC_0(VAR_4[0].size == 2);
 FUNC_0(VAR_4[1].size == 1 && VAR_4[3].size == 1);
 FUNC_0(VAR_4[2].size == 0 && VAR_4[4].size == 0);

 VAR_1 = "{\"a\"\n0}";
 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == VAR_0);

 VAR_1 = "{\"a\", 0}";
 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == VAR_0);

 VAR_1 = "{\"a\": {2}}";
 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == VAR_0);

 VAR_1 = "{\"a\": {2: 3}}";
 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == VAR_0);


 VAR_1 = "{\"a\": {\"a\": 2 3}}";
 FUNC_1(&VAR_3);
 VAR_2 = FUNC_2(&VAR_3, VAR_1, FUNC_3(VAR_1), VAR_4, 10);
 FUNC_0(VAR_2 == VAR_0);
 return 0;
}
