
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,long) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(const char *VAR_3, ufs2_daddr_t VAR_4)
{

 if (VAR_1)
  FUNC_0(VAR_0);
 if (VAR_2 == 0)
  FUNC_2("\n");
 FUNC_1("CANNOT %s: %ld", VAR_3, (long)VAR_4);
 if (FUNC_3("CONTINUE") == 0)
  FUNC_0(VAR_0);
}
