
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tarfile {scalar_t__ tf_fp; scalar_t__ tf_size; scalar_t__ tf_cachesz; int tf_cache; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_0)
{
 struct tarfile *VAR_1;

 VAR_1 = (struct tarfile *)VAR_0->f_fsdata;
 if (VAR_1 == ((void*)0))
  return (0);




 if (VAR_1->tf_fp == VAR_1->tf_size && VAR_1->tf_cachesz > 0) {
  FUNC_0(VAR_1->tf_cache);
  VAR_1->tf_cachesz = 0;
 }
 return (0);
}
