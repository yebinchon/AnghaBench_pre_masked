
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmntok_t ;
typedef int jsmn_parser ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4() {
 jsmn_parser VAR_1;
 jsmntok_t VAR_2[10];
 const char *VAR_3;

 int VAR_4;
 VAR_3 = "{\"a\":\"\\uAbcD\"}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 >= 0);

 VAR_3 = "{\"a\":\"str\\u0000\"}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 >= 0);

 VAR_3 = "{\"a\":\"\\uFFFFstr\"}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 >= 0);

 VAR_3 = "{\"a\":\"str\\uFFGFstr\"}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 == VAR_0);

 VAR_3 = "{\"a\":\"str\\u@FfF\"}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 == VAR_0);

 VAR_3 = "{\"a\":[\"\\u028\"]}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 == VAR_0);

 VAR_3 = "{\"a\":[\"\\u0280\"]}";
 FUNC_1(&VAR_1);
 VAR_4 = FUNC_2(&VAR_1, VAR_3, FUNC_3(VAR_3), VAR_2, 10);
 FUNC_0(VAR_4 >= 0);

 return 0;
}
