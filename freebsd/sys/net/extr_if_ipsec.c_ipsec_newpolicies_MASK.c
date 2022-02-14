
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_12__ {int sa_len; int sa_family; } ;
struct TYPE_13__ {TYPE_5__ sa; } ;
struct TYPE_10__ {int sa_len; int sa_family; } ;
struct TYPE_11__ {TYPE_3__ sa; } ;
struct TYPE_14__ {TYPE_6__ dst; TYPE_4__ src; int ul_proto; int dir; } ;
struct secpolicy {TYPE_7__ spidx; int priority; int created; int tcount; struct ipsecrequest** req; int state; int policy; } ;
struct TYPE_9__ {int dst; int src; int reqid; int mode; int proto; } ;
struct ipsecrequest {TYPE_2__ saidx; int level; } ;
struct ipsec_softc {TYPE_1__* ifp; } ;
struct TYPE_8__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sockaddr const*,int *,int ) ;
 struct ipsecrequest* FUNC_1 () ;
 int FUNC_2 (struct secpolicy**) ;
 struct secpolicy* FUNC_3 () ;
 int FUNC_4 (struct secpolicy**,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_5(struct ipsec_softc *VAR_13, struct secpolicy *VAR_14[VAR_9],
    const struct sockaddr *VAR_15, const struct sockaddr *VAR_16, uint32_t VAR_17)
{
 struct ipsecrequest *VAR_18;
 int VAR_19;

 FUNC_4(VAR_14, 0, sizeof(struct secpolicy *) * VAR_9);
 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  if ((VAR_14[VAR_19] = FUNC_3()) == ((void*)0))
   goto fail;
  if ((VAR_18 = FUNC_1()) == ((void*)0))
   goto fail;

  VAR_14[VAR_19]->policy = VAR_8;
  VAR_14[VAR_19]->state = VAR_10;
  VAR_14[VAR_19]->req[VAR_14[VAR_19]->tcount++] = VAR_18;
  VAR_14[VAR_19]->created = VAR_12;

  VAR_14[VAR_19]->priority = VAR_13->ifp->if_index;
  VAR_18->level = VAR_6;
  VAR_18->saidx.proto = VAR_3;
  VAR_18->saidx.mode = VAR_7;
  VAR_18->saidx.reqid = VAR_17;
  if (VAR_19 % 2 == 0) {
   VAR_14[VAR_19]->spidx.dir = VAR_4;
   FUNC_0(VAR_15, &VAR_18->saidx.dst, VAR_15->sa_len);
   FUNC_0(VAR_16, &VAR_18->saidx.src, VAR_16->sa_len);
  } else {
   VAR_14[VAR_19]->spidx.dir = VAR_5;
   FUNC_0(VAR_15, &VAR_18->saidx.src, VAR_15->sa_len);
   FUNC_0(VAR_16, &VAR_18->saidx.dst, VAR_16->sa_len);
  }
  VAR_14[VAR_19]->spidx.ul_proto = VAR_11;
 }
 return (0);
fail:
 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
  FUNC_2(&VAR_14[VAR_19]);
 return (VAR_2);
}
