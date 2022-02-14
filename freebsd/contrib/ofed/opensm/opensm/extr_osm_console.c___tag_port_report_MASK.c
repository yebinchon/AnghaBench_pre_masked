
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {struct TYPE_4__* next; int print_desc; int port_num; int node_guid; } ;
typedef TYPE_1__ port_report_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(port_report_t ** VAR_1, uint64_t VAR_2,
    uint8_t VAR_3, char *VAR_4)
{
 port_report_t *VAR_5 = FUNC_0(sizeof(*VAR_5));
 if (!VAR_5)
  return;

 VAR_5->node_guid = VAR_2;
 VAR_5->port_num = VAR_3;
 FUNC_1(VAR_5->print_desc, VAR_4, VAR_0 + 1);
 VAR_5->next = ((void*)0);
 if (*VAR_1) {
  VAR_5->next = *VAR_1;
  *VAR_1 = VAR_5;
 } else
  *VAR_1 = VAR_5;
}
