
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ proto; scalar_t__ spi; } ;
struct xfrm_tmpl {unsigned short encap_family; scalar_t__ reqid; scalar_t__ mode; int aalgos; TYPE_2__ id; scalar_t__ allalgs; scalar_t__ optional; } ;
struct TYPE_6__ {scalar_t__ reqid; scalar_t__ mode; int aalgo; } ;
struct TYPE_4__ {scalar_t__ proto; scalar_t__ spi; } ;
struct xfrm_state {TYPE_3__ props; TYPE_1__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct xfrm_tmpl*,struct xfrm_state*,unsigned short) ;
 scalar_t__ FUNC_2 (struct xfrm_state*) ;

__attribute__((used)) static inline int
FUNC_3(struct xfrm_tmpl *VAR_2, struct xfrm_state *VAR_3,
       unsigned short VAR_4)
{
 if (FUNC_2(VAR_3))
  return VAR_2->optional && !FUNC_1(VAR_2, VAR_3, VAR_2->encap_family);
 return VAR_3->id.proto == VAR_2->id.proto &&
  (VAR_3->id.spi == VAR_2->id.spi || !VAR_2->id.spi) &&
  (VAR_3->props.reqid == VAR_2->reqid || !VAR_2->reqid) &&
  VAR_3->props.mode == VAR_2->mode &&
  (VAR_2->allalgs || (VAR_2->aalgos & (1<<VAR_3->props.aalgo)) ||
   !(FUNC_0(VAR_2->id.proto, VAR_0))) &&
  !(VAR_3->props.mode != VAR_1 &&
    FUNC_1(VAR_2, VAR_3, VAR_4));
}
