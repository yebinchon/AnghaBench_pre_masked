
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_state {scalar_t__ niovecs; int iovecs; int fd; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (struct write_state *VAR_0)
{
    if (VAR_0->niovecs) {
 if (FUNC_1 (VAR_0->fd, VAR_0->iovecs, VAR_0->niovecs) < 0)
     FUNC_0 (1, "writev");
 VAR_0->niovecs = 0;
    }
}
