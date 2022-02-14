
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
typedef int ssize_t ;
typedef TYPE_1__* mqd_t ;
struct TYPE_3__ {int oshandle; } ;


 int FUNC_0 (int ,char*,size_t,unsigned int*,struct timespec const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

ssize_t
FUNC_3(mqd_t VAR_0, char *VAR_1, size_t VAR_2,
 unsigned *VAR_3, const struct timespec *VAR_4)
{
 int VAR_5;

 FUNC_1(1);
 VAR_5 = FUNC_0(VAR_0->oshandle, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_5 == -1);
 return (VAR_5);
}
