
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int ,int ,int,char*) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_8)
{
 FUNC_0(&VAR_7);

 FUNC_2(&VAR_5, "cuse-mtx", ((void*)0), VAR_2);

 VAR_4 = FUNC_1(&VAR_6, 0,
     VAR_3, VAR_1, 0600, "cuse");

 FUNC_3("Cuse v%d.%d.%d @ /dev/cuse\n",
     (VAR_0 >> 16) & 0xFF, (VAR_0 >> 8) & 0xFF,
     (VAR_0 >> 0) & 0xFF);
}
