
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbreq*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 struct ifbreq VAR_6;

 FUNC_2(VAR_6.ifbr_ifsname, VAR_3, sizeof(VAR_6.ifbr_ifsname));

 if (FUNC_0(VAR_2, VAR_0, &VAR_6, sizeof(VAR_6), 0) < 0)
  FUNC_1(1, "unable to get bridge flags");

 if (VAR_5)
  VAR_6.ifbr_ifsflags |= VAR_4;
 else
  VAR_6.ifbr_ifsflags &= ~VAR_4;

 if (FUNC_0(VAR_2, VAR_1, &VAR_6, sizeof(VAR_6), 1) < 0)
  FUNC_1(1, "unable to set bridge flags");
}
