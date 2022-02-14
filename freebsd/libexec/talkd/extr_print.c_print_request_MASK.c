
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_3__ {int type; int r_tty; int r_name; int l_name; scalar_t__ id_num; } ;
typedef TYPE_1__ CTL_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int ,char*,char const*,char const*,long,int ,int ,int ) ;
 char** VAR_2 ;

void
FUNC_2(const char *VAR_3, CTL_MSG *VAR_4)
{
 const char *VAR_5;
 char VAR_6[80];

 if (VAR_4->type > VAR_1) {
  (void)FUNC_0(VAR_6, sizeof(VAR_6), "type %d", VAR_4->type);
  VAR_5 = VAR_6;
 } else
  VAR_5 = VAR_2[VAR_4->type];
 FUNC_1(VAR_0, "%s: %s: id %lu, l_user %s, r_user %s, r_tty %s",
     VAR_3, VAR_5, (long)VAR_4->id_num, VAR_4->l_name, VAR_4->r_name, VAR_4->r_tty);
}
