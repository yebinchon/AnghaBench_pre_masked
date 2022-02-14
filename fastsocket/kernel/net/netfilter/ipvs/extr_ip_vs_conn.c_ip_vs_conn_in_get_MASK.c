
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ip_vs_conn_param {scalar_t__ vport; int vaddr; int af; scalar_t__ cport; int caddr; int protocol; } const ip_vs_conn_param ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,int ,char*) ;
 struct ip_vs_conn* FUNC_2 (struct ip_vs_conn_param const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

struct ip_vs_conn *FUNC_6(const struct ip_vs_conn_param *VAR_1)
{
 struct ip_vs_conn *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2 && FUNC_3(&VAR_0)) {
  struct ip_vs_conn_param VAR_3 = *VAR_1;
  VAR_3.cport = 0;
  VAR_2 = FUNC_2(&VAR_3);
 }

 FUNC_1(9, "lookup/in %s %s:%d->%s:%d %s\n",
        FUNC_4(VAR_1->protocol),
        FUNC_0(VAR_1->af, VAR_1->caddr), FUNC_5(VAR_1->cport),
        FUNC_0(VAR_1->af, VAR_1->vaddr), FUNC_5(VAR_1->vport),
        VAR_2 ? "hit" : "not hit");

 return VAR_2;
}
