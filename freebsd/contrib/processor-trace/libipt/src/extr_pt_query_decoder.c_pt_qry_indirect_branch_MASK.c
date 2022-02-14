
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_query_decoder {int time; int last_time; int ip; int * event; int tnt; struct pt_decoder_function* next; } ;
struct pt_decoder_function {int (* decode ) (struct pt_query_decoder*) ;int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct pt_query_decoder*) ;
 int FUNC_2 (struct pt_query_decoder*) ;
 int FUNC_3 (struct pt_query_decoder*) ;
 scalar_t__ FUNC_4 (struct pt_query_decoder*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct pt_query_decoder*) ;

int FUNC_7(struct pt_query_decoder *VAR_8, uint64_t *VAR_9)
{
 int VAR_10, VAR_11;

 if (!VAR_8 || !VAR_9)
  return -VAR_6;

 VAR_11 = 0;
 for (;;) {
  const struct pt_decoder_function *VAR_12;

  VAR_12 = VAR_8->next;
  if (!VAR_12)
   return FUNC_1(VAR_8);

  if (!VAR_12->decode)
   return -VAR_5;


  if (FUNC_4(VAR_8))
   return -VAR_2;




  VAR_8->event = ((void*)0);







  if ((VAR_12->flags & VAR_1) &&
      !FUNC_5(&VAR_8->tnt))
   return -VAR_2;


  VAR_10 = VAR_12->decode(VAR_8);
  if (VAR_10)
   return VAR_10;


  if (VAR_8->event)
   return -VAR_4;




  if (VAR_12->flags & VAR_0) {
   uint64_t VAR_13;




   VAR_10 = FUNC_0(&VAR_13, &VAR_8->ip);
   if (VAR_10 < 0)
    VAR_11 |= VAR_7;
   else
    *VAR_9 = VAR_13;

   break;
  }


  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10)
   return VAR_10;
 }


 VAR_8->last_time = VAR_8->time;


 VAR_10 = FUNC_2(VAR_8);
 if ((VAR_10 < 0) && (VAR_10 != -VAR_3))
  return VAR_10;

 VAR_11 |= FUNC_3(VAR_8);

 return VAR_11;
}
