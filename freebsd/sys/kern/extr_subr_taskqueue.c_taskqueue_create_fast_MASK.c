
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int taskqueue_enqueue_fn ;
struct taskqueue {int dummy; } ;


 int VAR_0 ;
 struct taskqueue* FUNC_0 (char const*,int,int ,void*,int ,char*) ;

struct taskqueue *
FUNC_1(const char *VAR_1, int VAR_2,
   taskqueue_enqueue_fn VAR_3, void *VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_0, "fast_taskqueue");
}
