
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct krping_rdma_info {void* size; void* rkey; int buf; } ;
struct krping_cb {int size; int server_invalidate; scalar_t__ bw; scalar_t__ rlat; scalar_t__ wlat; int server; struct krping_rdma_info send_buf; } ;


 int FUNC_0 (char*,unsigned long long,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct krping_cb*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct krping_cb *VAR_0, u64 VAR_1)
{
 struct krping_rdma_info *VAR_2 = &VAR_0->send_buf;
 u32 VAR_3;






 if (!VAR_0->server || VAR_0->wlat || VAR_0->rlat || VAR_0->bw) {
  VAR_3 = FUNC_3(VAR_0, VAR_1, !VAR_0->server_invalidate);
  VAR_2->buf = FUNC_2(VAR_1);
  VAR_2->rkey = FUNC_1(VAR_3);
  VAR_2->size = FUNC_1(VAR_0->size);
  FUNC_0("RDMA addr %llx rkey %x len %d\n",
     (unsigned long long)VAR_1, VAR_3, VAR_0->size);
 }
}
