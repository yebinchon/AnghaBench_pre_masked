
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ func_code; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(union ccb *VAR_2)
{
 if (VAR_2->ccb_h.func_code != VAR_1)
  return;

 FUNC_0(VAR_2->ccb_h.path,
     VAR_0,("mmc_proto_debug_out\n"));
}
