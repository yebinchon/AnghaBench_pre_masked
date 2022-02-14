
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int * member_2; int * member_1; } ;
typedef TYPE_1__ ns_dtab ;



 int FUNC_0 (int *,TYPE_1__ const*,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void)
{
 static const ns_dtab VAR_1[] = {
  { "test", 128, ((void*)0) },
  { ((void*)0), ((void*)0), ((void*)0) }
 };
 int VAR_2;

 (void)FUNC_1("func1: enter\n");
 VAR_2 = FUNC_0(((void*)0), VAR_1, "test", "test", VAR_0);
 (void)FUNC_1("func1: exit\n");

 return VAR_2;
}
