
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {int filename; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1(struct linux_binprm *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_3->file, VAR_3->filename,
     VAR_1, VAR_0);
 return 0;
}
