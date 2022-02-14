
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ rs_handle; scalar_t__ rs_length; int rs_offset; } ;
struct rpcrdma_read_chunk {scalar_t__ rc_discrim; scalar_t__ rc_position; TYPE_1__ rc_target; } ;


 int FUNC_0 (char*,int *,struct rpcrdma_read_chunk*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 *FUNC_4(u32 *VAR_1, u32 *VAR_2)
{
 struct rpcrdma_read_chunk *VAR_3 = (struct rpcrdma_read_chunk *)VAR_1;

 while (VAR_3->rc_discrim != VAR_0) {
  u64 VAR_4;

  if (((unsigned long)VAR_3 + sizeof(struct rpcrdma_read_chunk)) >
      (unsigned long)VAR_2) {
   FUNC_0("svcrdma: vaend=%p, ch=%p\n", VAR_2, VAR_3);
   return ((void*)0);
  }

  VAR_3->rc_discrim = FUNC_1(VAR_3->rc_discrim);
  VAR_3->rc_position = FUNC_1(VAR_3->rc_position);
  VAR_3->rc_target.rs_handle = FUNC_1(VAR_3->rc_target.rs_handle);
  VAR_3->rc_target.rs_length = FUNC_1(VAR_3->rc_target.rs_length);
  VAR_1 = (u32 *)&VAR_3->rc_target.rs_offset;
  FUNC_3(VAR_1, &VAR_4);
  FUNC_2(VAR_4, (u64 *)VAR_1);
  VAR_3++;
 }
 return (u32 *)&VAR_3->rc_position;
}
