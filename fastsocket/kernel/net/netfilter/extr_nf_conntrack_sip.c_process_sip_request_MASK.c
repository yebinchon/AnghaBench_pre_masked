
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sip_handler {int (* request ) (struct sk_buff*,char const**,unsigned int*,unsigned int) ;unsigned int len; int method; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int FUNC_0 (struct sip_handler*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;
 unsigned int FUNC_3 (char const*,int *,int) ;
 struct sip_handler* VAR_3 ;
 scalar_t__ FUNC_4 (char const*,int ,unsigned int) ;
 int FUNC_5 (struct sk_buff*,char const**,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4,
          const char **VAR_5, unsigned int *VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_2(VAR_4, &VAR_7);
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  const struct sip_handler *VAR_13;

  VAR_13 = &VAR_3[VAR_12];
  if (VAR_13->request == ((void*)0))
   continue;
  if (*VAR_6 < VAR_13->len ||
      FUNC_4(*VAR_5, VAR_13->method, VAR_13->len))
   continue;

  if (FUNC_1(VAR_8, *VAR_5, 0, *VAR_6, VAR_2,
          &VAR_9, &VAR_10) <= 0)
   return VAR_1;
  VAR_11 = FUNC_3(*VAR_5 + VAR_9, ((void*)0), 10);
  if (!VAR_11)
   return VAR_1;

  return VAR_13->request(VAR_4, VAR_5, VAR_6, VAR_11);
 }
 return VAR_0;
}
