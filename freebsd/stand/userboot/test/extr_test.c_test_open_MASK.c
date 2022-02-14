
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; int dir; } ;
struct TYPE_4__ {int st_mode; } ;
struct test_file {int tf_isdir; TYPE_1__ tf_u; TYPE_2__ tf_stat; int tf_size; } ;
struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct test_file*) ;
 int VAR_5 ;
 struct test_file* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,TYPE_2__*) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*) ;

int
FUNC_10(void *VAR_6, const char *VAR_7, void **VAR_8)
{
 struct stat VAR_9;
 struct test_file *VAR_10;
 char VAR_11[VAR_3];

 if (!VAR_5)
  return (VAR_1);

 FUNC_8(VAR_11, VAR_5, VAR_3);
 if (VAR_11[FUNC_9(VAR_11) - 1] == '/')
  VAR_11[FUNC_9(VAR_11) - 1] = 0;
 FUNC_7(VAR_11, VAR_7, VAR_3);
 VAR_10 = FUNC_3(sizeof(struct test_file));
 if (FUNC_6(VAR_11, &VAR_10->tf_stat) < 0) {
  FUNC_2(VAR_10);
  return (VAR_4);
 }

 VAR_10->tf_size = VAR_9.st_size;
 if (FUNC_0(VAR_10->tf_stat.st_mode)) {
  VAR_10->tf_isdir = 1;
  VAR_10->tf_u.dir = FUNC_5(VAR_11);
  if (!VAR_10->tf_u.dir)
   goto out;
                *VAR_8 = VAR_10;
  return (0);
 }
 if (FUNC_1(VAR_10->tf_stat.st_mode)) {
  VAR_10->tf_isdir = 0;
  VAR_10->tf_u.fd = FUNC_4(VAR_11, VAR_2);
  if (VAR_10->tf_u.fd < 0)
   goto out;
                *VAR_8 = VAR_10;
  return (0);
 }

out:
 FUNC_2(VAR_10);
 return (VAR_0);
}
