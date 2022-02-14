
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt_class {int xcl_list; int xcl_name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct svc_xprt_class *VAR_1)
{
 FUNC_0("svc: Removing svc transport class '%s'\n", VAR_1->xcl_name);
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->xcl_list);
 FUNC_3(&VAR_0);
}
