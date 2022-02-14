
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_loss_interval {int dummy; } ;
struct tfrc_loss_hist {scalar_t__ counter; struct tfrc_loss_interval** ring; } ;


 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline struct tfrc_loss_interval *FUNC_1(struct tfrc_loss_hist *VAR_0)
{
 return VAR_0->counter ? VAR_0->ring[FUNC_0(VAR_0->counter - 1)] : ((void*)0);
}
