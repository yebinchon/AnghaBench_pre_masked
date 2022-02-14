
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_iosched_softc {int flags; int ticker; int sysctl_ctx; scalar_t__ sysctl_tree; int cl; int trim_stats; int write_stats; int read_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cam_iosched_softc*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cam_iosched_softc*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(struct cam_iosched_softc *VAR_3)
{
 if (VAR_3) {
  FUNC_2(VAR_3, ((void*)0), VAR_1);
  FUNC_4(VAR_3, VAR_2);
 }
}
