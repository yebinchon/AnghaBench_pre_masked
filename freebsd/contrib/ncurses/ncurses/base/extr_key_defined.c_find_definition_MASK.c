
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const ch; int value; struct TYPE_3__* child; struct TYPE_3__* sibling; } ;
typedef TYPE_1__ TRIES ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(TRIES * VAR_2, const char *VAR_3)
{
    TRIES *VAR_4;
    int VAR_5 = VAR_1;

    if (VAR_3 != 0 && *VAR_3 != '\0') {
 for (VAR_4 = VAR_2; VAR_4 != 0; VAR_4 = VAR_4->sibling) {
     if (FUNC_0(*VAR_3) == FUNC_0(VAR_4->ch)) {
  if (VAR_3[1] == '\0' && VAR_4->child != 0) {
      VAR_5 = VAR_0;
  } else if ((VAR_5 = FUNC_1(VAR_4->child, VAR_3 + 1))
      == VAR_1) {
      VAR_5 = VAR_4->value;
  } else if (VAR_3[1] == '\0') {
      VAR_5 = VAR_0;
  }
     }
     if (VAR_5 != VAR_1)
  break;
 }
    }
    return (VAR_5);
}
