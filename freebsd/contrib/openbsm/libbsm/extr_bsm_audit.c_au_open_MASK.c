
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int used; size_t desc; scalar_t__ len; int token_q; struct TYPE_7__* data; } ;
typedef TYPE_1__ au_record_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_7 ;
 TYPE_1__** VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(void)
{
 au_record_t *VAR_9 = ((void*)0);





 if (VAR_5 == 0)
  FUNC_2(&VAR_4);





 if (!FUNC_0(&VAR_4)) {
  VAR_9 = FUNC_1(&VAR_4);
  VAR_9->used = 1;
  FUNC_3(VAR_9, VAR_3);
 }





 if (VAR_9 == ((void*)0)) {



  VAR_9 = FUNC_6 (sizeof(au_record_t));
  if (VAR_9 == ((void*)0))
   return (-1);

  VAR_9->data = FUNC_6 (VAR_2 * sizeof(u_char));
  if (VAR_9->data == ((void*)0)) {
   FUNC_5(VAR_9);
   VAR_6 = VAR_0;
   return (-1);
  }





  if (VAR_5 == VAR_1) {



   FUNC_5(VAR_9->data);
   FUNC_5(VAR_9);


   VAR_6 = VAR_0;
   return (-1);
  }
  VAR_9->desc = VAR_5;
  VAR_8[VAR_5] = VAR_9;
  VAR_5++;





 }

 FUNC_7(VAR_9->data, 0, VAR_2);

 FUNC_4(&VAR_9->token_q);
 VAR_9->len = 0;
 VAR_9->used = 1;

 return (VAR_9->desc);
}
