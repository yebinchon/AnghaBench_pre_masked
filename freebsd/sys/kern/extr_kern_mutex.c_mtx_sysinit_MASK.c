
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_args {int ma_opts; int ma_desc; scalar_t__ ma_mtx; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct mtx*,int ,int *,int ) ;

void
FUNC_1(void *VAR_0)
{
 struct mtx_args *VAR_1 = VAR_0;

 FUNC_0((struct mtx *)VAR_1->ma_mtx, VAR_1->ma_desc, ((void*)0),
     VAR_1->ma_opts);
}
