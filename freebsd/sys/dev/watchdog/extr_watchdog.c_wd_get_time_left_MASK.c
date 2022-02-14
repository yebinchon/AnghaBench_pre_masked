
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_sec; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,struct timespec*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_4, time_t *VAR_5)
{
 struct timespec VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 if (!VAR_3)
  return (VAR_1);
 *VAR_5 = VAR_6.tv_sec - VAR_2;
 return (0);
}
