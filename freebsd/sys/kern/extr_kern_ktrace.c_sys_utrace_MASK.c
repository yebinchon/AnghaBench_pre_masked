
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utrace_args {int len; int addr; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int ktr_len; } ;
struct ktr_request {TYPE_1__ ktr_header; void* ktr_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (void*,int ) ;
 struct ktr_request* FUNC_3 (int ) ;
 int FUNC_4 (struct thread*,struct ktr_request*) ;
 void* FUNC_5 (int ,int ,int ) ;

int
FUNC_6(struct thread *VAR_7, struct utrace_args *VAR_8)
{
 return (VAR_2);

}
