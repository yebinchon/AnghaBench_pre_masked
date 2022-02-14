
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cur_elem; scalar_t__ error; } ;
typedef TYPE_2__ apr_xml_parser ;
struct TYPE_3__ {struct TYPE_3__* parent; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const char *VAR_1)
{
    apr_xml_parser *VAR_2 = VAR_0;


    if (VAR_2->error)
 return;


    VAR_2->cur_elem = VAR_2->cur_elem->parent;
}
