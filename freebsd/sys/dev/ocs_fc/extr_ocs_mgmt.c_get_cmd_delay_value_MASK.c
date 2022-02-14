
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_3__ {scalar_t__ delay_value_msec; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_1(ocs_t *VAR_1, char *VAR_2, ocs_textbuf_t *VAR_3)
{
 FUNC_0(VAR_3, VAR_0, "cmd_delay_value", "%ld", (unsigned long)VAR_1->delay_value_msec);
}
