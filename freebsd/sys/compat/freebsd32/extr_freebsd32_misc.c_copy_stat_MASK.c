
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat32 {int st_spare; scalar_t__ st_btim_ext; scalar_t__ st_ctim_ext; scalar_t__ st_mtim_ext; scalar_t__ st_atim_ext; scalar_t__ st_padding1; scalar_t__ st_padding0; } ;
struct stat {int dummy; } ;


 int FUNC_0 (struct stat,struct stat32,int ) ;
 int FUNC_1 (struct stat,struct stat32,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_3(struct stat *VAR_16, struct stat32 *VAR_17)
{

 FUNC_0(*VAR_16, *VAR_17, VAR_5);
 FUNC_0(*VAR_16, *VAR_17, VAR_9);
 FUNC_0(*VAR_16, *VAR_17, VAR_10);
 FUNC_0(*VAR_16, *VAR_17, VAR_12);
 FUNC_0(*VAR_16, *VAR_17, VAR_15);
 FUNC_0(*VAR_16, *VAR_17, VAR_8);
 FUNC_0(*VAR_16, *VAR_17, VAR_13);
 FUNC_1(*VAR_16, *VAR_17, VAR_0);
 FUNC_1(*VAR_16, *VAR_17, VAR_11);
 FUNC_1(*VAR_16, *VAR_17, VAR_4);
 FUNC_0(*VAR_16, *VAR_17, VAR_14);
 FUNC_0(*VAR_16, *VAR_17, VAR_3);
 FUNC_0(*VAR_16, *VAR_17, VAR_2);
 FUNC_0(*VAR_16, *VAR_17, VAR_6);
 FUNC_0(*VAR_16, *VAR_17, VAR_7);
 FUNC_1(*VAR_16, *VAR_17, VAR_1);
 VAR_17->st_padding0 = 0;
 VAR_17->st_padding1 = 0;






 FUNC_2(VAR_17->st_spare, sizeof(VAR_17->st_spare));
}
