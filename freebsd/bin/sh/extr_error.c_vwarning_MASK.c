
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3, va_list VAR_4)
{
 if (VAR_1)
  FUNC_2(VAR_2, "%s: ", VAR_1);
 else if (VAR_0)
  FUNC_2(VAR_2, "%s: ", VAR_0);
 FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_1("\n");
}
