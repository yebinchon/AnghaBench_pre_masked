
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_wwnn; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef int ocs_textbuf_t ;
struct TYPE_5__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*,unsigned long long) ;

__attribute__((used)) static void
FUNC_1(ocs_t *VAR_1, char *VAR_2, ocs_textbuf_t *VAR_3)
{
 ocs_xport_t *VAR_4 = VAR_1->xport;

 FUNC_0(VAR_3, VAR_0, "requested_wwnn", "0x%llx", (unsigned long long)VAR_4->req_wwnn);
}
