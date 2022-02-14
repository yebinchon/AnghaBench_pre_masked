
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int token_t ;
struct TYPE_3__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, const char *VAR_4)
{
 token_t *VAR_5;

 VAR_2.s_addr = FUNC_2("192.168.100.15");

 VAR_5 = FUNC_0(&VAR_2);
 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_1, "au_to_in_addr");
 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_0);
}
