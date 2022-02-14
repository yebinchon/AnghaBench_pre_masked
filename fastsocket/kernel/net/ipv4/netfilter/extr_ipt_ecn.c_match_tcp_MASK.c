
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int ece; int cwr; } ;
struct sk_buff {int dummy; } ;
struct ipt_ecn_info {int operation; int invert; } ;
typedef int _tcph ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff const*) ;
 struct tcphdr* FUNC_1 (struct sk_buff const*,int ,int,struct tcphdr*) ;

__attribute__((used)) static inline bool FUNC_2(const struct sk_buff *VAR_2,
        const struct ipt_ecn_info *VAR_3,
        bool *VAR_4)
{
 struct tcphdr VAR_5;
 const struct tcphdr *VAR_6;




 VAR_6 = FUNC_1(VAR_2, FUNC_0(VAR_2), sizeof(VAR_5), &VAR_5);
 if (VAR_6 == ((void*)0)) {
  *VAR_4 = 0;
  return 0;
 }

 if (VAR_3->operation & VAR_1) {
  if (VAR_3->invert & VAR_1) {
   if (VAR_6->ece == 1)
    return 0;
  } else {
   if (VAR_6->ece == 0)
    return 0;
  }
 }

 if (VAR_3->operation & VAR_0) {
  if (VAR_3->invert & VAR_0) {
   if (VAR_6->cwr == 1)
    return 0;
  } else {
   if (VAR_6->cwr == 0)
    return 0;
  }
 }

 return 1;
}
