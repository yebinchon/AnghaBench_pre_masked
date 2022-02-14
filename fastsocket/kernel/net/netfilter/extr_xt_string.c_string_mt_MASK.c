
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int invert; } ;
struct TYPE_8__ {TYPE_3__ v1; TYPE_2__ v0; } ;
struct xt_string_info {int config; int to_offset; int from_offset; TYPE_4__ u; } ;
struct xt_match_param {TYPE_1__* match; struct xt_string_info* matchinfo; } ;
struct ts_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ts_state*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,struct ts_state*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct xt_string_info *VAR_4 = VAR_3->matchinfo;
 struct ts_state VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(struct ts_state));

 VAR_6 = (VAR_3->match->revision == 0 ? VAR_4->u.v0.invert :
        VAR_4->u.v1.flags & VAR_1);

 return (FUNC_1((struct sk_buff *)VAR_2, VAR_4->from_offset,
        VAR_4->to_offset, VAR_4->config, &VAR_5)
        != VAR_0) ^ VAR_6;
}
