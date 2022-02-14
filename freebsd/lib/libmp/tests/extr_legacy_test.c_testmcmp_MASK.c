
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 int FUNC_1 (char*,int,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const MINT *VAR_1, const MINT *VAR_2, const char *VAR_3)
{

 if (FUNC_0(VAR_1, VAR_2) == 0)
  FUNC_1("ok %d - %s\n", ++VAR_0, VAR_3);
 else
  FUNC_1("not ok - %d %s\n", ++VAR_0, VAR_3);
}
