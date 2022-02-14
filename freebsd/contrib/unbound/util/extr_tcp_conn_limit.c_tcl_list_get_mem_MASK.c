
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int region; } ;


 size_t FUNC_0 (int ) ;

size_t
FUNC_1(struct tcl_list* VAR_0)
{
 if(!VAR_0) return 0;
 return sizeof(*VAR_0) + FUNC_0(VAR_0->region);
}
