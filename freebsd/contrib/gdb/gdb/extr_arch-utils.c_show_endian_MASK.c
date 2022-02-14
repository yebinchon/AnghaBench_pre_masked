
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_3, int VAR_4)
{
  if (VAR_2)
    FUNC_0 ("The target endianness is set automatically (currently %s endian)\n",
         (VAR_1 == VAR_0 ? "big" : "little"));
  else
    FUNC_0 ("The target is assumed to be %s endian\n",
         (VAR_1 == VAR_0 ? "big" : "little"));
}
