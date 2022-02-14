
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int am_flags; } ;
typedef TYPE_1__ am_node ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* FUNC_0 (char*,TYPE_1__*) ;
 int VAR_2 ;

am_node *
FUNC_1(char *VAR_3)
{
  int VAR_4;

  for (VAR_4 = VAR_2; VAR_4 >= 0; --VAR_4) {
    am_node *VAR_5 = VAR_1[VAR_4];
    if (VAR_5 && (VAR_5->am_flags & VAR_0)) {
      VAR_5 = FUNC_0(VAR_3, VAR_1[VAR_4]);
      if (VAR_5) {
 return VAR_5;
      }
    }
  }

  return 0;
}
