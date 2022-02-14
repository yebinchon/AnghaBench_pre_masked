
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_event {TYPE_1__* ctx; } ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ timestamp; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct perf_event*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 u64 VAR_1 = FUNC_0();
 u64 VAR_2 = VAR_1 - VAR_0->ctx->timestamp;
 u64 VAR_3 = VAR_0->ctx->time + VAR_2;

 FUNC_1(VAR_0, VAR_3);
}
