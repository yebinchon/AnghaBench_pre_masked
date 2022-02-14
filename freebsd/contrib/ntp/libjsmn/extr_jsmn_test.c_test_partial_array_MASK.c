
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int size; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4() {
 int VAR_4;
 jsmn_parser VAR_5;
 jsmntok_t VAR_6[10];
 const char *VAR_7;

 FUNC_1(&VAR_5);
 VAR_7 = "  [ 1, true, ";
 VAR_4 = FUNC_2(&VAR_5, VAR_7, FUNC_3(VAR_7), VAR_6, 10);
 FUNC_0(VAR_4 == VAR_1 && VAR_6[0].type == VAR_0
   && VAR_6[1].type == VAR_2 && VAR_6[2].type == VAR_2);

 VAR_7 = "  [ 1, true, [123, \"hello";
 VAR_4 = FUNC_2(&VAR_5, VAR_7, FUNC_3(VAR_7), VAR_6, 10);
 FUNC_0(VAR_4 == VAR_1 && VAR_6[0].type == VAR_0
   && VAR_6[1].type == VAR_2 && VAR_6[2].type == VAR_2
   && VAR_6[3].type == VAR_0 && VAR_6[4].type == VAR_2);

 VAR_7 = "  [ 1, true, [123, \"hello\"]";
 VAR_4 = FUNC_2(&VAR_5, VAR_7, FUNC_3(VAR_7), VAR_6, 10);
 FUNC_0(VAR_4 == VAR_1 && VAR_6[0].type == VAR_0
   && VAR_6[1].type == VAR_2 && VAR_6[2].type == VAR_2
   && VAR_6[3].type == VAR_0 && VAR_6[4].type == VAR_2
   && VAR_6[5].type == VAR_3);

 FUNC_0(VAR_6[3].size == 2);

 VAR_7 = "  [ 1, true, [123, \"hello\"]]";
 VAR_4 = FUNC_2(&VAR_5, VAR_7, FUNC_3(VAR_7), VAR_6, 10);
 FUNC_0(VAR_4 >= 0 && VAR_6[0].type == VAR_0
   && VAR_6[1].type == VAR_2 && VAR_6[2].type == VAR_2
   && VAR_6[3].type == VAR_0 && VAR_6[4].type == VAR_2
   && VAR_6[5].type == VAR_3);
 FUNC_0(VAR_6[3].size == 2);
 FUNC_0(VAR_6[0].size == 3);
 return 0;
}
