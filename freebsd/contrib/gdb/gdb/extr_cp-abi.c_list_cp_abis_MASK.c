
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cleanup {int dummy; } ;
struct TYPE_2__ {int doc; int shortname; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5 (int VAR_3)
{
  struct cleanup *VAR_4;
  int VAR_5;
  FUNC_4 (VAR_2, "The available C++ ABIs are:\n");

  VAR_4 = FUNC_1 (VAR_2, "cp-abi-list");
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
      char VAR_6[14];
      int VAR_7;

      FUNC_4 (VAR_2, "  ");
      FUNC_3 (VAR_2, "cp-abi", VAR_0[VAR_5]->shortname);

      VAR_7 = 16 - 2 - FUNC_2 (VAR_0[VAR_5]->shortname);
      VAR_6[VAR_7] = 0;
      while (VAR_7 > 0)
 VAR_6[--VAR_7] = ' ';
      FUNC_4 (VAR_2, VAR_6);

      FUNC_3 (VAR_2, "doc", VAR_0[VAR_5]->doc);
      FUNC_4 (VAR_2, "\n");
    }
  FUNC_0 (VAR_4);
}
