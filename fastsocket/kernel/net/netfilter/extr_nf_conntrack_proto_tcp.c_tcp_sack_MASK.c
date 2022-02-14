
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {int dummy; } ;
typedef int __u32 ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned char* FUNC_4 (struct sk_buff const*,unsigned int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_5(const struct sk_buff *VAR_6, unsigned int VAR_7,
                     const struct tcphdr *VAR_8, __u32 *VAR_9)
{
 unsigned char VAR_10[(15 * 4) - sizeof(struct tcphdr)];
 const unsigned char *VAR_11;
 int VAR_12 = (VAR_8->doff*4) - sizeof(struct tcphdr);
 __u32 VAR_13;

 if (!VAR_12)
  return;

 VAR_11 = FUNC_4(VAR_6, VAR_7 + sizeof(struct tcphdr),
     VAR_12, VAR_10);
 FUNC_0(VAR_11 == ((void*)0));


 if (VAR_12 == VAR_3*4
     && *(__be32 *)VAR_11 == FUNC_3((128 << 24)
           | (128 << 16)
           | (VAR_5 << 8)
           | VAR_2))
  return;

 while (VAR_12 > 0) {
  int VAR_14 = *VAR_11++;
  int VAR_15, VAR_16;

  switch (VAR_14) {
  case 129:
   return;
  case 128:
   VAR_12--;
   continue;
  default:
   VAR_15 = *VAR_11++;
   if (VAR_15 < 2)
    return;
   if (VAR_15 > VAR_12)
    break;

   if (VAR_14 == VAR_4
       && VAR_15 >= (VAR_0
       + VAR_1)
       && !((VAR_15 - VAR_0)
     % VAR_1)) {
    for (VAR_16 = 0;
         VAR_16 < (VAR_15 - VAR_0);
         VAR_16 += VAR_1) {
     VAR_13 = FUNC_2((__be32 *)(VAR_11+VAR_16)+1);

     if (FUNC_1(VAR_13, *VAR_9))
      *VAR_9 = VAR_13;
    }
    return;
   }
   VAR_11 += VAR_15 - 2;
   VAR_12 -= VAR_15;
  }
 }
}
