
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,int ,unsigned int,int ,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,char*,int) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (char*,char*,int) ;
 unsigned int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3,
         const char **VAR_4, unsigned int *VAR_5)
{
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7 = FUNC_3(VAR_3, &VAR_6);
 unsigned int VAR_8, VAR_9;
 char VAR_10[sizeof("65536")];
 int VAR_11, VAR_12;


 if (FUNC_1(VAR_7, *VAR_4, 0, *VAR_5,
      VAR_1, VAR_0,
      &VAR_8, &VAR_9) <= 0)
  return 0;
 VAR_12 = *VAR_5 - VAR_8 + FUNC_5("v=");


 if (FUNC_0(VAR_7, *VAR_4, 0, *VAR_5, VAR_2,
         &VAR_8, &VAR_9) <= 0)
  return 0;

 VAR_11 = FUNC_4(VAR_10, "%u", VAR_12);
 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9,
        VAR_10, VAR_11);
}
