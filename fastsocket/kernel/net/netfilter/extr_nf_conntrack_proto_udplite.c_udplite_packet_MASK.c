
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_conn {int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 int FUNC_1 (struct nf_conn*,int,struct sk_buff const*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nf_conn *VAR_6,
     const struct sk_buff *VAR_7,
     unsigned int VAR_8,
     enum ip_conntrack_info VAR_9,
     u_int8_t VAR_10,
     unsigned int VAR_11)
{


 if (FUNC_3(VAR_2, &VAR_6->status)) {
  FUNC_1(VAR_6, VAR_9, VAR_7,
       VAR_5);

  if (!FUNC_2(VAR_1, &VAR_6->status))
   FUNC_0(VAR_0, VAR_6);
 } else
  FUNC_1(VAR_6, VAR_9, VAR_7, VAR_4);

 return VAR_3;
}
