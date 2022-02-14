
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_scp {int numdat_rcv; int numoth_rcv; unsigned short ackxmt_dat; unsigned short ackxmt_oth; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 struct dn_scp* FUNC_1 (struct sock*) ;
 void* FUNC_2 (unsigned short) ;
 scalar_t__ FUNC_3 (struct dn_scp*,struct sk_buff*,unsigned char,int) ;

__attribute__((used)) static __le16 *FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1, unsigned char VAR_2, int VAR_3, int VAR_4)
{
 struct dn_scp *VAR_5 = FUNC_1(VAR_0);
 unsigned short VAR_6 = VAR_5->numdat_rcv & 0x0FFF;
 unsigned short VAR_7 = VAR_5->numoth_rcv & 0x0FFF;
 __le16 *VAR_8;

 FUNC_0(VAR_3 < 9);

 VAR_5->ackxmt_dat = VAR_6;
 VAR_5->ackxmt_oth = VAR_7;
 VAR_6 |= 0x8000;
 VAR_7 |= 0x8000;


 if (VAR_4) {
  unsigned short VAR_9 = VAR_6;
  VAR_6 = VAR_7;
  VAR_7 = VAR_9;
 }


 VAR_7 |= 0x2000;

 VAR_8 = (__le16 *)FUNC_3(VAR_5, VAR_1, VAR_2, VAR_3);

 *VAR_8++ = FUNC_2(VAR_6);
 *VAR_8++ = FUNC_2(VAR_7);

 return VAR_8;
}
