
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int t_id; struct TYPE_8__* t_tdesc; int t_type; } ;
typedef TYPE_1__ tdesc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*,int*) ;
 TYPE_1__* FUNC_3 (int) ;
 char* FUNC_4 (char*,int,TYPE_1__**) ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (int) ;

__attribute__((used)) static char *
FUNC_7(char *VAR_1, tdesc_t **VAR_2)
{
 tdesc_t *VAR_3;
 int VAR_4;

 VAR_1 = FUNC_2(VAR_1, &VAR_4);

 FUNC_1(VAR_4 != 0);

 if (*VAR_1 == '=') {
  if (!(VAR_1 = FUNC_4(VAR_1 + 1, VAR_4, &VAR_3)))
   return (((void*)0));
  if (VAR_3->t_id && VAR_3->t_id != VAR_4) {
   tdesc_t *VAR_5 = FUNC_6(sizeof (*VAR_5));

   VAR_5->t_type = VAR_0;
   VAR_5->t_tdesc = VAR_3;
   VAR_3 = VAR_5;
  }
  FUNC_0(VAR_3, VAR_4);
 } else if ((VAR_3 = FUNC_3(VAR_4)) == ((void*)0))
  VAR_3 = FUNC_5(VAR_4);

 *VAR_2 = VAR_3;
 return (VAR_1);
}
