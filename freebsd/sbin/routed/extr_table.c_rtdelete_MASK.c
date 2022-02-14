
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct rt_entry {int rt_mask; int rt_dst; } ;
struct khash {int k_state; } ;
struct TYPE_18__ {int tv_sec; } ;
struct TYPE_17__ {int tv_sec; } ;
struct TYPE_16__ {scalar_t__ (* rnh_deladdr ) (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_13__ {int s_addr; } ;
struct TYPE_15__ {TYPE_2__ sin_addr; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_14__ {TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct rt_entry*) ;
 int FUNC_1 (int ) ;
 struct khash* FUNC_2 (int ,int ,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_6 (char*,struct rt_entry*) ;

void
FUNC_7(struct rt_entry *VAR_8)
{
 struct khash *VAR_9;


 if (VAR_1)
  FUNC_6("Del", VAR_8);

 VAR_9 = FUNC_2(VAR_8->rt_dst, VAR_8->rt_mask, 0);
 if (VAR_9 != ((void*)0)) {
  VAR_9->k_state |= VAR_0;
  VAR_4.tv_sec = VAR_5.tv_sec;
 }

 VAR_2.sin_addr.s_addr = VAR_8->rt_dst;
 VAR_3.sin_addr.s_addr = FUNC_1(VAR_8->rt_mask);
 FUNC_3(&VAR_3);
 if (VAR_8 != (struct rt_entry *)VAR_6->rnh_deladdr(&VAR_2, &VAR_3,
       VAR_6)) {
  FUNC_4("rnh_deladdr() failed");
 } else {
  FUNC_0(VAR_8);
  VAR_7--;
 }
}
