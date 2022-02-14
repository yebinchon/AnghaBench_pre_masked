
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {scalar_t__ fragoff; int* hotdrop; int thoff; struct ipt_ah* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_ah {int invflags; int * spis; } ;
struct ip_auth_hdr {int spi; } ;
typedef int _ahdr ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct ip_auth_hdr* FUNC_2 (struct sk_buff const*,int ,int,struct ip_auth_hdr*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_4(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 struct ip_auth_hdr VAR_3;
 const struct ip_auth_hdr *VAR_4;
 const struct ipt_ah *VAR_5 = VAR_2->matchinfo;


 if (VAR_2->fragoff != 0)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_2->thoff, sizeof(VAR_3), &VAR_3);
 if (VAR_4 == ((void*)0)) {



  FUNC_0("Dropping evil AH tinygram.\n");
  *VAR_2->hotdrop = 1;
  return 0;
 }

 return FUNC_3(VAR_5->spis[0], VAR_5->spis[1],
    FUNC_1(VAR_4->spi),
    !!(VAR_5->invflags & VAR_0));
}
