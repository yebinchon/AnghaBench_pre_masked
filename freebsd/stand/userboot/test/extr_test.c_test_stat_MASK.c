
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int st_mode; int st_uid; int st_gid; int st_size; } ;
struct test_file {TYPE_1__ tf_stat; } ;



int
FUNC_0(void *VAR_0, void *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4,
    uint64_t *VAR_5)
{
 struct test_file *VAR_6 = VAR_1;

 *VAR_2 = VAR_6->tf_stat.st_mode;
 *VAR_3 = VAR_6->tf_stat.st_uid;
 *VAR_4 = VAR_6->tf_stat.st_gid;
 *VAR_5 = VAR_6->tf_stat.st_size;
 return (0);
}
