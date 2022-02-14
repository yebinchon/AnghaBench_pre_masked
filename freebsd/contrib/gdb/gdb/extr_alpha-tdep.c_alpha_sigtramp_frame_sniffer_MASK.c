
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_unwind {int dummy; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {int sigcontext_addr; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 struct frame_unwind const VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char**,int *,int *) ;
 int FUNC_2 (struct frame_info*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static const struct frame_unwind *
FUNC_4 (struct frame_info *VAR_2)
{
  CORE_ADDR VAR_3 = FUNC_2 (VAR_2);
  char *VAR_4;



  if (!FUNC_3 (VAR_1)->sigcontext_addr)
    return ((void*)0);


  FUNC_1 (VAR_3, &VAR_4, ((void*)0), ((void*)0));
  if (FUNC_0 (VAR_3, VAR_4))
    return &VAR_0;

  return ((void*)0);
}
