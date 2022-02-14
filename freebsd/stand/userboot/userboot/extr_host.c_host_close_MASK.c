
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {void* f_fsdata; } ;


 int FUNC_0 (int ,void*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1)
{

        FUNC_0(VAR_0, VAR_1->f_fsdata);
 VAR_1->f_fsdata = (void *)0;

 return (0);
}
