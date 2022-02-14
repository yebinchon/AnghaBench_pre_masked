
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_header {int dummy; } ;
struct perf_session {int fd; int repipe; struct perf_header header; } ;
struct perf_pipe_file_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_pipe_file_header*,struct perf_header*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct perf_session *VAR_1, int VAR_2)
{
 struct perf_header *VAR_3 = &VAR_1->header;
 struct perf_pipe_file_header VAR_4;

 if (FUNC_0(&VAR_4, VAR_3, VAR_2,
     VAR_1->repipe) < 0) {
  FUNC_1("incompatible file format\n");
  return -VAR_0;
 }

 VAR_1->fd = VAR_2;

 return 0;
}
