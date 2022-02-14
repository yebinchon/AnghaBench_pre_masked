
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrv_descript {int nd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_0(struct nfsrv_descript *VAR_7)
{

 if ((VAR_7->nd_flag & (VAR_4 | VAR_0)) == VAR_0)
  return (0);
 if ((VAR_7->nd_flag & (VAR_5 | VAR_2)) ==
     (VAR_5 | VAR_2))
  return (0);
 if ((VAR_7->nd_flag & (VAR_6 | VAR_3)) ==
     (VAR_6 | VAR_3))
  return (0);
 if ((VAR_7->nd_flag & (VAR_4 | VAR_5 | VAR_6 |
      VAR_1)) == (VAR_4 | VAR_1))
  return (0);
 return (1);
}
