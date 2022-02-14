
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int evtchn; int * intr_handle; } ;
struct evtchn_send {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_send*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct xencons_priv *VAR_1)
{





 if (FUNC_1(VAR_1->intr_handle != ((void*)0)))
  FUNC_2(VAR_1->intr_handle);
 else {
  struct evtchn_send VAR_2 = {
   .port = VAR_1->evtchn
  };

  FUNC_0(VAR_0, &VAR_2);
 }
}
