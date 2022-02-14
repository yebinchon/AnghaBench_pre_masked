
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ sldns_lookup_table ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int VAR_0 ;

const char* FUNC_2(int VAR_1)
{
 sldns_lookup_table *VAR_2;
 VAR_2 = FUNC_1(VAR_0, FUNC_0(VAR_1));
 return VAR_2?VAR_2->name:"unknown error";
}
