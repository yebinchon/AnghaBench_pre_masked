
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_event_channel {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdma_event_channel*) ;
 struct rdma_event_channel* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;

struct rdma_event_channel *FUNC_4(void)
{
 struct rdma_event_channel *VAR_2;

 if (FUNC_3())
  return ((void*)0);

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 VAR_2->fd = FUNC_2("/dev/rdma_cm", VAR_1 | VAR_0);
 if (VAR_2->fd < 0) {
  goto err;
 }
 return VAR_2;
err:
 FUNC_0(VAR_2);
 return ((void*)0);
}
