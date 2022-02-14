
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef size_t TrEvent ;
struct TYPE_5__ {int pid; int flags; TYPE_1__* node; } ;
struct TYPE_4__ {char* name; int type; } ;
typedef TYPE_2__ Job ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (struct timeval*,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(TrEvent VAR_5, Job *VAR_6)
{
 struct timeval VAR_7;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_3(&VAR_7, ((void*)0));

 FUNC_1(VAR_2, "%lld.%06ld %d %d %d %d",
     (long long)VAR_7.tv_sec, (long)VAR_7.tv_usec,
     VAR_1,
     VAR_0[VAR_5], VAR_3, VAR_4);
 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_2, " %s %d %x %x", VAR_6->node->name,
      VAR_6->pid, VAR_6->flags, VAR_6->node->type);
 }
 FUNC_2('\n', VAR_2);
 FUNC_0(VAR_2);
}
