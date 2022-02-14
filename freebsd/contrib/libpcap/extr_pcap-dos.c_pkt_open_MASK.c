
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int flags; } ;
struct TYPE_2__ {int handle; } ;
typedef int PKT_RX_MODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_3 (struct device *VAR_5)
{
  PKT_RX_MODE VAR_6;

  if (VAR_5->flags & VAR_1)
       VAR_6 = VAR_2;
  else VAR_6 = VAR_3;

  if (!FUNC_0(VAR_6))
     return (0);

  FUNC_2 (VAR_4.handle);
  FUNC_1 (VAR_0);
  return (1);
}
