
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;


typedef enum which { ____Placeholder_which } which ;
struct TYPE_38__ {scalar_t__ lno; } ;
struct TYPE_37__ {int lno; } ;
struct TYPE_44__ {int argc; TYPE_13__ addr2; TYPE_12__ addr1; TYPE_2__** argv; TYPE_1__* cmd; int iflags; } ;
struct TYPE_43__ {char* lastbcomm; } ;
struct TYPE_42__ {char* name; struct TYPE_42__* frp; TYPE_3__* gp; } ;
struct TYPE_41__ {int (* scr_rename ) (TYPE_4__*,char*,int) ;} ;
struct TYPE_40__ {char* bp; int len; } ;
struct TYPE_39__ {char* usage; int name; } ;
typedef TYPE_4__ SCR ;
typedef int MARK ;
typedef TYPE_5__ EX_PRIVATE ;
typedef TYPE_6__ EXCMD ;
typedef char CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,char*,int ,char*,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_4__*,TYPE_6__*,char*,int ,int) ;
 scalar_t__ FUNC_13 (TYPE_4__*,TYPE_6__*,char*,int ) ;
 scalar_t__ FUNC_14 (char) ;
 int FUNC_15 (TYPE_4__*,scalar_t__) ;
 int FUNC_16 (TYPE_4__*,char*,int ) ;
 scalar_t__ FUNC_17 (TYPE_4__*,TYPE_6__*,TYPE_12__*,TYPE_13__*,int *,char*,int ) ;
 int FUNC_18 (TYPE_4__*,char*) ;
 int FUNC_19 (TYPE_4__*,int ,int ) ;
 int FUNC_20 (TYPE_4__*,TYPE_12__*,TYPE_13__*,char*,int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_4__*,char*) ;
 int FUNC_23 (TYPE_4__*,char*,int) ;
 char* FUNC_24 (TYPE_4__*,char*,size_t) ;
 char* FUNC_25 (TYPE_4__*,char*,int ) ;

__attribute__((used)) static int
FUNC_26(SCR *VAR_19, EXCMD *VAR_20, enum which VAR_21)
{
 MARK VAR_22;
 int VAR_23;
 char *VAR_24;
 CHAR_T *VAR_25 = ((void*)0);
 size_t VAR_26;
 char *VAR_27;
 int VAR_28;
 EX_PRIVATE *VAR_29;

 FUNC_8(VAR_19, VAR_20);


 FUNC_6(VAR_12);
 if (FUNC_1(VAR_20->iflags, VAR_3))
  FUNC_7(VAR_11);


 if (VAR_20->argc != 0)
  for (VAR_25 = VAR_20->argv[0]->bp; *VAR_25 != '\0' && FUNC_14(*VAR_25); ++VAR_25);


 if (VAR_20->argc != 0 && VAR_21 == VAR_17 && *VAR_25 == '!') {

  if (FUNC_9(VAR_19, VAR_13)) {
   FUNC_19(VAR_19, VAR_20->cmd->name, VAR_1);
   return (1);
  }


  for (++VAR_25; *VAR_25 && FUNC_14(*VAR_25); ++VAR_25);
  if (*VAR_25 == '\0') {
   FUNC_16(VAR_19, VAR_20->cmd->usage, VAR_2);
   return (1);
  }
  if (FUNC_12(VAR_19, VAR_20, VAR_25, FUNC_10(VAR_25), 1))
   return (1);


  VAR_29 = FUNC_0(VAR_19);
  FUNC_21(VAR_29->lastbcomm);
  VAR_29->lastbcomm = FUNC_25(VAR_19, VAR_20->argv[1]->bp,
      VAR_20->argv[1]->len);







  FUNC_4(VAR_19, VAR_15);






  if (FUNC_17(VAR_19, VAR_20, &VAR_20->addr1,
      &VAR_20->addr2, &VAR_22, VAR_20->argv[1]->bp, VAR_4))
   return (1);


  if (!FUNC_3(VAR_19, VAR_16) && !FUNC_3(VAR_19, VAR_14))
   (void)FUNC_18(VAR_19, "!\n");

  return (0);
 }


 if (VAR_20->addr1.lno <= 1 && !FUNC_15(VAR_19, VAR_20->addr2.lno + 1))
  FUNC_7(VAR_9);


 if (VAR_20->argc != 0 && VAR_21 != VAR_18 && VAR_25[0] == '>' && VAR_25[1] == '>') {
  FUNC_7(VAR_10);


  for (VAR_25 += 2; *VAR_25 && FUNC_14(*VAR_25); ++VAR_25);
 }


 if (VAR_20->argc == 0 || *VAR_25 == '\0')
  return (FUNC_20(VAR_19,
      &VAR_20->addr1, &VAR_20->addr2, ((void*)0), VAR_23));


 if (FUNC_13(VAR_19, VAR_20, VAR_25, FUNC_10(VAR_25)))
  return (1);
 switch (VAR_20->argc) {
 case 0:
 case 1:
  FUNC_11();

 case 2:
  FUNC_5(VAR_19, VAR_20->argv[1]->bp, VAR_20->argv[1]->len+1,
    VAR_27, VAR_26);
  VAR_24 = FUNC_24(VAR_19, VAR_27, VAR_26 - 1);







  if (FUNC_3(VAR_19->frp, VAR_8) &&
      !FUNC_3(VAR_19->frp, VAR_5)) {
   if ((VAR_27 = FUNC_24(VAR_19, VAR_24, VAR_26 - 1)) != ((void*)0)) {
    FUNC_21(VAR_19->frp->name);
    VAR_19->frp->name = VAR_27;
   }
   FUNC_2(VAR_19->frp, VAR_7 | VAR_8);
   FUNC_4(VAR_19->frp, VAR_6 | VAR_5);


   (void)VAR_19->gp->scr_rename(VAR_19, VAR_19->frp->name, 1);
  } else
   FUNC_22(VAR_19, VAR_24);
  break;
 default:
  FUNC_5(VAR_19, VAR_25, FUNC_10(VAR_25) + 1, VAR_27, VAR_26);
  FUNC_16(VAR_19, VAR_27, VAR_0);
  return (1);
 }

 VAR_28 = FUNC_20(VAR_19, &VAR_20->addr1, &VAR_20->addr2, VAR_24, VAR_23);

 FUNC_21(VAR_24);

 return VAR_28;
}
