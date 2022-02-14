
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmem_btag {int dummy; } ;
struct vmem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (void*,int) ;
 void* FUNC_2 (char*,int,int *,int *,int *,int *,int ,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;

void
FUNC_5(void)
{

 FUNC_0(&VAR_9, "vmem list lock", ((void*)0), VAR_1);
 VAR_10 = FUNC_2("vmem",
     sizeof(struct vmem), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_2, VAR_4);
 VAR_8 = FUNC_2("vmem btag",
     sizeof(struct vmem_btag), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_2, VAR_4 | VAR_3);

 FUNC_0(&VAR_7, "btag lock", ((void*)0), VAR_1);
 FUNC_1(VAR_8, VAR_0);







 FUNC_3(VAR_8, 2 * VAR_0 * VAR_5);
 FUNC_4(VAR_8, VAR_6);

}
