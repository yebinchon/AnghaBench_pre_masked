
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {struct pt_decoder_function* next; int config; int pos; int ip; } ;
struct pt_decoder_function {int flags; int (* header ) (struct pt_query_decoder*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pt_decoder_function**,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pt_query_decoder*) ;

__attribute__((used)) static int FUNC_3(struct pt_query_decoder *VAR_3)
{
 if (!VAR_3)
  return -VAR_2;

 FUNC_1(&VAR_3->ip);

 for (;;) {
  const struct pt_decoder_function *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_0(&VAR_3->next, VAR_3->pos,
          &VAR_3->config);
  if (VAR_5)
   return VAR_5;

  VAR_4 = VAR_3->next;
  if (!VAR_4)
   return -VAR_2;


  if (VAR_4->flags & VAR_0)
   return 0;

  if (!VAR_4->header)
   return -VAR_1;

  VAR_5 = VAR_4->header(VAR_3);
  if (VAR_5)
   return VAR_5;
 }
}
