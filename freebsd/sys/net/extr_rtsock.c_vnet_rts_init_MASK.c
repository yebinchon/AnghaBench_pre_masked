
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nh_qlimit; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_2;

 if (FUNC_0(VAR_0)) {
  if (FUNC_1("net.route.netisr_maxqlen", &VAR_2))
   VAR_1.nh_qlimit = VAR_2;
  FUNC_2(&VAR_1);
 }




}
