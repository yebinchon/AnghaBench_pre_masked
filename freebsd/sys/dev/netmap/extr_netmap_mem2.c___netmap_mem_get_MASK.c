
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_mem_d {int refcount; } ;


 int FUNC_0 (struct netmap_mem_d*,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

struct netmap_mem_d *
FUNC_3(struct netmap_mem_d *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_1(VAR_0);
 VAR_1->refcount++;
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0);
 return VAR_1;
}
