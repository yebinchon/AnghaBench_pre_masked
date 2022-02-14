
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
struct xt_target_param {struct xt_connmark_tginfo1* targinfo; } ;
struct xt_connmark_tginfo1 {int mode; int ctmask; int ctmark; int nfmask; } ;
struct sk_buff {int mark; } ;
struct nf_conn {int mark; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct xt_connmark_tginfo1 *VAR_4 = VAR_3->targinfo;
 enum ip_conntrack_info VAR_5;
 struct nf_conn *VAR_6;
 u_int32_t VAR_7;

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6 == ((void*)0))
  return VAR_1;

 switch (VAR_4->mode) {
 case 128:
  VAR_7 = (VAR_6->mark & ~VAR_4->ctmask) ^ VAR_4->ctmark;
  if (VAR_6->mark != VAR_7) {
   VAR_6->mark = VAR_7;
   FUNC_0(VAR_0, VAR_6);
  }
  break;
 case 129:
  VAR_7 = (VAR_6->mark & ~VAR_4->ctmask) ^
            (VAR_2->mark & VAR_4->nfmask);
  if (VAR_6->mark != VAR_7) {
   VAR_6->mark = VAR_7;
   FUNC_0(VAR_0, VAR_6);
  }
  break;
 case 130:
  VAR_7 = (VAR_2->mark & ~VAR_4->nfmask) ^
            (VAR_6->mark & VAR_4->ctmask);
  VAR_2->mark = VAR_7;
  break;
 }

 return VAR_1;
}
