
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pipe_output; } ;
struct perf_record {int evlist; TYPE_3__* session; int output; int no_buildid; scalar_t__ bytes_written; TYPE_1__ opts; } ;
struct TYPE_6__ {int data_size; } ;
struct TYPE_7__ {TYPE_2__ header; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int FUNC_3 (struct perf_record*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(int VAR_0, void *VAR_1)
{
 struct perf_record *VAR_2 = VAR_1;

 if (VAR_0 != 0)
  return;

 if (!VAR_2->opts.pipe_output) {
  VAR_2->session->header.data_size += VAR_2->bytes_written;

  if (!VAR_2->no_buildid)
   FUNC_3(VAR_2);
  FUNC_2(VAR_2->session, VAR_2->evlist,
        VAR_2->output, 1);
  FUNC_1(VAR_2->session);
  FUNC_0(VAR_2->evlist);
  FUNC_4();
 }
}
