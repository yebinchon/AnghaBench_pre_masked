
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct utsname {void* machine; } ;
struct amu_global_options {int dummy; } ;
struct TYPE_3__ {char* auto_dir; char* pid_file; int* amfs_auto_retrans; int* amfs_auto_timeo; char* hesiod_base; int ldap_cache_maxmem; int ldap_proto_version; int * nis_domain; scalar_t__ ldap_cache_seconds; int * ldap_hostports; int * ldap_base; int flags; int map_reload_interval; int am_timeo_w; int am_timeo; int * sub_domain; int op_sys_vendor; int op_sys_full; int op_sys_ver; int op_sys; int * logfile; void* karch; int exec_map_timeout; int * cluster; scalar_t__ auto_attrcache; void* arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static void
FUNC_2(void)
{



  int VAR_12;

  FUNC_0(&VAR_11, 0, sizeof(struct amu_global_options));


  VAR_11.arch = VAR_5;


  VAR_11.auto_dir = "/.amd_mnt";


  VAR_11.auto_attrcache = 0;


  VAR_11.cluster = ((void*)0);


  VAR_11.exec_map_timeout = VAR_0;
    VAR_11.karch = VAR_5;


  VAR_11.logfile = ((void*)0);


  VAR_11.op_sys = VAR_7;


  VAR_11.op_sys_ver = VAR_8;


  VAR_11.op_sys_full = VAR_6;


  VAR_11.op_sys_vendor = VAR_9;


  VAR_11.pid_file = "/dev/stdout";


  VAR_11.sub_domain = ((void*)0);


  for (VAR_12=0; VAR_12<VAR_1; ++VAR_12) {
    VAR_11.amfs_auto_retrans[VAR_12] = -1;
    VAR_11.amfs_auto_timeo[VAR_12] = -1;
  }


  VAR_11.am_timeo = VAR_2;


  VAR_11.am_timeo_w = VAR_3;


  VAR_11.map_reload_interval = VAR_10;




  VAR_11.flags = VAR_4;
}
