
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ bfd; int name; int ifnum; int bcast; struct TYPE_4__* elink; } ;
typedef TYPE_1__ endpt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void)
{
 endpt *VAR_7;

 for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->elink) {
  if (VAR_1 & VAR_7->flags)
   continue;
  if (!(VAR_0 & VAR_7->flags))
   continue;

  if (VAR_7->bfd != VAR_2) {

   FUNC_2(VAR_4,
    "stop listening for broadcasts to %s on interface #%d %s",
    FUNC_3(&VAR_7->bcast), VAR_7->ifnum, VAR_7->name);



   FUNC_0(VAR_7->bfd);
   VAR_7->bfd = VAR_2;
  }
  VAR_7->flags &= ~VAR_0;
 }
 VAR_5 = VAR_3;
}
