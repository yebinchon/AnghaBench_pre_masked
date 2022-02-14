
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int dummy; } ;
struct timespec {int dummy; } ;


 int FUNC_0 (struct urwlock*,struct timespec*) ;
 scalar_t__ FUNC_1 (struct urwlock*) ;

__attribute__((used)) static inline int
FUNC_2(struct urwlock *VAR_0, struct timespec *VAR_1)
{

 if (FUNC_1(VAR_0) == 0)
  return (0);
 return (FUNC_0(VAR_0, VAR_1));
}
