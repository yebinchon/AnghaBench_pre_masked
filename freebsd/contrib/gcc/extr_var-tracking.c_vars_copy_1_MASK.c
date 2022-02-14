
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* variable ;
typedef int htab_t ;
struct TYPE_2__ {int decl; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2 (void **VAR_1, void *VAR_2)
{
  htab_t VAR_3 = (htab_t) VAR_2;
  variable VAR_4, *VAR_5;

  VAR_4 = *(variable *) VAR_1;
  VAR_4->refcount++;

  VAR_5 = (variable *) FUNC_1 (VAR_3, VAR_4->decl,
      FUNC_0 (VAR_4->decl),
      VAR_0);
  *VAR_5 = VAR_4;


  return 1;
}
