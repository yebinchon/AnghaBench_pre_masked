
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {int ifv_pcp; int ifv_vid; int ifv_tag; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ifvlan *VAR_0)
{

       VAR_0->ifv_tag = FUNC_0(VAR_0->ifv_vid, VAR_0->ifv_pcp, 0);
}
