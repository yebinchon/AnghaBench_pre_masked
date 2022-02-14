
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tbuf ;
typedef int abuf ;
struct TYPE_3__ {int type; int answer; int id_num; } ;
typedef TYPE_1__ CTL_RESPONSE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (int ,char*,char const*,char const*,char const*,int ) ;
 char** VAR_4 ;

void
FUNC_3(const char *VAR_5, CTL_RESPONSE *VAR_6)
{
 const char *VAR_7, *VAR_8;
 char VAR_9[80], VAR_10[80];

 if (VAR_6->type > VAR_2) {
  (void)FUNC_1(VAR_9, sizeof(VAR_9), "type %d", VAR_6->type);
  VAR_7 = VAR_9;
 } else
  VAR_7 = VAR_4[VAR_6->type];
 if (VAR_6->answer > VAR_1) {
  (void)FUNC_1(VAR_10, sizeof(VAR_10), "answer %d", VAR_6->answer);
  VAR_8 = VAR_10;
 } else
  VAR_8 = VAR_3[VAR_6->answer];
 FUNC_2(VAR_0, "%s: %s: %s, id %d", VAR_5, VAR_7, VAR_8, FUNC_0(VAR_6->id_num));
}
