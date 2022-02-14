
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_record {scalar_t__ post_processing_offset; TYPE_1__* session; int output; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_record *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_2->output, 0, VAR_0);

 if (VAR_3 == 0)
  return 0;

 VAR_2->session->fd = VAR_2->output;
 return FUNC_0(VAR_2->session, VAR_2->post_processing_offset,
           VAR_3 - VAR_2->post_processing_offset,
           VAR_3, &VAR_1);
}
