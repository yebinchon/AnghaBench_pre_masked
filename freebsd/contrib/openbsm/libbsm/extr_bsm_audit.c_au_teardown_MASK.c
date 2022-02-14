
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* t_data; } ;
typedef TYPE_1__ token_t ;
struct TYPE_9__ {scalar_t__ len; scalar_t__ used; int token_q; } ;
typedef TYPE_2__ au_record_t ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(au_record_t *VAR_4)
{
 token_t *VAR_5;


 while ((VAR_5 = FUNC_1(&VAR_4->token_q)) != ((void*)0)) {
  FUNC_2(&VAR_4->token_q, VAR_5, VAR_3);
  FUNC_3(VAR_5->t_data);
  FUNC_3(VAR_5);
 }

 VAR_4->used = 0;
 VAR_4->len = 0;






 FUNC_0(&VAR_1, VAR_4, VAR_0);




}
