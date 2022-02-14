
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pw_name; } ;
typedef int RETSIGTYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,char*,char*,int ) ;

__attribute__((used)) static RETSIGTYPE
FUNC_4(int VAR_4)
{

 FUNC_2(421,
     "Timeout (%d seconds): closing control connection.",
       VAR_1);
 if (VAR_2)
  FUNC_3(VAR_0, "User %s timed out after %d seconds",
      (VAR_3 ? VAR_3 -> pw_name : "unknown"), VAR_1);
 FUNC_1(1);
 FUNC_0(0);
}
