
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* version_addendum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,char*,int ,int ,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_7, int VAR_8)
{

 FUNC_6(&VAR_3, "SSH-%d.%d-%.100s%s%s\n",
     VAR_0, VAR_1, VAR_2,
     *VAR_5.version_addendum == '\0' ? "" : " ",
     VAR_5.version_addendum);
 if (FUNC_0(VAR_6, VAR_7, VAR_3,
     FUNC_5(VAR_3)) != FUNC_5(VAR_3))
  FUNC_3("write: %.100s", FUNC_4(VAR_4));
 FUNC_1(VAR_3);
 FUNC_2("Local version string %.100s", VAR_3);
}
