
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int logfile_override; int cfglock; void* log_out; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ub_ctx* VAR_1, void* VAR_2)
{
 FUNC_0(&VAR_1->cfglock);
 FUNC_2((FILE*)VAR_2);
 VAR_1->logfile_override = 1;
 VAR_1->log_out = VAR_2;
 FUNC_1(&VAR_1->cfglock);
 return VAR_0;
}
