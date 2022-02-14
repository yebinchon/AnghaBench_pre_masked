
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int dummy; } ;


 int FUNC_0 (struct tac_handle*,char*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(struct tac_handle *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
  FUNC_0(VAR_0, "Out of memory");
 return VAR_2;
}
