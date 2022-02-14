
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ board_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4 (device_t VAR_3)
{
     if (FUNC_0()->board_type == VAR_1)
  return (VAR_2);

 if (FUNC_1(VAR_3) != 0) {
                FUNC_3("can't attach more devices\n");
        }

        FUNC_2(VAR_3, "Octeon Compact Flash Driver");

 return (VAR_0);
}
