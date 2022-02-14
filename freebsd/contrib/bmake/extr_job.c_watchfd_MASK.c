
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int events; int fd; } ;
struct TYPE_5__ {TYPE_4__* inPollfd; int inPipe; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void
FUNC_1(Job *VAR_4)
{
    if (VAR_4->inPollfd != ((void*)0))
 FUNC_0("Watching watched job");

    VAR_1[VAR_3].fd = VAR_4->inPipe;
    VAR_1[VAR_3].events = VAR_0;
    VAR_2[VAR_3] = VAR_4;
    VAR_4->inPollfd = &VAR_1[VAR_3];
    VAR_3++;
}
