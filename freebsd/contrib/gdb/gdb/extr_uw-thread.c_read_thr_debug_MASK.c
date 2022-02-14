
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread_debug {int dummy; } ;
struct TYPE_3__ {int (* to_xfer_memory ) (int ,char*,int,int ,int *,TYPE_1__*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int *,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (struct thread_debug *VAR_2)
{
  return VAR_0.to_xfer_memory (VAR_1, (char *)VAR_2,
      sizeof (*VAR_2), 0, ((void*)0), &VAR_0);
}
