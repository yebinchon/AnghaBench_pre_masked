
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ seq_t ;
struct TYPE_16__ {int argc; TYPE_2__** argv; int iflags; } ;
struct TYPE_15__ {TYPE_1__* gp; } ;
struct TYPE_14__ {char* bp; int len; } ;
struct TYPE_13__ {int (* scr_fmap ) (TYPE_3__*,scalar_t__,char*,int ,char*,int ) ;} ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EXCMD ;
typedef char CHAR_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,char) ;
 int FUNC_2 (TYPE_3__*,char) ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (TYPE_3__*,int ,char*,...) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*,int *,int ,char*,int ,char*,int ,scalar_t__,int) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,char*,int ,char*,int ) ;

int
FUNC_9(SCR *VAR_7, EXCMD *VAR_8)
{
 seq_t VAR_9;
 CHAR_T *VAR_10, *VAR_11;

 VAR_9 = FUNC_0(VAR_8->iflags, VAR_0) ? VAR_5 : VAR_3;

 switch (VAR_8->argc) {
 case 0:
  if (FUNC_6(VAR_7, VAR_9, 1) == 0)
   FUNC_5(VAR_7, VAR_2, VAR_9 == VAR_5 ?
       "132|No input map entries" :
       "133|No command map entries");
  return (0);
 case 2:
  VAR_10 = VAR_8->argv[0]->bp;
  break;
 default:
  FUNC_3();
 }







 if (VAR_10[0] == '#' && FUNC_4(VAR_10[1])) {
  for (VAR_11 = VAR_10 + 2; FUNC_4(*VAR_11); ++VAR_11);
  if (VAR_11[0] != '\0')
   goto nofunc;

  if (FUNC_7(VAR_7, ((void*)0), 0, VAR_10, VAR_8->argv[0]->len,
      VAR_8->argv[1]->bp, VAR_8->argv[1]->len, VAR_9,
      VAR_4 | VAR_6))
   return (1);
  return (VAR_7->gp->scr_fmap == ((void*)0) ? 0 :
      VAR_7->gp->scr_fmap(VAR_7, VAR_9, VAR_10, VAR_8->argv[0]->len,
      VAR_8->argv[1]->bp, VAR_8->argv[1]->len));
 }


nofunc: if (VAR_9 == VAR_3 && VAR_10[1] == '\0')
  switch (FUNC_2(VAR_7, VAR_10[0])) {
  case 130:
  case 129:
  case 128:
   FUNC_5(VAR_7, VAR_1,
       "134|The %s character may not be remapped",
       FUNC_1(VAR_7, VAR_10[0]));
   return (1);
  }
 return (FUNC_7(VAR_7, ((void*)0), 0, VAR_10, VAR_8->argv[0]->len,
     VAR_8->argv[1]->bp, VAR_8->argv[1]->len, VAR_9, VAR_6));
}
