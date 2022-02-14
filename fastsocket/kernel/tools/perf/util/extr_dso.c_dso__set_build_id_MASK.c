
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int has_build_id; int build_id; } ;


 int FUNC_0 (int ,void*,int) ;

void FUNC_1(struct dso *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0->build_id, VAR_1, sizeof(VAR_0->build_id));
 VAR_0->has_build_id = 1;
}
