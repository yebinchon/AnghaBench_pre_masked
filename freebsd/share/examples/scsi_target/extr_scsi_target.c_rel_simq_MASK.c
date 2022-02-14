
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {int func_code; } ;
struct ccb_relsim {scalar_t__ qfrozen_cnt; scalar_t__ release_timeout; scalar_t__ openings; int release_flags; TYPE_1__ ccb_h; } ;
typedef int crs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccb_relsim*,int) ;
 int FUNC_1 (union ccb*,int ) ;

__attribute__((used)) static void
FUNC_2()
{
 struct ccb_relsim VAR_2;

 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.ccb_h.func_code = VAR_1;
 VAR_2.release_flags = VAR_0;
 VAR_2.openings = 0;
 VAR_2.release_timeout = 0;
 VAR_2.qfrozen_cnt = 0;
 FUNC_1((union ccb *)&VAR_2, 0);
}
