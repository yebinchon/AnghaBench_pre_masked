
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


struct TYPE_8__ {scalar_t__ sa_family; } ;
struct ai_order {scalar_t__ aio_dstscope; scalar_t__ aio_srcscope; int aio_srcflag; scalar_t__ aio_matchlen; scalar_t__ aio_initial_sequence; TYPE_7__* aio_ai; TYPE_5__* aio_dstpolicy; TYPE_3__* aio_srcpolicy; TYPE_1__ aio_srcsa; } ;
struct TYPE_14__ {TYPE_6__* ai_addr; } ;
struct TYPE_13__ {scalar_t__ sa_family; } ;
struct TYPE_11__ {scalar_t__ label; scalar_t__ preced; } ;
struct TYPE_12__ {TYPE_4__ pc_policy; } ;
struct TYPE_9__ {scalar_t__ label; } ;
struct TYPE_10__ {TYPE_2__ pc_policy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_3, const void *VAR_4)
{
 const struct ai_order *VAR_5 = VAR_3, *VAR_6 = VAR_4;





 if (VAR_5->aio_srcsa.sa_family != VAR_1 &&
     VAR_6->aio_srcsa.sa_family == VAR_1) {
  return(-1);
 }
 if (VAR_5->aio_srcsa.sa_family == VAR_1 &&
     VAR_6->aio_srcsa.sa_family != VAR_1) {
  return(1);
 }


 if (VAR_5->aio_dstscope == VAR_5->aio_srcscope &&
     VAR_6->aio_dstscope != VAR_6->aio_srcscope) {
  return(-1);
 }
 if (VAR_5->aio_dstscope != VAR_5->aio_srcscope &&
     VAR_6->aio_dstscope == VAR_6->aio_srcscope) {
  return(1);
 }


 if (VAR_5->aio_srcsa.sa_family != VAR_1 &&
     VAR_6->aio_srcsa.sa_family != VAR_1) {
  if (!(VAR_5->aio_srcflag & VAR_2) &&
      (VAR_6->aio_srcflag & VAR_2)) {
   return(-1);
  }
  if ((VAR_5->aio_srcflag & VAR_2) &&
      !(VAR_6->aio_srcflag & VAR_2)) {
   return(1);
  }
 }
 if (VAR_5->aio_dstscope >= 0 &&
     VAR_5->aio_dstscope < VAR_6->aio_dstscope) {
  return(-1);
 }
 if (VAR_6->aio_dstscope >= 0 &&
     VAR_6->aio_dstscope < VAR_5->aio_dstscope) {
  return(1);
 }





 if (VAR_5->aio_ai->ai_addr->sa_family ==
     VAR_6->aio_ai->ai_addr->sa_family &&
     VAR_5->aio_ai->ai_addr->sa_family != VAR_0) {
  if (VAR_5->aio_matchlen > VAR_6->aio_matchlen) {
   return(-1);
  }
  if (VAR_5->aio_matchlen < VAR_6->aio_matchlen) {
   return(1);
  }
 }
 if (VAR_6->aio_initial_sequence < VAR_5->aio_initial_sequence)
  return(1);

 return(-1);
}
