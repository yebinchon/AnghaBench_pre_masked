
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_conf_opt {int type; int len; scalar_t__ val; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (char*,int,int,unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,void*,int) ;

__attribute__((used)) static void FUNC_4(void **VAR_1, u8 VAR_2, u8 VAR_3, unsigned long VAR_4)
{
 struct l2cap_conf_opt *VAR_5 = *VAR_1;

 FUNC_0("type 0x%2.2x len %d val 0x%lx", VAR_2, VAR_3, VAR_4);

 VAR_5->type = VAR_2;
 VAR_5->len = VAR_3;

 switch (VAR_3) {
 case 1:
  *((u8 *) VAR_5->val) = VAR_4;
  break;

 case 2:
  *((__le16 *) VAR_5->val) = FUNC_1(VAR_4);
  break;

 case 4:
  *((__le32 *) VAR_5->val) = FUNC_2(VAR_4);
  break;

 default:
  FUNC_3(VAR_5->val, (void *) VAR_4, VAR_3);
  break;
 }

 *VAR_1 += VAR_0 + VAR_3;
}
