
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* variable ;
typedef int htab_t ;
struct TYPE_5__ {int decl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4 (void **VAR_1, void *VAR_2)
{
  htab_t VAR_3 = (htab_t) VAR_2;
  variable VAR_4, VAR_5;

  VAR_4 = *(variable *) VAR_1;
  VAR_5 = FUNC_2 (VAR_3, VAR_4->decl,
         FUNC_0 (VAR_4->decl));
  if (!VAR_5)
    {
      VAR_0 = 1;


      return 0;
    }



  FUNC_1 (!FUNC_3 (VAR_4, VAR_5, 0));


  return 1;
}
