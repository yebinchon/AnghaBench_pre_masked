
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ caddr_t ;
struct TYPE_3__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{
 int VAR_4;

 VAR_2.ifr_data = (caddr_t)&VAR_4;
 if (FUNC_0(VAR_3, VAR_1, &VAR_2) == -1)
  return;
 if (VAR_4 == 0)
  return;
 FUNC_1("\toptions", VAR_4, VAR_0);
 FUNC_2('\n');
}
