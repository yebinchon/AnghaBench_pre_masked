
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtc_file {struct dtc_file* dir; int name; int file; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dtc_file*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dtc_file *VAR_1)
{
 if (FUNC_1(VAR_1->file))
  FUNC_0("Error closing \"%s\": %s\n", VAR_1->name, FUNC_3(VAR_0));

 FUNC_2(VAR_1->dir);
 FUNC_2(VAR_1);
}
