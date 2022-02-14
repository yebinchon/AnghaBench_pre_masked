
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * xp; } ;
typedef TYPE_1__ apr_xml_parser ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_1)
{
    apr_xml_parser *VAR_2 = VAR_1;

    FUNC_0(VAR_2->xp);
    VAR_2->xp = ((void*)0);

    return VAR_0;
}
