
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {struct ip6_flowlabel* opt; int fl_net; } ;


 int FUNC_0 (struct ip6_flowlabel*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ip6_flowlabel *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->fl_net);
  FUNC_0(VAR_0->opt);
 }
 FUNC_0(VAR_0);
}
