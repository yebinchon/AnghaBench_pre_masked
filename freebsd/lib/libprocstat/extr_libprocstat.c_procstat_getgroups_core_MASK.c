
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int * FUNC_0 (struct procstat_core*,int ,int *,size_t*) ;

__attribute__((used)) static gid_t *
FUNC_1(struct procstat_core *VAR_1, unsigned int *VAR_2)
{
 size_t VAR_3;
 gid_t *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, ((void*)0), &VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 *VAR_2 = VAR_3 / sizeof(gid_t);
 return (VAR_4);
}
