
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comment; int key; } ;
typedef TYPE_1__ Identity ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(Identity *VAR_2)
{
 char *VAR_3;
 int VAR_4 = -1;

 VAR_3 = FUNC_2(VAR_2->key, VAR_1, VAR_0);
 if (VAR_3 != ((void*)0) &&
     FUNC_0("Allow use of key %s?\nKey fingerprint %s.",
     VAR_2->comment, VAR_3))
  VAR_4 = 0;
 FUNC_1(VAR_3);

 return (VAR_4);
}
