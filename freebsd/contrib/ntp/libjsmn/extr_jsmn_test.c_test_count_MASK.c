
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmn_parser ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int ) ;
 int FUNC_3 (char const*) ;

int FUNC_4() {
 jsmn_parser VAR_0;
 const char *VAR_1;

 VAR_1 = "{}";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 1);

 VAR_1 = "[]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 1);

 VAR_1 = "[[]]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 2);

 VAR_1 = "[[], []]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 3);

 VAR_1 = "[[], []]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 3);

 VAR_1 = "[[], [[]], [[], []]]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 7);

 VAR_1 = "[\"a\", [[], []]]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 5);

 VAR_1 = "[[], \"[], [[]]\", [[]]]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 5);

 VAR_1 = "[1, 2, 3]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 4);

 VAR_1 = "[1, 2, [3, \"a\"], null]";
 FUNC_1(&VAR_0);
 FUNC_0(FUNC_2(&VAR_0, VAR_1, FUNC_3(VAR_1), ((void*)0), 0) == 7);

 return 0;
}
