
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int fd; } ;
struct test_file {TYPE_1__ tf_u; scalar_t__ tf_isdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

int
FUNC_1(void *VAR_2, void *VAR_3, uint64_t VAR_4, int VAR_5)
{
 struct test_file *VAR_6 = VAR_3;

 if (VAR_6->tf_isdir)
  return (VAR_0);
 if (FUNC_0(VAR_6->tf_u.fd, VAR_4, VAR_5) < 0)
  return (VAR_1);
 return (0);
}
