
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {int flags; scalar_t__ bfd; scalar_t__ fd; int name; int ifnum; int bcast; int family; scalar_t__ ignore_packets; struct interface* elink; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 struct interface* VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *,int,int ,struct interface*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

void
FUNC_7(void)
{
 FUNC_3(VAR_8,
  "io_setbclient: Broadcast Client disabled by build");

}
