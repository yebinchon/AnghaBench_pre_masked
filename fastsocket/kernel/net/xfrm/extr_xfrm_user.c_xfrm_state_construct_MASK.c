
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xfrm_usersa_info {int seq; } ;
struct TYPE_10__ {int state; int seq; } ;
struct TYPE_9__ {scalar_t__ oseq; scalar_t__ seq; } ;
struct TYPE_8__ {scalar_t__ oseq; scalar_t__ seq; scalar_t__ bitmap; } ;
struct TYPE_6__ {int calgo; int ealgo; int aalgo; } ;
struct xfrm_state {int replay_maxage; TYPE_5__ km; scalar_t__ replay_maxdiff; TYPE_4__ replay; TYPE_3__ preplay; int mark; int * coaddr; int * encap; TYPE_1__ props; int calg; int ealg; int aalg; int aead; } ;
struct nlattr {int dummy; } ;
struct TYPE_7__ {int sysctl_aevent_etime; scalar_t__ sysctl_aevent_rseqth; } ;
struct net {TYPE_2__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int *,struct nlattr*) ;
 int FUNC_1 (int *,int *,struct nlattr*) ;
 int FUNC_2 (int *,int *,struct nlattr*) ;
 int FUNC_3 (int *,int *,int ,struct nlattr*) ;
 int FUNC_4 (struct xfrm_state*,struct xfrm_usersa_info*) ;
 void* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct xfrm_state*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct xfrm_state*) ;
 int FUNC_9 (struct nlattr**,int *) ;
 struct xfrm_state* FUNC_10 (struct net*) ;
 int FUNC_11 (struct xfrm_state*) ;
 int FUNC_12 (struct xfrm_state*,struct nlattr**) ;

__attribute__((used)) static struct xfrm_state *FUNC_13(struct net *VAR_15,
            struct xfrm_usersa_info *VAR_16,
            struct nlattr **VAR_17,
            int *VAR_18)
{
 struct xfrm_state *VAR_19 = FUNC_10(VAR_15);
 int VAR_20 = -VAR_0;

 if (!VAR_19)
  goto error_no_put;

 FUNC_4(VAR_19, VAR_16);

 if ((VAR_20 = FUNC_0(&VAR_19->aead, &VAR_19->props.ealgo,
          VAR_17[VAR_3])))
  goto error;
 if ((VAR_20 = FUNC_2(&VAR_19->aalg, &VAR_19->props.aalgo,
         VAR_17[VAR_5])))
  goto error;
 if (!VAR_19->props.aalgo) {
  if ((VAR_20 = FUNC_1(&VAR_19->aalg, &VAR_19->props.aalgo,
           VAR_17[VAR_4])))
   goto error;
 }
 if ((VAR_20 = FUNC_3(&VAR_19->ealg, &VAR_19->props.ealgo,
       VAR_14,
       VAR_17[VAR_7])))
  goto error;
 if ((VAR_20 = FUNC_3(&VAR_19->calg, &VAR_19->props.calgo,
       VAR_13,
       VAR_17[VAR_6])))
  goto error;

 if (VAR_17[VAR_9]) {
  VAR_19->encap = FUNC_5(FUNC_6(VAR_17[VAR_9]),
       sizeof(*VAR_19->encap), VAR_1);
  if (VAR_19->encap == ((void*)0))
   goto error;
 }

 if (VAR_17[VAR_8]) {
  VAR_19->coaddr = FUNC_5(FUNC_6(VAR_17[VAR_8]),
        sizeof(*VAR_19->coaddr), VAR_1);
  if (VAR_19->coaddr == ((void*)0))
   goto error;
 }

 FUNC_9(VAR_17, &VAR_19->mark);

 VAR_20 = FUNC_8(VAR_19);
 if (VAR_20)
  goto error;

 if (VAR_17[VAR_10] &&
     FUNC_7(VAR_19, FUNC_6(VAR_17[VAR_10])))
  goto error;

 VAR_19->km.seq = VAR_16->seq;
 VAR_19->replay_maxdiff = VAR_15->xfrm.sysctl_aevent_rseqth;

 VAR_19->replay_maxage = (VAR_15->xfrm.sysctl_aevent_etime*VAR_2)/VAR_11;
 VAR_19->preplay.bitmap = 0;
 VAR_19->preplay.seq = VAR_19->replay.seq+VAR_19->replay_maxdiff;
 VAR_19->preplay.oseq = VAR_19->replay.oseq +VAR_19->replay_maxdiff;



 FUNC_12(VAR_19, VAR_17);

 return VAR_19;

error:
 VAR_19->km.state = VAR_12;
 FUNC_11(VAR_19);
error_no_put:
 *VAR_18 = VAR_20;
 return ((void*)0);
}
