
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xt_sctp_info {scalar_t__* spts; scalar_t__* dpts; int invflags; int flags; } ;
struct xt_match_param {scalar_t__ fragoff; int* hotdrop; scalar_t__ thoff; struct xt_sctp_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dest; int source; } ;
typedef TYPE_1__ sctp_sctphdr_t ;
typedef int _sh ;


 scalar_t__ FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sk_buff const*,scalar_t__,struct xt_sctp_info const*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff const*,scalar_t__,int,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5(const struct sk_buff *VAR_3, const struct xt_match_param *VAR_4)
{
 const struct xt_sctp_info *VAR_5 = VAR_4->matchinfo;
 const sctp_sctphdr_t *VAR_6;
 sctp_sctphdr_t VAR_7;

 if (VAR_4->fragoff != 0) {
  FUNC_1("Dropping non-first fragment.. FIXME\n");
  return 0;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4->thoff, sizeof(VAR_7), &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("Dropping evil TCP offset=0 tinygram.\n");
  *VAR_4->hotdrop = 1;
  return 0;
 }
 FUNC_1("spt: %d\tdpt: %d\n", FUNC_3(VAR_6->source), FUNC_3(VAR_6->dest));

 return FUNC_0(FUNC_3(VAR_6->source) >= VAR_5->spts[0]
   && FUNC_3(VAR_6->source) <= VAR_5->spts[1],
   VAR_2, VAR_5->flags, VAR_5->invflags)
  && FUNC_0(FUNC_3(VAR_6->dest) >= VAR_5->dpts[0]
   && FUNC_3(VAR_6->dest) <= VAR_5->dpts[1],
   VAR_1, VAR_5->flags, VAR_5->invflags)
  && FUNC_0(FUNC_2(VAR_3, VAR_4->thoff + sizeof(sctp_sctphdr_t),
     VAR_5, VAR_4->hotdrop),
      VAR_0, VAR_5->flags, VAR_5->invflags);
}
