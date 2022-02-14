
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rpcrdma_write_chunk {int dummy; } ;
struct rpcrdma_write_array {scalar_t__ wc_discrim; scalar_t__ wc_nchunks; TYPE_2__* wc_array; } ;
struct TYPE_3__ {scalar_t__ rs_handle; scalar_t__ rs_length; int rs_offset; } ;
struct TYPE_4__ {TYPE_1__ wc_target; } ;


 int FUNC_0 (char*,struct rpcrdma_write_array*,int,...) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 *FUNC_4(u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3;
 struct rpcrdma_write_array *VAR_4 =
  (struct rpcrdma_write_array *)VAR_1;


 if (VAR_4->wc_discrim == VAR_0)
  return (u32 *)&VAR_4->wc_nchunks;

 if ((unsigned long)VAR_4 + sizeof(struct rpcrdma_write_array) >
     (unsigned long)VAR_2) {
  FUNC_0("svcrdma: ary=%p, vaend=%p\n", VAR_4, *VAR_2);
  return ((void*)0);
 }
 VAR_4->wc_discrim = FUNC_1(VAR_4->wc_discrim);
 VAR_4->wc_nchunks = FUNC_1(VAR_4->wc_nchunks);
 if (((unsigned long)&VAR_4->wc_array[0] +
      (sizeof(struct rpcrdma_write_chunk) * VAR_4->wc_nchunks)) >
     (unsigned long)VAR_2) {
  FUNC_0("svcrdma: ary=%p, wc_nchunks=%d, vaend=%p\n",
   VAR_4, VAR_4->wc_nchunks, VAR_2);
  return ((void*)0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_4->wc_nchunks; VAR_3++) {
  u64 VAR_5;

  VAR_4->wc_array[VAR_3].wc_target.rs_handle =
   FUNC_1(VAR_4->wc_array[VAR_3].wc_target.rs_handle);
  VAR_4->wc_array[VAR_3].wc_target.rs_length =
   FUNC_1(VAR_4->wc_array[VAR_3].wc_target.rs_length);
  VAR_1 = (u32 *)&VAR_4->wc_array[VAR_3].wc_target.rs_offset;
  FUNC_3(VAR_1, &VAR_5);
  FUNC_2(VAR_5, (u64 *)VAR_1);
 }





 return (u32 *)&VAR_4->wc_array[VAR_3].wc_target.rs_length;
}
