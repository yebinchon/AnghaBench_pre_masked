
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int time; int last_time; int * event; struct pt_decoder_function* next; } ;
struct pt_decoder_function {int (* decode ) (struct pt_query_decoder*) ;int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_query_decoder*) ;
 int FUNC_1 (struct pt_query_decoder*) ;
 scalar_t__ FUNC_2 (struct pt_query_decoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct pt_query_decoder*) ;

__attribute__((used)) static int FUNC_4(struct pt_query_decoder *VAR_6)
{
 int VAR_7;

 if (!VAR_6)
  return -VAR_5;

 for (;;) {
  const struct pt_decoder_function *VAR_8;

  VAR_8 = VAR_6->next;
  if (!VAR_8)
   return FUNC_0(VAR_6);

  if (!VAR_8->decode)
   return -VAR_5;


  if (FUNC_2(VAR_6))
   return -VAR_2;


  if (VAR_8->flags & VAR_0)
   return -VAR_2;




  VAR_6->event = ((void*)0);


  VAR_7 = VAR_8->decode(VAR_6);
  if (VAR_7)
   return VAR_7;


  if (VAR_6->event)
   return -VAR_4;


  if (VAR_8->flags & VAR_1)
   break;


  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7)
   return VAR_7;
 }


 VAR_6->last_time = VAR_6->time;


 VAR_7 = FUNC_1(VAR_6);
 if ((VAR_7 < 0) && (VAR_7 != -VAR_3))
  return VAR_7;

 return 0;
}
