
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; int if_pcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,char*,char*) ;
 int FUNC_1 (struct ifnet*,int,int ,int *,int) ;
 scalar_t__ VAR_2 ;

int
FUNC_2(struct ifnet *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_3->if_flags;

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_0,
      &VAR_3->if_pcount, VAR_4);

 if (VAR_5 == 0 && ((VAR_3->if_flags ^ VAR_6) & VAR_1) &&
            VAR_2)
  FUNC_0(VAR_3, "promiscuous mode %s\n",
      (VAR_3->if_flags & VAR_1) ? "enabled" : "disabled");
 return (VAR_5);
}
