
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread_map {int dummy; } ;
struct TYPE_3__ {int (* to_xfer_memory ) (int ,char*,int,int ,int *,TYPE_1__*) ;} ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int,int ,int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_1, struct thread_map *VAR_2)
{
  return VAR_0.to_xfer_memory ((CORE_ADDR)FUNC_0 (VAR_1), (char *)VAR_2,
      sizeof (*VAR_2), 0, ((void*)0), &VAR_0);
}
