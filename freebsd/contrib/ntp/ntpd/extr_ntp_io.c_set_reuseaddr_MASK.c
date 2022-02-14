
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int flag ;
struct TYPE_3__ {int flags; scalar_t__ fd; int sin; int name; struct TYPE_3__* elink; } ;
typedef TYPE_1__ endpt ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,void*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(
 int VAR_6
 )
{

 endpt *VAR_7;

 for (VAR_7 = VAR_5; VAR_7 != ((void*)0); VAR_7 = VAR_7->elink) {
  if (VAR_7->flags & VAR_0)
   continue;





  FUNC_0(4, ("setting SO_REUSEADDR on %.16s@%s to %s\n",
       VAR_7->name, FUNC_3(&VAR_7->sin),
       VAR_6 ? "on" : "off"));

  if (VAR_7->fd != VAR_1) {
   if (FUNC_2(VAR_7->fd, VAR_3, VAR_4,
           (void *)&VAR_6, sizeof(VAR_6))) {
    FUNC_1(VAR_2, "set_reuseaddr: setsockopt(%s, SO_REUSEADDR, %s) failed: %m",
     FUNC_3(&VAR_7->sin), VAR_6 ? "on" : "off");
   }
  }
 }

}
