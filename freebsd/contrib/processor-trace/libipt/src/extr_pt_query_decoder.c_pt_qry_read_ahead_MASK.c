
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; } ;
struct pt_query_decoder {struct pt_decoder_function* next; TYPE_1__ config; int pos; } ;
struct pt_decoder_function {int (* decode ) (struct pt_query_decoder*) ;int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_decoder_function**,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct pt_query_decoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pt_query_decoder*) ;

__attribute__((used)) static int FUNC_3(struct pt_query_decoder *VAR_4)
{
 if (!VAR_4)
  return -VAR_3;

 for (;;) {
  const struct pt_decoder_function *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_0(&VAR_4->next, VAR_4->pos,
          &VAR_4->config);
  if (VAR_6)
   return VAR_6;

  VAR_5 = VAR_4->next;
  if (!VAR_5)
   return -VAR_3;

  if (!VAR_5->decode)
   return -VAR_3;




  if (VAR_5->flags & (VAR_0 | VAR_1))
   return 0;


  if (FUNC_1(VAR_4))
   return 0;


  VAR_6 = VAR_5->decode(VAR_4);
  if (VAR_6) {






   if (VAR_6 == -VAR_2) {
    VAR_4->pos = VAR_4->config.end;
    VAR_4->next = ((void*)0);
   }

   return VAR_6;
  }
 }
}
