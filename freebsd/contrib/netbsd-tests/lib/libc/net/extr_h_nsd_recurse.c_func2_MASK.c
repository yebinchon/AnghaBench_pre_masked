
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* member_0; int * member_2; int * member_1; } ;
typedef TYPE_1__ ns_dtab ;



 int FUNC_0 (int *,TYPE_1__ const*,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, void *VAR_2, va_list VAR_3)
{
 static const ns_dtab VAR_4[] = {
  { "test", 128, ((void*)0) },
  { ((void*)0), ((void*)0), ((void*)0) }
 };
 int VAR_5;

 (void)FUNC_1("func2: enter\n");
 VAR_5 = FUNC_0(((void*)0), VAR_4, "test", "test", VAR_0);
 (void)FUNC_1("func2: exit\n");

 return VAR_5;
}
