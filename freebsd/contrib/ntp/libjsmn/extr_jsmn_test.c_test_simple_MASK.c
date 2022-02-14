
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmntok_t ;
typedef int jsmn_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (char const*,int ,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ,int *,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6() {
 const char *VAR_3;
 int VAR_4;
 jsmn_parser VAR_5;
 jsmntok_t VAR_6[10];

 VAR_3 = "{\"a\": 0}";

 FUNC_3(&VAR_5);
 VAR_4 = FUNC_4(&VAR_5, VAR_3, FUNC_5(VAR_3), VAR_6, 10);
 FUNC_2(VAR_4 >= 0);
 FUNC_2(FUNC_0(VAR_6[0], 0, 8, VAR_0));
 FUNC_2(FUNC_0(VAR_6[1], 2, 3, VAR_2));
 FUNC_2(FUNC_0(VAR_6[2], 6, 7, VAR_1));

 FUNC_2(FUNC_1(VAR_3, VAR_6[0], VAR_3));
 FUNC_2(FUNC_1(VAR_3, VAR_6[1], "a"));
 FUNC_2(FUNC_1(VAR_3, VAR_6[2], "0"));

 FUNC_3(&VAR_5);
 VAR_3 = "[\"a\":{},\"b\":{}]";
 VAR_4 = FUNC_4(&VAR_5, VAR_3, FUNC_5(VAR_3), VAR_6, 10);
 FUNC_2(VAR_4 >= 0);

 FUNC_3(&VAR_5);
 VAR_3 = "{\n \"Day\": 26,\n \"Month\": 9,\n \"Year\": 12\n }";
 VAR_4 = FUNC_4(&VAR_5, VAR_3, FUNC_5(VAR_3), VAR_6, 10);
 FUNC_2(VAR_4 >= 0);

 return 0;
}
