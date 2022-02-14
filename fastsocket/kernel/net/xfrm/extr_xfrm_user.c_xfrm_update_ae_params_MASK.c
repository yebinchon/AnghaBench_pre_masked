
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_time; int add_time; int packets; int bytes; } ;
struct xfrm_state {void* replay_maxdiff; void* replay_maxage; TYPE_1__ curlft; int preplay; int replay; } ;
struct xfrm_replay_state {int dummy; } ;
struct xfrm_lifetime_cur {int use_time; int add_time; int packets; int bytes; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,struct xfrm_replay_state*,int) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static void FUNC_3(struct xfrm_state *VAR_4, struct nlattr **VAR_5)
{
 struct nlattr *VAR_6 = VAR_5[VAR_3];
 struct nlattr *VAR_7 = VAR_5[VAR_1];
 struct nlattr *VAR_8 = VAR_5[VAR_0];
 struct nlattr *VAR_9 = VAR_5[VAR_2];

 if (VAR_6) {
  struct xfrm_replay_state *VAR_10;
  VAR_10 = FUNC_1(VAR_6);
  FUNC_0(&VAR_4->replay, VAR_10, sizeof(*VAR_10));
  FUNC_0(&VAR_4->preplay, VAR_10, sizeof(*VAR_10));
 }

 if (VAR_7) {
  struct xfrm_lifetime_cur *VAR_11;
  VAR_11 = FUNC_1(VAR_7);
  VAR_4->curlft.bytes = VAR_11->bytes;
  VAR_4->curlft.packets = VAR_11->packets;
  VAR_4->curlft.add_time = VAR_11->add_time;
  VAR_4->curlft.use_time = VAR_11->use_time;
 }

 if (VAR_8)
  VAR_4->replay_maxage = FUNC_2(VAR_8);

 if (VAR_9)
  VAR_4->replay_maxdiff = FUNC_2(VAR_9);
}
