
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_3__ {int options; int mediaControlChannel; int mediaChannel; } ;
typedef TYPE_1__ H2250LogicalChannelParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
    struct nf_conn *VAR_3,
    enum ip_conntrack_info VAR_4,
    unsigned char **VAR_5, int VAR_6,
    H2250LogicalChannelParameters *VAR_7)
{
 int VAR_8;

 if (VAR_7->options & VAR_0) {

  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          &VAR_7->mediaChannel);
  if (VAR_8 < 0)
   return -1;
 }

 if (VAR_7->
     options & VAR_1) {

  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          &VAR_7->mediaControlChannel);
  if (VAR_8 < 0)
   return -1;
 }

 return 0;
}
