
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xpt_busfunc_t ;
struct xpt_traverse_config {void* tr_arg; int * tr_func; int depth; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct xpt_traverse_config*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(xpt_busfunc_t *VAR_2, void *VAR_3)
{
 struct xpt_traverse_config VAR_4;

 VAR_4.depth = VAR_0;
 VAR_4.tr_func = VAR_2;
 VAR_4.tr_arg = VAR_3;

 return(FUNC_0(((void*)0), VAR_1, &VAR_4));
}
