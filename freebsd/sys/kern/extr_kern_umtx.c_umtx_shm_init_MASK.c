
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_shm_reg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_5;

 VAR_3 = FUNC_3("umtx_shm", sizeof(struct umtx_shm_reg),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_1, 0);
 FUNC_1(&VAR_2, "umtxshm", ((void*)0), VAR_0);
 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++)
  FUNC_0(&VAR_4[VAR_5]);
}
