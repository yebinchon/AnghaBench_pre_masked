
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {char* data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int FUNC_0 (struct sk_buff*) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,char const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_0,
      const char **VAR_1, unsigned int *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      const char *VAR_5, unsigned int VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_1(VAR_0, &VAR_7);

 if (!FUNC_2(VAR_0, VAR_8, VAR_7, VAR_3, VAR_4,
          VAR_5, VAR_6))
  return 0;


 *VAR_1 = VAR_0->data + FUNC_0(VAR_0) + sizeof(struct udphdr);
 *VAR_2 += VAR_6 - VAR_4;
 return 1;
}
