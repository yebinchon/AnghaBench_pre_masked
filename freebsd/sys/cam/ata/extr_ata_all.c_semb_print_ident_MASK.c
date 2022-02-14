
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_identify_data {int interface_rev; int interface_id; } ;
typedef int ins ;
typedef int in ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct sep_identify_data*) ;

void
FUNC_3(struct sep_identify_data *VAR_0)
{
 char VAR_1[7], VAR_2[5];

 FUNC_2(VAR_0);
 FUNC_0(VAR_1, VAR_0->interface_id, 6, sizeof(VAR_1));
 FUNC_0(VAR_2, VAR_0->interface_rev, 4, sizeof(VAR_2));
 FUNC_1(" SEMB %s %s device\n", VAR_1, VAR_2);
}
