
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int (* c_out ) (char) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 static unsigned VAR_2 = 0x5C2D2F7C;
 static time_t VAR_3 = 0;
 time_t VAR_4;

 VAR_4 = FUNC_2(0);
 if (VAR_4 < (VAR_3 + 1))
  return;




 VAR_3 = VAR_4;
 VAR_0->c_out((char)VAR_2);
 VAR_2 = (VAR_2 >> 8) | ((VAR_2 & (unsigned long)0xFF) << 24);
}
