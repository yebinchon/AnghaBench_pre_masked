
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_6__ {int flags; int name; int ifnum; int sin; int bcast; int mask; scalar_t__ ignore_packets; struct TYPE_6__* elink; } ;
typedef TYPE_1__ endpt ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_11 (int *,int,int) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

endpt *
FUNC_14(
 sockaddr_u *VAR_4
 )
{
 endpt * VAR_5;

 VAR_5 = ((void*)0);
 if (((void*)0) == VAR_5) {
  FUNC_2(4, ("No bcast interface found for %s\n",
       FUNC_13(VAR_4)));
  VAR_5 = FUNC_1(VAR_4);
 } else {
  FUNC_2(4, ("Found bcast-/mcast- interface index #%d %s\n",
       VAR_5->ifnum, VAR_5->name));
 }

 return VAR_5;
}
