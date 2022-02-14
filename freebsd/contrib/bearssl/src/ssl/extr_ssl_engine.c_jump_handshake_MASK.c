
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ record_type_in; size_t hlen_in; size_t hlen_out; int action; int * saved_hbuf_out; int * hbuf_out; int cpu; int (* hsrun ) (int *) ;int * hbuf_in; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int * FUNC_3 (TYPE_1__*,size_t*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,size_t*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(br_ssl_engine_context *VAR_1, int VAR_2)
{






 for (;;) {
  size_t VAR_3, VAR_4;







  VAR_1->hbuf_in = FUNC_3(VAR_1, &VAR_3);
  if (VAR_1->hbuf_in != ((void*)0)
   && VAR_1->record_type_in == VAR_0)
  {
   VAR_3 = 0;
  }







  VAR_1->saved_hbuf_out = VAR_1->hbuf_out = FUNC_5(VAR_1, &VAR_4);
  if (VAR_1->hbuf_out != ((void*)0) && FUNC_1(VAR_1)) {
   VAR_4 = 0;
  }







  VAR_1->hlen_in = VAR_3;
  VAR_1->hlen_out = VAR_4;
  VAR_1->action = VAR_2;
  VAR_1->hsrun(&VAR_1->cpu);
  if (FUNC_0(VAR_1)) {
   return;
  }
  if (VAR_1->hbuf_out != VAR_1->saved_hbuf_out) {
   FUNC_4(VAR_1, VAR_1->hbuf_out - VAR_1->saved_hbuf_out);
  }
  if (VAR_3 != VAR_1->hlen_in) {
   FUNC_2(VAR_1, VAR_3 - VAR_1->hlen_in);
   if (VAR_1->hlen_in == 0) {







    VAR_2 = 0;
    continue;
   }
  }
  break;
 }
}
