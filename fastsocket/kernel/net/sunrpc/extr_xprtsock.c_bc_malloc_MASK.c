
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct rpc_buffer {int len; void* data; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_1 (int ) ;
 struct rpc_buffer* FUNC_2 (struct page*) ;

void *FUNC_3(struct rpc_task *VAR_2, size_t VAR_3)
{
 struct page *VAR_4;
 struct rpc_buffer *VAR_5;

 FUNC_0(VAR_3 > VAR_1 - sizeof(struct rpc_buffer));
 VAR_4 = FUNC_1(VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->len = VAR_1;

 return VAR_5->data;
}
