
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sdp_session_p ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ s; struct TYPE_4__* rsp; struct TYPE_4__* req; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int32_t
FUNC_3(void *VAR_0)
{
 sdp_session_p VAR_1 = (sdp_session_p) VAR_0;

 if (VAR_1 != ((void*)0)) {
  if (VAR_1->s >= 0)
   FUNC_0(VAR_1->s);

  if (VAR_1->req != ((void*)0))
   FUNC_1(VAR_1->req);
  if (VAR_1->rsp != ((void*)0))
   FUNC_1(VAR_1->rsp);

  FUNC_2(VAR_1, 0, sizeof(*VAR_1));
  FUNC_1(VAR_1);
 }

 return (0);
}
