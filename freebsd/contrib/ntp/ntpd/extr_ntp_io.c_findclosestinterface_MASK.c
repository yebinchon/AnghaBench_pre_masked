
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_4__ {scalar_t__ family; int flags; int sin; scalar_t__ ignore_packets; struct TYPE_4__* elink; } ;
typedef TYPE_1__ endpt ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;

endpt *
FUNC_6(
 sockaddr_u * VAR_1,
 int VAR_2
 )
{
 endpt * VAR_3;
 endpt * VAR_4;
 sockaddr_u VAR_5;
 sockaddr_u VAR_6;

 FUNC_2(&VAR_6);
 VAR_4 = ((void*)0);

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->elink) {
  if (VAR_3->ignore_packets ||
      FUNC_0(VAR_1) != VAR_3->family ||
      VAR_2 & VAR_3->flags)
   continue;

  FUNC_3(&VAR_5, VAR_1, &VAR_3->sin);
  if (((void*)0) == VAR_4 ||
      -1 == FUNC_4(&VAR_5, &VAR_6)) {
   VAR_6 = VAR_5;
   VAR_4 = VAR_3;
  }
 }
 if (((void*)0) == VAR_4)
  FUNC_1(4, ("findclosestinterface(%s) failed\n",
       FUNC_5(VAR_1)));
 else
  FUNC_1(4, ("findclosestinterface(%s) -> %s\n",
       FUNC_5(VAR_1), FUNC_5(&VAR_4->sin)));

 return VAR_4;
}
