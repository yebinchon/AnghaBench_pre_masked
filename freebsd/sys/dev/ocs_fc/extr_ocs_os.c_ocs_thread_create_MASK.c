
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int tcb; int terminate; void* arg; int fctn; } ;
typedef TYPE_1__ ocs_thread_t ;
typedef scalar_t__ ocs_thread_start_e ;
typedef int ocs_thread_fctn ;
typedef int ocs_os_handle_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int *,int *,int ,int ,char*,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 char* FUNC_3 (char const*) ;
 int VAR_3 ;

int32_t
FUNC_4(ocs_os_handle_t VAR_4, ocs_thread_t *VAR_5, ocs_thread_fctn VAR_6, const char *VAR_7, void *VAR_8, ocs_thread_start_e VAR_9)
{
 int32_t VAR_10 = 0;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->fctn = VAR_6;
 VAR_5->name = FUNC_3(VAR_7);
 if (VAR_5->name == ((void*)0)) {
  VAR_5->name = "unknown";
 }
 VAR_5->arg = VAR_8;

 FUNC_1(&VAR_5->terminate, 0);

 VAR_10 = FUNC_0(VAR_3, VAR_5, ((void*)0), &VAR_5->tcb, (VAR_9 == VAR_0) ? VAR_2 : 0,
  VAR_1, "%s", VAR_7);

 return VAR_10;
}
