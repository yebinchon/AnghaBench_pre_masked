
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_4__ {int count; int * item; } ;
struct TYPE_5__ {int options; TYPE_1__ fastStart; int h245Address; } ;
typedef TYPE_2__ Alerting_UUIE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
       enum ip_conntrack_info VAR_4,
       unsigned char **VAR_5, int VAR_6,
       Alerting_UUIE *VAR_7)
{
 int VAR_8;
 int VAR_9;

 FUNC_1("nf_ct_q931: Alerting\n");

 if (VAR_7->options & VAR_1) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      &VAR_7->h245Address);
  if (VAR_8 < 0)
   return -1;
 }

 if (VAR_7->options & VAR_0) {
  for (VAR_9 = 0; VAR_9 < VAR_7->fastStart.count; VAR_9++) {
   VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       &VAR_7->fastStart.item[VAR_9]);
   if (VAR_8 < 0)
    return -1;
  }
 }

 return 0;
}
