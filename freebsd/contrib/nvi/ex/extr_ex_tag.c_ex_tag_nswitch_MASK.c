
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * frp; } ;
struct TYPE_10__ {int * frp; int fname; } ;
typedef TYPE_1__ TAG ;
typedef TYPE_2__ SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int) ;

int
FUNC_5(SCR *VAR_6, TAG *VAR_7, int VAR_8)
{

 if (VAR_7->frp == ((void*)0) && (VAR_7->frp = FUNC_2(VAR_6, VAR_7->fname)) == ((void*)0))
  return (1);


 if (VAR_7->frp == VAR_6->frp)
  return (0);


 if (FUNC_4(VAR_6, VAR_8, VAR_0 | VAR_1))
  return (1);


 if (FUNC_3(VAR_6, VAR_7->frp, ((void*)0), VAR_2))
  return (1);


 FUNC_0(VAR_6, VAR_5);
 FUNC_1(VAR_6, VAR_4);


 FUNC_1(VAR_6, VAR_3);
 return (0);
}
