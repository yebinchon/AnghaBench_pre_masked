
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* fr_literal; int fr_fix; } ;
typedef TYPE_1__ fragS ;
struct TYPE_7__ {int owner; } ;
typedef TYPE_2__ asection ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int
FUNC_2 (fragS *VAR_0, asection *VAR_1)
{
  char *VAR_2;
  int VAR_3;

  VAR_2 = VAR_0->fr_literal + VAR_0->fr_fix;
  VAR_3 = FUNC_0(VAR_1->owner, VAR_2);
  if ((VAR_3 & 0xf) == ((VAR_3 >> 4) & 0xf))
    return FUNC_1 (VAR_0, 8, 0);
  else
    return FUNC_1 (VAR_0, 3, 0);
}
