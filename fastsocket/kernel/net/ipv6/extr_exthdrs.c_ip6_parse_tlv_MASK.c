
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlvtype_proc {unsigned char const type; int (* func ) (struct sk_buff*,int) ;} ;
struct sk_buff {int dummy; } ;




 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct tlvtype_proc *VAR_0, struct sk_buff *VAR_1)
{
 struct tlvtype_proc *VAR_2;
 const unsigned char *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = (FUNC_5(VAR_1)[1] + 1) << 3;

 if (FUNC_6(VAR_1) + VAR_5 > FUNC_2(VAR_1))
  goto bad;

 VAR_4 += 2;
 VAR_5 -= 2;

 while (VAR_5 > 0) {
  int VAR_6 = VAR_3[VAR_4 + 1] + 2;

  switch (VAR_3[VAR_4]) {
  case 129:
   VAR_6 = 1;
   break;

  case 128:
   break;

  default:
   if (VAR_6 > VAR_5)
    goto bad;
   for (VAR_2=VAR_0; VAR_2->type >= 0; VAR_2++) {
    if (VAR_2->type == VAR_3[VAR_4]) {



     if (VAR_2->func(VAR_1, VAR_4) == 0)
      return 0;
     break;
    }
   }
   if (VAR_2->type < 0) {
    if (FUNC_0(VAR_1, VAR_4) == 0)
     return 0;
   }
   break;
  }
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
 }
 if (VAR_5 == 0)
  return 1;
bad:
 FUNC_1(VAR_1);
 return 0;
}
