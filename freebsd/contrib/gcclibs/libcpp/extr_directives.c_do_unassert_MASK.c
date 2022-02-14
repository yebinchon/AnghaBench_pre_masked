
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct answer {struct answer* next; } ;
typedef int cpp_reader ;
struct TYPE_6__ {scalar_t__ answers; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ cpp_hashnode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 struct answer** FUNC_2 (TYPE_2__*,struct answer*) ;
 TYPE_2__* FUNC_3 (int *,struct answer**,int ) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_3)
{
  cpp_hashnode *VAR_4;
  struct answer *VAR_5;

  VAR_4 = FUNC_3 (VAR_3, &VAR_5, VAR_2);

  if (VAR_4 && VAR_4->type == VAR_0)
    {
      if (VAR_5)
 {
   struct answer **VAR_6 = FUNC_2 (VAR_4, VAR_5), *VAR_7;


   VAR_7 = *VAR_6;
   if (VAR_7)
     *VAR_6 = VAR_7->next;


   if (VAR_4->value.answers == 0)
     VAR_4->type = VAR_1;

   FUNC_1 (VAR_3);
 }
      else
 FUNC_0 (VAR_4);
    }


}
