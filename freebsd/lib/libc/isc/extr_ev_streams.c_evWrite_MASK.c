
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_12__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ evStreamID ;
typedef int evStreamFunc ;
struct TYPE_13__ {int fd; struct TYPE_13__* next; struct TYPE_13__* prev; int * nextDone; int * prevDone; int file; scalar_t__ flags; void* uap; int func; } ;
typedef TYPE_2__ evStream ;
struct TYPE_14__ {TYPE_2__* streams; } ;
typedef TYPE_3__ evContext_p ;
struct TYPE_15__ {TYPE_3__* opaque; } ;
typedef TYPE_4__ evContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct iovec const*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_4__,int,int ,int ,TYPE_2__*,int *) ;
 int VAR_2 ;

int
FUNC_4(evContext VAR_3, int VAR_4, const struct iovec *VAR_5, int VAR_6,
 evStreamFunc VAR_7, void *VAR_8, evStreamID *VAR_9)
{
 evContext_p *VAR_10 = VAR_3.opaque;
 evStream *VAR_11;
 int VAR_12;

 FUNC_1(VAR_11);
 VAR_11->func = VAR_7;
 VAR_11->uap = VAR_8;
 VAR_11->fd = VAR_4;
 VAR_11->flags = 0;
 if (FUNC_3(VAR_3, VAR_4, VAR_0, VAR_2, VAR_11, &VAR_11->file) < 0)
  goto free;
 if (FUNC_2(VAR_11, VAR_5, VAR_6) < 0)
  goto free;
 VAR_11->prevDone = ((void*)0);
 VAR_11->nextDone = ((void*)0);
 if (VAR_10->streams != ((void*)0))
  VAR_10->streams->prev = VAR_11;
 VAR_11->prev = ((void*)0);
 VAR_11->next = VAR_10->streams;
 VAR_10->streams = VAR_11;
 if (VAR_9 != ((void*)0))
  VAR_9->opaque = VAR_11;
 return (0);
 free:
 VAR_12 = VAR_1;
 FUNC_0(VAR_11);
 VAR_1 = VAR_12;
 return (-1);
}
