
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* inPollfd; } ;
struct TYPE_4__ {int revents; } ;
typedef TYPE_2__ Job ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(Job *VAR_1)
{
    if (VAR_1->inPollfd == ((void*)0))
 FUNC_0("Polling unwatched job");
    return (VAR_1->inPollfd->revents & VAR_0) != 0;
}
