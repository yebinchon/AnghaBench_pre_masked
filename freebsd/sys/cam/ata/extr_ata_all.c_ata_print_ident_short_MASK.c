
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int revision; int model; } ;
typedef int revision ;
typedef int product ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,char*) ;

void
FUNC_2(struct ata_params *VAR_0)
{
 char VAR_1[48], VAR_2[16];

 FUNC_0(VAR_1, VAR_0->model, sizeof(VAR_0->model),
     sizeof(VAR_1));
 FUNC_0(VAR_2, VAR_0->revision, sizeof(VAR_0->revision),
     sizeof(VAR_2));
 FUNC_1("<%s %s>", VAR_1, VAR_2);
}
