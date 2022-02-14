
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_portid {int lpi_portno; int lpi_prio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int,int) ;

const char *
FUNC_2(const struct lacp_portid *VAR_0, char *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_1, VAR_2, "%04X,%04X",
     FUNC_0(VAR_0->lpi_prio),
     FUNC_0(VAR_0->lpi_portno));

 return (VAR_1);
}
