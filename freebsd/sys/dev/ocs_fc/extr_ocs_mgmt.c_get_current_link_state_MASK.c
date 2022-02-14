
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ value; } ;
typedef TYPE_1__ ocs_xport_stats_t ;
typedef int ocs_textbuf_t ;
struct TYPE_6__ {int xport; } ;
typedef TYPE_2__ ocs_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ocs_t *VAR_3, char *VAR_4, ocs_textbuf_t *VAR_5)
{
 ocs_xport_stats_t VAR_6;

 if (FUNC_1(VAR_3->xport, VAR_2, &VAR_6) == 0) {
  if (VAR_6.value == VAR_1) {
   FUNC_0(VAR_5, VAR_0, "current_link_state", "online");
  } else {
   FUNC_0(VAR_5, VAR_0, "current_link_state", "offline");
  }
 }
}
