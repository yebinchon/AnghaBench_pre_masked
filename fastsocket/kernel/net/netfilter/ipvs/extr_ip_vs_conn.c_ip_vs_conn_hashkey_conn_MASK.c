
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn_param {int pe_data_len; int pe_data; scalar_t__ pe; } ;
struct ip_vs_conn {int pe_data_len; int pe_data; scalar_t__ pe; int cport; int caddr; int protocol; int af; } ;


 int FUNC_0 (int ,int ,int *,int ,int *,int ,struct ip_vs_conn_param*) ;
 unsigned int FUNC_1 (struct ip_vs_conn_param*,int) ;

__attribute__((used)) static unsigned int FUNC_2(const struct ip_vs_conn *VAR_0)
{
 struct ip_vs_conn_param VAR_1;

 FUNC_0(VAR_0->af, VAR_0->protocol, &VAR_0->caddr, VAR_0->cport,
         ((void*)0), 0, &VAR_1);

 if (VAR_0->pe) {
  VAR_1.pe = VAR_0->pe;
  VAR_1.pe_data = VAR_0->pe_data;
  VAR_1.pe_data_len = VAR_0->pe_data_len;
 }

 return FUNC_1(&VAR_1, 0);
}
