
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dtrace_nfsclient_nfs23_start_probe_func_t ;
typedef scalar_t__ dtrace_nfsclient_nfs23_done_probe_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char*,int *,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_7)
{

 if (FUNC_0("nfscl", &VAR_1,
     VAR_0, ((void*)0), &VAR_3, ((void*)0),
     &VAR_2) != 0)
  return;

 VAR_5 =
     (dtrace_nfsclient_nfs23_start_probe_func_t)VAR_6;
 VAR_4 =
     (dtrace_nfsclient_nfs23_done_probe_func_t)VAR_6;
}
