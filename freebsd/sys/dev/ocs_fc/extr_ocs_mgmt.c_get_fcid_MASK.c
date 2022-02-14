
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_7__ {TYPE_2__* domain; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_6__ {TYPE_1__* sport; scalar_t__ attached; } ;
struct TYPE_5__ {int fc_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(ocs_t *VAR_1, char *VAR_2, ocs_textbuf_t *VAR_3)
{

 if (VAR_1->domain && VAR_1->domain->attached) {
  FUNC_0(VAR_3, VAR_0, "fc_id", "0x%06x",
      VAR_1->domain->sport->fc_id);
 } else {
  FUNC_0(VAR_3, VAR_0, "fc_id", "UNKNOWN");
 }

}
