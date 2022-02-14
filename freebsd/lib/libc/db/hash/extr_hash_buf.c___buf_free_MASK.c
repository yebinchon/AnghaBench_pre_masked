
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; struct TYPE_11__* prev; struct TYPE_11__* page; scalar_t__ addr; } ;
struct TYPE_10__ {int BSIZE; TYPE_2__ bufhead; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

int
FUNC_5(HTAB *VAR_2, int VAR_3, int VAR_4)
{
 BUFHEAD *VAR_5;


 if (!VAR_1)
  return (0);
 for (VAR_5 = VAR_1; VAR_5 != &VAR_2->bufhead;) {

  if (VAR_5->addr || FUNC_1(VAR_5->flags)) {
   if (VAR_4 && (VAR_5->flags & VAR_0) &&
       FUNC_2(VAR_2, VAR_5->page,
       VAR_5->addr, FUNC_1(VAR_5->flags), 0))
    return (-1);
  }

  if (VAR_3) {
   if (VAR_5->page) {
    (void)FUNC_4(VAR_5->page, 0, VAR_2->BSIZE);
    FUNC_3(VAR_5->page);
   }
   FUNC_0(VAR_5);
   FUNC_3(VAR_5);
   VAR_5 = VAR_1;
  } else
   VAR_5 = VAR_5->prev;
 }
 return (0);
}
