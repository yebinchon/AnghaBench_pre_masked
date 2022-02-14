
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
 int VAR_1;
 jsmn_parser VAR_2;
 jsmntok_t VAR_3[10];
 const char *VAR_4;

 VAR_4 = "[10}";
 FUNC_1(&VAR_2);
 VAR_1 = FUNC_2(&VAR_2, VAR_4, FUNC_3(VAR_4), VAR_3, 10);
 FUNC_0(VAR_1 == VAR_0);

 VAR_4 = "[10]";
 FUNC_1(&VAR_2);
 VAR_1 = FUNC_2(&VAR_2, VAR_4, FUNC_3(VAR_4), VAR_3, 10);
 FUNC_0(VAR_1 >= 0);

 VAR_4 = "{\"a\": 1]";
 FUNC_1(&VAR_2);
 VAR_1 = FUNC_2(&VAR_2, VAR_4, FUNC_3(VAR_4), VAR_3, 10);
 FUNC_0(VAR_1 == VAR_0);

 VAR_4 = "{\"a\": 1}";
 FUNC_1(&VAR_2);
 VAR_1 = FUNC_2(&VAR_2, VAR_4, FUNC_3(VAR_4), VAR_3, 10);
 FUNC_0(VAR_1 >= 0);

 return 0;
}
