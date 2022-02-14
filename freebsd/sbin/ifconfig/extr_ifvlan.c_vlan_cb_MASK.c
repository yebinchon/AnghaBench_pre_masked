
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vlr_tag; char* vlr_parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2, void *VAR_3)
{
 if ((VAR_1.vlr_tag != VAR_0) ^ (VAR_1.vlr_parent[0] != '\0'))
  FUNC_0(1, "both vlan and vlandev must be specified");
}
