
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct perf_session {int dummy; } ;
struct list_head {int dummy; } ;
struct machine {struct list_head user_dsos; struct list_head kernel_dsos; } ;
struct dso {int kernel; int long_name; int build_id; } ;
struct TYPE_2__ {int misc; } ;
struct build_id_event {int build_id; TYPE_1__ header; int pid; } ;
typedef enum dso_kernel_type { ____Placeholder_dso_kernel_type } dso_kernel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 struct dso* FUNC_0 (struct list_head*,char*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct dso*,int *) ;
 struct machine* FUNC_3 (struct perf_session*,int ) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct build_id_event *VAR_5,
        char *VAR_6,
        struct perf_session *VAR_7)
{
 int VAR_8 = -1;
 struct list_head *VAR_9;
 struct machine *VAR_10;
 u16 VAR_11;
 struct dso *VAR_12;
 enum dso_kernel_type VAR_13;

 VAR_10 = FUNC_3(VAR_7, VAR_5->pid);
 if (!VAR_10)
  goto out;

 VAR_11 = VAR_5->header.misc & VAR_4;

 switch (VAR_11) {
 case 129:
  VAR_13 = VAR_2;
  VAR_9 = &VAR_10->kernel_dsos;
  break;
 case 131:
  VAR_13 = VAR_1;
  VAR_9 = &VAR_10->kernel_dsos;
  break;
 case 128:
 case 130:
  VAR_13 = VAR_3;
  VAR_9 = &VAR_10->user_dsos;
  break;
 default:
  goto out;
 }

 VAR_12 = FUNC_0(VAR_9, VAR_6);
 if (VAR_12 != ((void*)0)) {
  char VAR_14[VAR_0 * 2 + 1];

  FUNC_2(VAR_12, &VAR_5->build_id);

  if (VAR_6[0] == '[')
   VAR_12->kernel = VAR_13;

  FUNC_1(VAR_12->build_id, sizeof(VAR_12->build_id),
      VAR_14);
  FUNC_4("build id event received for %s: %s\n",
    VAR_12->long_name, VAR_14);
 }

 VAR_8 = 0;
out:
 return VAR_8;
}
