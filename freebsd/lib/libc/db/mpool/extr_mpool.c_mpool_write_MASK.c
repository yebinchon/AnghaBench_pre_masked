
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_6__ {int pgno; int flags; int page; } ;
struct TYPE_5__ {int pagesize; int pgcookie; int (* pgin ) (int ,int,int ) ;int fd; int (* pgout ) (int ,int,int ) ;int pagewrite; } ;
typedef TYPE_1__ MPOOL ;
typedef TYPE_2__ BKT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(MPOOL *VAR_3, BKT *VAR_4)
{
 off_t VAR_5;






 if (VAR_3->pgout)
  (VAR_3->pgout)(VAR_3->pgcookie, VAR_4->pgno, VAR_4->page);

 VAR_5 = VAR_3->pagesize * VAR_4->pgno;
 if (FUNC_0(VAR_3->fd, VAR_4->page, VAR_3->pagesize, VAR_5) != (ssize_t)VAR_3->pagesize)
  return (VAR_1);







 if (VAR_3->pgin)
  (VAR_3->pgin)(VAR_3->pgcookie, VAR_4->pgno, VAR_4->page);

 VAR_4->flags &= ~VAR_0;
 return (VAR_2);
}
