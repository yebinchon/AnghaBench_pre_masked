
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ conn_type; int lnk_sta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct ntb_softc *VAR_2)
{

 if (VAR_2->conn_type == VAR_0)
  return (1);
 return ((VAR_2->lnk_sta & VAR_1) != 0);
}
