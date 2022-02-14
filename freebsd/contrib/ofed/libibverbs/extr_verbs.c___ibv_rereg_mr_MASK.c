
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_pd {int dummy; } ;
struct ibv_mr {size_t length; void* addr; struct ibv_pd* pd; TYPE_2__* context; } ;
struct TYPE_3__ {int (* rereg_mr ) (struct ibv_mr*,int,struct ibv_pd*,void*,size_t,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


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
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (struct ibv_mr*,int,struct ibv_pd*,void*,size_t,int) ;

int FUNC_3(struct ibv_mr *VAR_12, int VAR_13,
     struct ibv_pd *VAR_14, void *VAR_15,
     size_t VAR_16, int VAR_17)
{
 int VAR_18 = 0;
 int VAR_19;
 void *VAR_20;
 size_t VAR_21;

 if (VAR_13 & ~VAR_10) {
  VAR_11 = VAR_0;
  return VAR_9;
 }

 if ((VAR_13 & VAR_4) &&
     (!VAR_16 || !VAR_15)) {
  VAR_11 = VAR_0;
  return VAR_9;
 }

 if (VAR_17 && !(VAR_13 & VAR_2)) {
  VAR_11 = VAR_0;
  return VAR_9;
 }

 if (!VAR_12->context->ops.rereg_mr) {
  VAR_11 = VAR_1;
  return VAR_9;
 }

 if (VAR_13 & VAR_4) {
  VAR_19 = FUNC_1(VAR_15, VAR_16);
  if (VAR_19)
   return VAR_7;
  VAR_18 = 1;
 }

 VAR_20 = VAR_12->addr;
 VAR_21 = VAR_12->length;
 VAR_19 = VAR_12->context->ops.rereg_mr(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
 if (!VAR_19) {
  if (VAR_13 & VAR_3)
   VAR_12->pd = VAR_14;
  if (VAR_13 & VAR_4) {
   VAR_12->addr = VAR_15;
   VAR_12->length = VAR_16;
   VAR_19 = FUNC_0(VAR_20, VAR_21);
   if (VAR_19)
    return VAR_8;
  }
 } else {
  VAR_19 = VAR_5;
  if (VAR_18) {
   if (FUNC_0(VAR_15, VAR_16))
    VAR_19 = VAR_6;
  }
 }

 return VAR_19;
}
