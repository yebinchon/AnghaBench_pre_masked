
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adh_trail_fd; int adh_trail_name; int adh_directory; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{


 if (VAR_1->adh_trail_fd == -1) {
  FUNC_3("Sender send read error, but file is not open.");
  return (VAR_0);
 }

 FUNC_0(FUNC_1(VAR_1->adh_trail_fd) == 0);
 VAR_1->adh_trail_fd = -1;

 FUNC_2(1, "Closed file \"%s/%s\".", VAR_1->adh_directory,
     VAR_1->adh_trail_name);

 return (0);
}
