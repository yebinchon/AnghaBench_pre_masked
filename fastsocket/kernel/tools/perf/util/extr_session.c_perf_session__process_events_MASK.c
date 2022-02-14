
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_tool {int dummy; } ;
struct TYPE_2__ {int data_size; int data_offset; } ;
struct perf_session {int size; TYPE_1__ header; int fd_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_session*,int ,int ,int ,struct perf_tool*) ;
 int FUNC_1 (struct perf_session*,struct perf_tool*) ;
 int * FUNC_2 (struct perf_session*) ;

int FUNC_3(struct perf_session *VAR_1,
     struct perf_tool *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_1) == ((void*)0))
  return -VAR_0;

 if (!VAR_1->fd_pipe)
  VAR_3 = FUNC_0(VAR_1,
           VAR_1->header.data_offset,
           VAR_1->header.data_size,
           VAR_1->size, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 return VAR_3;
}
