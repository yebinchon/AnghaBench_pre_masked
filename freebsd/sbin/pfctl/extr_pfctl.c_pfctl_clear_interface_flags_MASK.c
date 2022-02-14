
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_iface {int pfiio_flags; } ;
typedef int pi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pfioc_iface*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ,struct pfioc_iface*) ;
 int VAR_4 ;

int
FUNC_4(int VAR_5, int VAR_6)
{
 struct pfioc_iface VAR_7;

 if ((VAR_6 & VAR_2) == 0) {
  FUNC_0(&VAR_7, sizeof(VAR_7));
  VAR_7.pfiio_flags = VAR_1;

  if (FUNC_3(VAR_5, VAR_0, &VAR_7))
   FUNC_1(1, "DIOCCLRIFFLAG");
  if ((VAR_6 & VAR_3) == 0)
   FUNC_2(VAR_4, "pf: interface flags reset\n");
 }
 return (0);
}
