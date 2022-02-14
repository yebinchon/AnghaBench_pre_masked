
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int dir; } ;
struct test_file {TYPE_1__ tf_u; scalar_t__ tf_isdir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct test_file*) ;

int
FUNC_3(void *VAR_0, void *VAR_1)
{
 struct test_file *VAR_2 = VAR_1;

 if (VAR_2->tf_isdir)
  FUNC_1(VAR_2->tf_u.dir);
 else
  FUNC_0(VAR_2->tf_u.fd);
 FUNC_2(VAR_2);

 return (0);
}
