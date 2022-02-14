
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_8)
{

 FUNC_3(&VAR_7, "shm timestamps", ((void*)0), VAR_0);
 FUNC_5(&VAR_3, "shm dictionary");
 VAR_4 = FUNC_2(1024, VAR_1, &VAR_5);
 FUNC_4(&VAR_6, 1);
 VAR_2 = FUNC_1();
 FUNC_0(VAR_2 > 0, ("shm dev inode not initialized"));
}
