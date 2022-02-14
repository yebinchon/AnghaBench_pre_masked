
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int __lwp_desc_t ;
struct TYPE_3__ {int (* to_xfer_memory ) (int ,char*,int,int ,int *,TYPE_1__*) ;} ;
typedef int CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_1, __lwp_desc_t *VAR_2)
{
  return VAR_0.to_xfer_memory (VAR_1, (char *)VAR_2,
      sizeof (*VAR_2), 0, ((void*)0), &VAR_0);
}
