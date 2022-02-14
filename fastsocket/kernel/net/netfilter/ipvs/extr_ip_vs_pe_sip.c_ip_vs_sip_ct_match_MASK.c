
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn_param {scalar_t__ af; scalar_t__ protocol; scalar_t__ vport; scalar_t__ pe_data_len; int vaddr; int pe_data; int caddr; } ;
struct ip_vs_conn {scalar_t__ af; scalar_t__ vport; int flags; scalar_t__ protocol; scalar_t__ pe_data_len; scalar_t__ pe_data; int vaddr; int caddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static bool FUNC_7(const struct ip_vs_conn_param *VAR_3,
      struct ip_vs_conn *VAR_4)

{
 bool VAR_5 = 0;

 if (VAR_4->af == VAR_3->af &&
     FUNC_3(VAR_3->af, VAR_3->caddr, &VAR_4->caddr) &&


     FUNC_3(VAR_3->protocol == VAR_1 ? VAR_0 : VAR_3->af,
        VAR_3->vaddr, &VAR_4->vaddr) &&
     VAR_4->vport == VAR_3->vport &&
     VAR_4->flags & VAR_2 &&
     VAR_4->protocol == VAR_3->protocol &&
     VAR_4->pe_data && VAR_4->pe_data_len == VAR_3->pe_data_len &&
     !FUNC_5(VAR_4->pe_data, VAR_3->pe_data, VAR_3->pe_data_len))
  VAR_5 = 1;

 FUNC_1(9, "SIP template match %s %s->%s:%d %s\n",
        FUNC_4(VAR_3->protocol),
        FUNC_2(VAR_3->pe_data, VAR_3->pe_data_len),
        FUNC_0(VAR_3->af, VAR_3->vaddr), FUNC_6(VAR_3->vport),
        VAR_5 ? "hit" : "not hit");

 return VAR_5;
}
