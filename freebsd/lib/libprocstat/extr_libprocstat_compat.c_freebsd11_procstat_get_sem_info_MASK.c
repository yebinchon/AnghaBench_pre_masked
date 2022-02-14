
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semstat {int mode; int value; } ;
struct procstat {int dummy; } ;
struct freebsd11_semstat {int mode; int value; } ;
struct filestat {int dummy; } ;


 int FUNC_0 (struct procstat*,struct filestat*,struct semstat*,char*) ;

int
FUNC_1(struct procstat *VAR_0,
    struct filestat *VAR_1, struct freebsd11_semstat *VAR_2, char *VAR_3)
{
 struct semstat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->value = VAR_4.value;
 VAR_2->mode = VAR_4.mode;
 return (0);
}
