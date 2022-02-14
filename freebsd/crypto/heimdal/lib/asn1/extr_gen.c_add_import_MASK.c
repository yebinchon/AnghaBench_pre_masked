
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct import {char const* module; struct import* next; } ;


 struct import* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 struct import* VAR_1 ;

void
FUNC_2 (const char *VAR_2)
{
    struct import *VAR_3 = FUNC_0 (sizeof(*VAR_3));

    VAR_3->module = VAR_2;
    VAR_3->next = VAR_1;
    VAR_1 = VAR_3;

    FUNC_1 (VAR_0, "#include <%s_asn1.h>\n", VAR_2);
}
