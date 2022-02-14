
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * user_cookie; int (* user_callback ) (void*) ;} ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int (* SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ) (void*) ;


 int FUNC_0 (void*) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T *VAR_0
)
{
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_1 = VAR_0->user_callback;
   void * VAR_2 = VAR_0->user_cookie;





   VAR_0->user_callback = ((void*)0);
   VAR_0->user_cookie = ((void*)0);

   if (VAR_1 != ((void*)0))
   {
      (*VAR_1)(VAR_2);
   }
}
