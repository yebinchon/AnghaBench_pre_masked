
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* lang; } ;
typedef TYPE_2__ mc_node_lang ;
struct TYPE_5__ {int sval; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,TYPE_2__**,int) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  mc_node_lang *VAR_5 = ((void*)0);
  int VAR_6, VAR_7;

  if (! VAR_1)
    return;

  VAR_6 = 0;
  while (VAR_6 < VAR_1)
    {
      char *VAR_8;
      char *VAR_9;

      if (VAR_5 && VAR_5->lang == VAR_0[VAR_6]->lang)
 {
   VAR_6++;
   continue;
 }
      VAR_5 = VAR_0[VAR_6];
      VAR_7 = VAR_6 + 1;
      while (VAR_7 < VAR_1 && VAR_5->lang == VAR_0[VAR_7]->lang)
 VAR_7++;
      VAR_8 = FUNC_0 (VAR_5->lang->sval);


      VAR_9 = FUNC_7 (FUNC_5 (VAR_8) + 4 + 1 + FUNC_5 (VAR_2) + 1 + FUNC_5 (VAR_4));
      FUNC_4 (VAR_9, VAR_4);
      if (VAR_3)
 FUNC_2 (VAR_9 + FUNC_5 (VAR_9), "%s_", VAR_2);
      FUNC_3 (VAR_9, VAR_8);
      FUNC_3 (VAR_9, ".bin");


      FUNC_6 (VAR_9, &VAR_0[VAR_6], (VAR_7 - VAR_6));

      FUNC_1 (VAR_9);
      VAR_6 = VAR_7;
    }
}
