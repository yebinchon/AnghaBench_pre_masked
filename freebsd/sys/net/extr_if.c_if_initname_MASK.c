
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {char const* if_dname; int if_dunit; int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,char const*,int) ;
 int FUNC_1 (int ,char const*,int ) ;

void
FUNC_2(struct ifnet *VAR_2, const char *VAR_3, int VAR_4)
{
 VAR_2->if_dname = VAR_3;
 VAR_2->if_dunit = VAR_4;
 if (VAR_4 != VAR_1)
  FUNC_0(VAR_2->if_xname, VAR_0, "%s%d", VAR_3, VAR_4);
 else
  FUNC_1(VAR_2->if_xname, VAR_3, VAR_0);
}
