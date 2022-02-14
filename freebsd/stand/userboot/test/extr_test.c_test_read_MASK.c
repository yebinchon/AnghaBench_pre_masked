
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct test_file {TYPE_1__ tf_u; scalar_t__ tf_isdir; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,void*,size_t) ;

int
FUNC_1(void *VAR_1, void *VAR_2, void *VAR_3, size_t VAR_4, size_t *VAR_5)
{
 struct test_file *VAR_6 = VAR_2;
 ssize_t VAR_7;

 if (VAR_6->tf_isdir)
  return (VAR_0);
 VAR_7 = FUNC_0(VAR_6->tf_u.fd, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return (VAR_0);
 *VAR_5 = VAR_4 - VAR_7;
 return (0);
}
