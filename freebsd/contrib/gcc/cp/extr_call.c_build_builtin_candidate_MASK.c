
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct z_candidate {int dummy; } ;
struct TYPE_6__ {scalar_t__ bad_p; } ;
typedef TYPE_1__ conversion ;


 int VAR_0 ;
 int FUNC_0 (struct z_candidate**,scalar_t__,int ,size_t,TYPE_1__**,int ,int ,int) ;
 TYPE_1__** FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;
 TYPE_1__* FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4 (struct z_candidate **VAR_2, tree VAR_3,
    tree VAR_4, tree VAR_5, tree *VAR_6, tree *VAR_7,
    int VAR_8)
{
  conversion *VAR_9;
  conversion **VAR_10;
  size_t VAR_11;
  int VAR_12 = 1, VAR_13;
  tree VAR_14[2];

  VAR_14[0] = VAR_4;
  VAR_14[1] = VAR_5;

  VAR_11 = VAR_6[2] ? 3 : (VAR_6[1] ? 2 : 1);
  VAR_10 = FUNC_1 (VAR_11);

  for (VAR_13 = 0; VAR_13 < 2; ++VAR_13)
    {
      if (! VAR_6[VAR_13])
 break;

      VAR_9 = FUNC_3 (VAR_14[VAR_13], VAR_7[VAR_13], VAR_6[VAR_13],
                       0, VAR_8);
      if (! VAR_9)
 {
   VAR_12 = 0;

   VAR_9 = FUNC_2 (VAR_14[VAR_13], VAR_0);
 }
      else if (VAR_9->bad_p)
 VAR_12 = 0;
      VAR_10[VAR_13] = VAR_9;
    }


  if (VAR_6[2])
    {
      VAR_10[2] = VAR_10[1];
      VAR_10[1] = VAR_10[0];
      VAR_9 = FUNC_3 (VAR_1, VAR_7[2], VAR_6[2],
                       0, VAR_8);
      if (VAR_9)
 VAR_10[0] = VAR_9;
      else
 VAR_12 = 0;
    }

  FUNC_0 (VAR_2, VAR_3, VAR_0,
   VAR_11, VAR_10,
                   VAR_0,
                       VAR_0,
   VAR_12);
}
