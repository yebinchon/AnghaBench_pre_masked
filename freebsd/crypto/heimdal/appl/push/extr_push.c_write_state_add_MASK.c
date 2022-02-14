
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct write_state {int niovecs; int allociovecs; int maxiovecs; TYPE_1__* iovecs; int fd; } ;
struct TYPE_4__ {size_t iov_len; void* iov_base; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4 (struct write_state *VAR_1, void *VAR_2, size_t VAR_3)
{
    if(VAR_1->niovecs == VAR_1->allociovecs) {
 if(VAR_1->niovecs == VAR_1->maxiovecs) {
     if(FUNC_3 (VAR_1->fd, VAR_1->iovecs, VAR_1->niovecs) < 0)
  FUNC_1(1, "writev");
     VAR_1->niovecs = 0;
 } else {
     VAR_1->allociovecs = FUNC_2(VAR_1->allociovecs + VAR_0, VAR_1->maxiovecs);
     VAR_1->iovecs = FUNC_0 (VAR_1->iovecs,
      VAR_1->allociovecs * sizeof(*VAR_1->iovecs));
 }
    }
    VAR_1->iovecs[VAR_1->niovecs].iov_base = VAR_2;
    VAR_1->iovecs[VAR_1->niovecs].iov_len = VAR_3;
    ++VAR_1->niovecs;
}
