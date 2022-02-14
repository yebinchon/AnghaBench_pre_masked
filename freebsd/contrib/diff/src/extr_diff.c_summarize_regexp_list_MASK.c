
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regexp_list {char* regexps; TYPE_1__* buf; int len; scalar_t__ multiple_regexps; } ;
struct TYPE_2__ {int fastmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,char*,char const*) ;
 char* FUNC_1 (char*,int ,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct regexp_list *VAR_2)
{
  if (VAR_2->regexps)
    {

      VAR_2->buf->fastmap = FUNC_2 (1 << VAR_0);
      if (VAR_2->multiple_regexps)
 {


   char const *VAR_3 = FUNC_1 (VAR_2->regexps, VAR_2->len,
           VAR_2->buf);
   if (VAR_3 != 0)
     FUNC_0 (VAR_1, 0, "%s: %s", VAR_2->regexps, VAR_3);
 }
    }
}
