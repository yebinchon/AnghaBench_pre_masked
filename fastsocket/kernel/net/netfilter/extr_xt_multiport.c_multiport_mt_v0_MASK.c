
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_multiport {int count; int flags; int ports; } ;
struct xt_match_param {scalar_t__ fragoff; int* hotdrop; int thoff; struct xt_multiport* matchinfo; } ;
struct sk_buff {int dummy; } ;
typedef int _ports ;
typedef int __be16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int * FUNC_3 (struct sk_buff const*,int ,int,int *) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 const __be16 *VAR_2;
 __be16 VAR_3[2];
 const struct xt_multiport *VAR_4 = VAR_1->matchinfo;

 if (VAR_1->fragoff != 0)
  return 0;

 VAR_2 = FUNC_3(VAR_0, VAR_1->thoff, sizeof(VAR_3), VAR_3);
 if (VAR_2 == ((void*)0)) {



  FUNC_0("xt_multiport: Dropping evil offset=0 tinygram.\n");
  *VAR_1->hotdrop = 1;
  return 0;
 }

 return FUNC_2(VAR_4->ports, VAR_4->flags,
        VAR_4->count, FUNC_1(VAR_2[0]), FUNC_1(VAR_2[1]));
}
