
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int bp; } ;
struct TYPE_4__ {int iflags; TYPE_2__** argv; } ;
typedef int SCR ;
typedef int FREF ;
typedef TYPE_1__ EXCMD ;
typedef TYPE_2__ ARGS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,char*,size_t) ;
 int VAR_4 ;
 int * FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*) ;

int
FUNC_7(SCR *VAR_5, EXCMD *VAR_6)
{
 ARGS *VAR_7;
 FREF *VAR_8;
 char *VAR_9;
 size_t VAR_10;

 VAR_7 = VAR_6->argv[0];


 FUNC_2(VAR_5, VAR_7->bp, VAR_7->len+1, VAR_9, VAR_10);
 FUNC_6(VAR_5, VAR_9);





 if (FUNC_5(VAR_5, FUNC_0(VAR_6->iflags, VAR_0)))
  return (1);


 FUNC_2(VAR_5, VAR_7->bp, VAR_7->len+1, VAR_9, VAR_10);
 if ((VAR_8 = FUNC_3(VAR_5, VAR_9)) == ((void*)0))
  return (1);


 FUNC_1(VAR_8, VAR_1);


 if (FUNC_4(VAR_5, VAR_8, ((void*)0), VAR_3 |
     (FUNC_0(VAR_6->iflags, VAR_0) ? VAR_2 : 0)))
  return (1);

 FUNC_1(VAR_5, VAR_4);
 return (0);
}
