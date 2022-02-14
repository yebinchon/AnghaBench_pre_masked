
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int token_t ;
struct TYPE_3__ {int machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (char const*,char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_10, const char *VAR_11)
{
 token_t *VAR_12;

 VAR_9.machine = FUNC_2("127.0.0.1");

 VAR_12 = FUNC_0(VAR_2, VAR_4,
     VAR_3, VAR_7, VAR_6, VAR_5,
     VAR_8, &VAR_9);
 if (VAR_12 == ((void*)0))
  FUNC_1(VAR_1, "au_ti_process64");
 FUNC_3(VAR_10, VAR_11, VAR_12, VAR_0);
}
