
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {scalar_t__ fragoff; int* hotdrop; int thoff; struct ipt_icmp* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_icmp {int invflags; int * code; int type; } ;
struct icmphdr {int code; int type; } ;
typedef int _icmph ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 struct icmphdr* FUNC_2 (struct sk_buff const*,int ,int,struct icmphdr*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct icmphdr *VAR_3;
 struct icmphdr VAR_4;
 const struct ipt_icmp *VAR_5 = VAR_2->matchinfo;


 if (VAR_2->fragoff != 0)
  return 0;

 VAR_3 = FUNC_2(VAR_1, VAR_2->thoff, sizeof(VAR_4), &VAR_4);
 if (VAR_3 == ((void*)0)) {



  FUNC_0("Dropping evil ICMP tinygram.\n");
  *VAR_2->hotdrop = 1;
  return 0;
 }

 return FUNC_1(VAR_5->type,
        VAR_5->code[0],
        VAR_5->code[1],
        VAR_3->type, VAR_3->code,
        !!(VAR_5->invflags&VAR_0));
}
