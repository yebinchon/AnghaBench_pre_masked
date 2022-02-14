
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct cfiscsi_target {int ct_state; } ;


 int FUNC_0 (struct sbuf*,char*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct sbuf *VAR_1)
{
 struct cfiscsi_target *VAR_2 = (struct cfiscsi_target *)VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "\t<cfiscsi_state>%d</cfiscsi_state>\n",
     VAR_2->ct_state);
 return (VAR_3);
}
