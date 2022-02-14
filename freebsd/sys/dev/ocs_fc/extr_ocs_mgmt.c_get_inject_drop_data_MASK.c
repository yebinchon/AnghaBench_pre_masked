
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_3__ {scalar_t__ err_injection; } ;
typedef TYPE_1__ ocs_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 FUNC_0(VAR_4, VAR_1, "inject_drop_data", "%d",
   (VAR_2->err_injection == VAR_0 ? 1:0));
}
