
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_match_param {struct xt_mac_info* matchinfo; } ;
struct xt_mac_info {int invert; int srcaddr; } ;
struct sk_buff {scalar_t__ head; scalar_t__ data; } ;
struct TYPE_2__ {int h_source; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
    const struct xt_mac_info *VAR_3 = VAR_2->matchinfo;


    return FUNC_2(VAR_1) >= VAR_1->head &&
    FUNC_2(VAR_1) + VAR_0 <= VAR_1->data

    && ((!FUNC_0(FUNC_1(VAR_1)->h_source, VAR_3->srcaddr))
  ^ VAR_3->invert);
}
