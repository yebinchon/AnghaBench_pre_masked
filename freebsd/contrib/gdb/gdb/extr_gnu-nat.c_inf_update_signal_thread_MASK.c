
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inf {TYPE_1__* threads; int signal_thread; } ;
struct TYPE_2__ {int next; } ;



__attribute__((used)) static void
FUNC_0 (struct inf *VAR_0)
{


  VAR_0->signal_thread = VAR_0->threads ? VAR_0->threads->next : 0;
}
