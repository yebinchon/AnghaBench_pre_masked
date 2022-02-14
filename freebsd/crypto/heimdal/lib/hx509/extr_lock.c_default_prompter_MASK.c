
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int length; } ;
struct TYPE_5__ {TYPE_1__ reply; int prompt; int type; } ;
typedef TYPE_2__ hx509_prompt ;


 scalar_t__ FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_2, const hx509_prompt *VAR_3)
{
    if (FUNC_4(VAR_3->type)) {
 if(FUNC_0(VAR_3->reply.data,
      VAR_3->reply.length,
      VAR_3->prompt,
      0))
     return 1;
    } else {
 char *VAR_4 = VAR_3->reply.data;

 FUNC_3 (VAR_3->prompt, VAR_1);
 FUNC_1 (VAR_1);
 if(FUNC_2(VAR_3->reply.data,
   VAR_3->reply.length,
   VAR_0) == ((void*)0))
     return 1;
 VAR_4[FUNC_5(VAR_4, "\n")] = '\0';
    }
    return 0;
}
