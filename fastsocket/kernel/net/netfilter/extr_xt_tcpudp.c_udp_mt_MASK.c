
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_udp {int invflags; int * dpts; int * spts; } ;
struct xt_match_param {scalar_t__ fragoff; int* hotdrop; int thoff; struct xt_udp* matchinfo; } ;
struct udphdr {int dest; int source; } ;
struct sk_buff {int dummy; } ;
typedef int _udph ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;
 struct udphdr* FUNC_3 (struct sk_buff const*,int ,int,struct udphdr*) ;

__attribute__((used)) static bool FUNC_4(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct udphdr *VAR_4;
 struct udphdr VAR_5;
 const struct xt_udp *VAR_6 = VAR_3->matchinfo;


 if (VAR_3->fragoff != 0)
  return 0;

 VAR_4 = FUNC_3(VAR_2, VAR_3->thoff, sizeof(VAR_5), &VAR_5);
 if (VAR_4 == ((void*)0)) {


  FUNC_0("Dropping evil UDP tinygram.\n");
  *VAR_3->hotdrop = 1;
  return 0;
 }

 return FUNC_2(VAR_6->spts[0], VAR_6->spts[1],
     FUNC_1(VAR_4->source),
     !!(VAR_6->invflags & VAR_1))
  && FUNC_2(VAR_6->dpts[0], VAR_6->dpts[1],
         FUNC_1(VAR_4->dest),
         !!(VAR_6->invflags & VAR_0));
}
