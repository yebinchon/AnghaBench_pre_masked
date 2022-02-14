
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__** argv; scalar_t__ argc; } ;
struct TYPE_12__ {int re_c; int re_len; int * re; } ;
struct TYPE_11__ {int * bp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ,int *,int *,int *,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *,int *,int ) ;

int
FUNC_4(SCR *VAR_3, EXCMD *VAR_4)
{
 if (VAR_3->re == ((void*)0)) {
  FUNC_1(VAR_3, ((void*)0), VAR_0);
  return (1);
 }
 if (!FUNC_0(VAR_3, VAR_2) && FUNC_2(VAR_3, VAR_3->re,
     VAR_3->re_len, ((void*)0), ((void*)0), &VAR_3->re_c, VAR_1))
  return (1);
 return (FUNC_3(VAR_3,
     VAR_4, VAR_4->argc ? VAR_4->argv[0]->bp : ((void*)0), &VAR_3->re_c, 0));
}
