
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct perf_session {int fd_pipe; int evlist; } ;
struct perf_report {int dont_use_callchains; struct perf_session* session; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {int use_callchain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct perf_report *VAR_8)
{
 struct perf_session *VAR_9 = VAR_8->session;
 u64 VAR_10 = FUNC_1(VAR_9->evlist);

 if (!VAR_9->fd_pipe && !(VAR_10 & VAR_3)) {
  if (VAR_6) {
   FUNC_2("Selected --sort parent, but no "
        "callchain data. Did you call "
        "'perf record' without -g?\n");
   return -VAR_1;
  }
  if (VAR_7.use_callchain) {
   FUNC_2("Selected -g but no callchain data. Did "
        "you call 'perf record' without -g?\n");
   return -1;
  }
 } else if (!VAR_8->dont_use_callchains &&
     VAR_4.mode != VAR_0 &&
     !VAR_7.use_callchain) {
   VAR_7.use_callchain = 1;
   if (FUNC_0(&VAR_4) < 0) {
    FUNC_2("Can't register callchain params.\n");
    return -VAR_1;
   }
 }

 if (VAR_5 == 1) {
  if (!VAR_9->fd_pipe &&
      !(VAR_10 & VAR_2)) {
   FUNC_2("Selected -b but no branch data. "
      "Did you call perf record without -b?\n");
   return -1;
  }
 }

 return 0;
}
