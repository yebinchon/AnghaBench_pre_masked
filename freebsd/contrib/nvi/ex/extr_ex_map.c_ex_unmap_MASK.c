
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** argv; int iflags; } ;
struct TYPE_4__ {int bp; int len; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;

int
FUNC_3(SCR *VAR_4, EXCMD *VAR_5)
{
 if (FUNC_2(VAR_4, VAR_5->argv[0]->bp, VAR_5->argv[0]->len,
     FUNC_0(VAR_5->iflags, VAR_0) ? VAR_3 : VAR_2)) {
  FUNC_1(VAR_4, VAR_1,
      VAR_5->argv[0]->bp, "135|\"%s\" isn't currently mapped");
  return (1);
 }
 return (0);
}
