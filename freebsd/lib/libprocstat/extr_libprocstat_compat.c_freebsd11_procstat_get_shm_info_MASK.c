
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmstat {int mode; int size; } ;
struct procstat {int dummy; } ;
struct freebsd11_shmstat {int mode; int size; } ;
struct filestat {int dummy; } ;


 int FUNC_0 (struct procstat*,struct filestat*,struct shmstat*,char*) ;

int
FUNC_1(struct procstat *VAR_0,
    struct filestat *VAR_1, struct freebsd11_shmstat *VAR_2, char *VAR_3)
{
 struct shmstat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->size = VAR_4.size;
 VAR_2->mode = VAR_4.mode;
 return (0);
}
