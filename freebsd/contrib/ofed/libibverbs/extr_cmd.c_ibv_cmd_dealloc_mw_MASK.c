
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_mw {TYPE_1__* context; int handle; } ;
struct ibv_dealloc_mw {scalar_t__ reserved; int mw_handle; } ;
struct TYPE_2__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_dealloc_mw*,size_t,int ) ;
 int VAR_1 ;
 size_t FUNC_1 (int ,struct ibv_dealloc_mw*,size_t) ;

int FUNC_2(struct ibv_mw *VAR_2,
         struct ibv_dealloc_mw *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_3, VAR_4, VAR_0);
 VAR_3->mw_handle = VAR_2->handle;
 VAR_3->reserved = 0;

 if (FUNC_1(VAR_2->context->cmd_fd, VAR_3, VAR_4) != VAR_4)
  return VAR_1;

 return 0;
}
