
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_env {int dummy; } ;


 int FUNC_0 (struct module_env*,struct query_info*,struct reply_info*,int,int ,int,struct regional*,int ) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct module_env* VAR_0, struct query_info* VAR_1,
 struct reply_info* VAR_2, int VAR_3, time_t VAR_4, int VAR_5,
 struct regional* VAR_6, uint16_t VAR_7)
{
 if(!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_7))
  FUNC_1("out of memory: cannot store data in cache");
}
