
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pipe_file_header {int size; int magic; } ;
struct perf_header {scalar_t__ needs_swap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,struct perf_header*) ;
 scalar_t__ FUNC_2 (int ,struct perf_pipe_file_header*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,struct perf_pipe_file_header*,int) ;

__attribute__((used)) static int FUNC_5(struct perf_pipe_file_header *VAR_1,
           struct perf_header *VAR_2, int VAR_3,
           bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_1, sizeof(*VAR_1));
 if (VAR_5 <= 0)
  return -1;

 if (FUNC_1(VAR_1->magic, VAR_1->size, 1, VAR_2) < 0) {
  FUNC_3("endian/magic failed\n");
  return -1;
 }

 if (VAR_2->needs_swap)
  VAR_1->size = FUNC_0(VAR_1->size);

 if (VAR_4 && FUNC_2(VAR_0, VAR_1, sizeof(*VAR_1)) < 0)
  return -1;

 return 0;
}
