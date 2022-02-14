
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_tmpl {scalar_t__ mode; scalar_t__ optional; } ;
struct sec_path {int len; TYPE_2__** xvec; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xfrm_tmpl*,TYPE_2__*,unsigned short) ;

__attribute__((used)) static inline int
FUNC_1(struct xfrm_tmpl *VAR_1, struct sec_path *VAR_2, int VAR_3,
        unsigned short VAR_4)
{
 int VAR_5 = VAR_3;

 if (VAR_1->optional) {
  if (VAR_1->mode == VAR_0)
   return VAR_3;
 } else
  VAR_3 = -1;
 for (; VAR_5 < VAR_2->len; VAR_5++) {
  if (FUNC_0(VAR_1, VAR_2->xvec[VAR_5], VAR_4))
   return ++VAR_5;
  if (VAR_2->xvec[VAR_5]->props.mode != VAR_0) {
   if (VAR_3 == -1)
    VAR_3 = -2-VAR_5;
   break;
  }
 }
 return VAR_3;
}
