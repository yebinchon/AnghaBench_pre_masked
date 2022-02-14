
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int token_t ;
struct TYPE_3__ {int s_addr; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, const char *VAR_3)
{
 token_t *VAR_4;

 VAR_1.s_addr = FUNC_2("192.168.100.15");

 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_0, "au_to_in_addr");
 FUNC_3(VAR_2, VAR_3, VAR_4);
}
