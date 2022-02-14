
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmntok_t ;
typedef int jsmn_parser ;


 int FUNC_0 (char const*,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int *,int) ;

int FUNC_4() {
 const char *VAR_0;
 int VAR_1;
 jsmn_parser VAR_2;
 jsmntok_t VAR_3[10];

 VAR_0 = "{\"a\": 0}garbage";

 FUNC_2(&VAR_2);
 VAR_1 = FUNC_3(&VAR_2, VAR_0, 8, VAR_3, 10);
 FUNC_1(VAR_1 == 3);
 FUNC_1(FUNC_0(VAR_0, VAR_3[0], "{\"a\": 0}"));
 FUNC_1(FUNC_0(VAR_0, VAR_3[1], "a"));
 FUNC_1(FUNC_0(VAR_0, VAR_3[2], "0"));

 return 0;
}
