
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {unsigned int sv_nrpools; void* sv_pools; } ;
struct seq_file {struct svc_serv* private; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 unsigned int VAR_3 = (unsigned int)*VAR_2;
 struct svc_serv *VAR_4 = VAR_1->private;

 FUNC_0("svc_pool_stats_start, *pidx=%u\n", VAR_3);

 if (!VAR_3)
  return VAR_0;
 return (VAR_3 > VAR_4->sv_nrpools ? ((void*)0) : &VAR_4->sv_pools[VAR_3-1]);
}
