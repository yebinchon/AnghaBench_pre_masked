
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int toksmall ;
typedef int toklarge ;
struct TYPE_6__ {scalar_t__ type; int size; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmn_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6() {
 int VAR_2;
 int VAR_3;
 jsmn_parser VAR_4;
 jsmntok_t VAR_5[10], VAR_6[10];
 const char *VAR_7;

 VAR_7 = "  [ 1, true, [123, \"hello\"]]";

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  FUNC_1(&VAR_4);
  FUNC_4(VAR_5, 0, sizeof(VAR_5));
  FUNC_4(VAR_6, 0, sizeof(VAR_6));
  VAR_3 = FUNC_2(&VAR_4, VAR_7, FUNC_5(VAR_7), VAR_5, VAR_2);
  FUNC_0(VAR_3 == VAR_1);

  FUNC_3(VAR_6, VAR_5, sizeof(VAR_5));

  VAR_3 = FUNC_2(&VAR_4, VAR_7, FUNC_5(VAR_7), VAR_6, 10);
  FUNC_0(VAR_3 >= 0);

  FUNC_0(VAR_6[0].type == VAR_0 && VAR_6[0].size == 3);
  FUNC_0(VAR_6[3].type == VAR_0 && VAR_6[3].size == 2);
 }
 return 0;
}
