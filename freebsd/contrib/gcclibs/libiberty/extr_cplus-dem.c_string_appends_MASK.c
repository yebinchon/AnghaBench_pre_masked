
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ b; scalar_t__ p; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 (string *VAR_0, string *VAR_1)
{
  int VAR_2;

  if (VAR_1->b != VAR_1->p)
    {
      VAR_2 = VAR_1->p - VAR_1->b;
      FUNC_1 (VAR_0, VAR_2);
      FUNC_0 (VAR_0->p, VAR_1->b, VAR_2);
      VAR_0->p += VAR_2;
    }
}
