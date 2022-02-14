
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {int f_fsdata; int * f_dev; } ;


 int FUNC_0 (int ,char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3, struct open_file *VAR_4)
{

 if (VAR_4->f_dev != &VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_2, VAR_3, &VAR_4->f_fsdata));
}
