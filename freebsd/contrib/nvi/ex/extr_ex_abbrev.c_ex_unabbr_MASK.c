
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int bp; int len; } ;
struct TYPE_9__ {TYPE_3__** argv; } ;
struct TYPE_8__ {int gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXCMD ;
typedef TYPE_3__ ARGS ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ) ;

int
FUNC_3(SCR *VAR_3, EXCMD *VAR_4)
{
 ARGS *VAR_5;

 VAR_5 = VAR_4->argv[0];
 if (!FUNC_0(VAR_3->gp, VAR_0) ||
     FUNC_2(VAR_3, VAR_5->bp, VAR_5->len, VAR_2)) {
  FUNC_1(VAR_3, VAR_1, VAR_5->bp,
      "109|\"%s\" is not an abbreviation");
  return (1);
 }
 return (0);
}
