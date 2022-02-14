
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int outgoing_num_ports; int outgoing_num_tcp; int msg_cache_size; int msg_cache_slabs; int rrset_cache_size; int rrset_cache_slabs; int infra_cache_slabs; int key_cache_size; int key_cache_slabs; int neg_cache_size; int val_log_level; int val_log_squelch; scalar_t__ minimal_responses; scalar_t__ donotquery_localhost; scalar_t__ use_syslog; scalar_t__ verbosity; int * chrootdir; } ;


 struct config_file* FUNC_0 () ;
 int FUNC_1 (int *) ;

struct config_file* FUNC_2(void)
{
 struct config_file* VAR_0 = FUNC_0();
 if(!VAR_0) return ((void*)0);

 FUNC_1(VAR_0->chrootdir);
 VAR_0->chrootdir = ((void*)0);
 VAR_0->verbosity = 0;
 VAR_0->outgoing_num_ports = 16;

 VAR_0->outgoing_num_tcp = 2;
 VAR_0->msg_cache_size = 1024*1024;
 VAR_0->msg_cache_slabs = 1;
 VAR_0->rrset_cache_size = 1024*1024;
 VAR_0->rrset_cache_slabs = 1;
 VAR_0->infra_cache_slabs = 1;
 VAR_0->use_syslog = 0;
 VAR_0->key_cache_size = 1024*1024;
 VAR_0->key_cache_slabs = 1;
 VAR_0->neg_cache_size = 100 * 1024;
 VAR_0->donotquery_localhost = 0;

 VAR_0->val_log_level = 2;
 VAR_0->val_log_squelch = 1;
 VAR_0->minimal_responses = 0;
 return VAR_0;
}
