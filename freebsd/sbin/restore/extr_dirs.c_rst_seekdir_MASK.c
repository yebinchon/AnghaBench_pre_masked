
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long dd_loc; int dd_buf; int dd_fd; int dd_size; } ;
typedef TYPE_1__ RST_DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,long) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (long,int) ;
 long FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(RST_DIR *VAR_3, long VAR_4, long VAR_5)
{

 if (VAR_4 == FUNC_4(VAR_3))
  return;
 VAR_4 -= VAR_5;
 if (VAR_4 < 0)
  FUNC_0(VAR_2, "bad seek pointer to rst_seekdir %ld\n", VAR_4);
 (void) FUNC_1(VAR_3->dd_fd, VAR_5 + FUNC_3(VAR_4, VAR_0), VAR_1);
 VAR_3->dd_loc = VAR_4 & (VAR_0 - 1);
 if (VAR_3->dd_loc != 0)
  VAR_3->dd_size = FUNC_2(VAR_3->dd_fd, VAR_3->dd_buf, VAR_0);
}
