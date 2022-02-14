
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_3()
{
 if (!VAR_8)
  return 0;

 FUNC_1(&VAR_5, "nvd_lock", ((void*)0), VAR_0);
 FUNC_0(&VAR_2);
 FUNC_0(&VAR_3);

 VAR_1 = FUNC_2(VAR_7,
     VAR_6, ((void*)0), VAR_4);

 return (VAR_1 != ((void*)0) ? 0 : -1);
}
