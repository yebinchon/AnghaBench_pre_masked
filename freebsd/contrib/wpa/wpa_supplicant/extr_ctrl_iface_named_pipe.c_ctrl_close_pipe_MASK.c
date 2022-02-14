
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hEvent; } ;
struct wpa_ctrl_dst {scalar_t__ pipe; struct wpa_ctrl_dst* rsp_buf; TYPE_3__* prev; TYPE_2__* next; TYPE_1__* priv; TYPE_4__ overlap; } ;
struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_6__ {TYPE_3__* prev; } ;
struct TYPE_5__ {TYPE_2__* ctrl_dst; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct wpa_ctrl_dst*) ;
 int FUNC_3 (int ,char*,struct wpa_ctrl_dst*) ;

__attribute__((used)) static void FUNC_4(struct wpa_ctrl_dst *VAR_2)
{
 FUNC_3(VAR_1, "CTRL: close pipe %p", VAR_2);

 if (VAR_2->overlap.hEvent) {
  FUNC_1(VAR_2->overlap.hEvent,
           sizeof(VAR_2->overlap.hEvent));
  FUNC_0(VAR_2->overlap.hEvent);
 }

 if (VAR_2->pipe != VAR_0) {






  FUNC_0(VAR_2->pipe);
 }

 if (VAR_2->prev)
  VAR_2->prev->next = VAR_2->next;
 else
  VAR_2->priv->ctrl_dst = VAR_2->next;
 if (VAR_2->next)
  VAR_2->next->prev = VAR_2->prev;

 FUNC_2(VAR_2->rsp_buf);
 FUNC_2(VAR_2);
}
