
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int start; int end; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4() {
 const char *VAR_3;
 int VAR_4;
 jsmn_parser VAR_5;
 jsmntok_t VAR_6[10];

 VAR_3 = "{}";
 FUNC_1(&VAR_5);
 VAR_4 = FUNC_2(&VAR_5, VAR_3, FUNC_3(VAR_3), VAR_6, 10);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_6[0].type == VAR_1);
 FUNC_0(VAR_6[0].start == 0 && VAR_6[0].end == 2);

 VAR_3 = "[]";
 FUNC_1(&VAR_5);
 VAR_4 = FUNC_2(&VAR_5, VAR_3, FUNC_3(VAR_3), VAR_6, 10);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_6[0].type == VAR_0);
 FUNC_0(VAR_6[0].start == 0 && VAR_6[0].end == 2);

 VAR_3 = "{\"a\":[]}";
 FUNC_1(&VAR_5);
 VAR_4 = FUNC_2(&VAR_5, VAR_3, FUNC_3(VAR_3), VAR_6, 10);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_6[0].type == VAR_1 && VAR_6[0].start == 0 && VAR_6[0].end == 8);
 FUNC_0(VAR_6[1].type == VAR_2 && VAR_6[1].start == 2 && VAR_6[1].end == 3);
 FUNC_0(VAR_6[2].type == VAR_0 && VAR_6[2].start == 5 && VAR_6[2].end == 7);

 VAR_3 = "[{},{}]";
 FUNC_1(&VAR_5);
 VAR_4 = FUNC_2(&VAR_5, VAR_3, FUNC_3(VAR_3), VAR_6, 10);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_6[0].type == VAR_0 && VAR_6[0].start == 0 && VAR_6[0].end == 7);
 FUNC_0(VAR_6[1].type == VAR_1 && VAR_6[1].start == 1 && VAR_6[1].end == 3);
 FUNC_0(VAR_6[2].type == VAR_1 && VAR_6[2].start == 4 && VAR_6[2].end == 6);
 return 0;
}
