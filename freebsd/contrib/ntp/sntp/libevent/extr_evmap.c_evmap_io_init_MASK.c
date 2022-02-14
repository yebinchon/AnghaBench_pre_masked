
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {scalar_t__ nclose; scalar_t__ nwrite; scalar_t__ nread; int events; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct evmap_io *VAR_0)
{
 FUNC_0(&VAR_0->events);
 VAR_0->nread = 0;
 VAR_0->nwrite = 0;
 VAR_0->nclose = 0;
}
