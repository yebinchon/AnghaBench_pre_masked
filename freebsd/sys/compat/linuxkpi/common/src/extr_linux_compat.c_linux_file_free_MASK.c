
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_file {int * _file; int * f_shmem; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct linux_file*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct linux_file *VAR_1)
{
 if (VAR_1->_file == ((void*)0)) {
  if (VAR_1->f_shmem != ((void*)0))
   FUNC_2(VAR_1->f_shmem);
  FUNC_1(VAR_1);
 } else {




  FUNC_0(VAR_1->_file, VAR_0);
 }
}
