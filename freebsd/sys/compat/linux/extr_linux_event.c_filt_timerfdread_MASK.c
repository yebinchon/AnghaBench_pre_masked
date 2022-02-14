
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd {scalar_t__ tfd_count; } ;
struct knote {struct timerfd* kn_hook; } ;



__attribute__((used)) static int
FUNC_0(struct knote *VAR_0, long VAR_1)
{
 struct timerfd *VAR_2 = VAR_0->kn_hook;

 return (VAR_2->tfd_count > 0);
}
