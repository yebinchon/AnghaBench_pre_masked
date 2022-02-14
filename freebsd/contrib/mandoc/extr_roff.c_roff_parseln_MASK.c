
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct roff {TYPE_4__* man; int * tbl; TYPE_2__* last; int * eqn; int escape; scalar_t__ eqn_inline; TYPE_1__* last_eqn; } ;
struct buf {char* buf; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_8__ {int next; int * last; } ;
struct TYPE_7__ {int (* text ) (struct roff*,int,struct buf*,int,int,int,int*) ;int (* sub ) (struct roff*,int,struct buf*,int,int,int,int*) ;int (* proc ) (struct roff*,int,struct buf*,int,int,int,int*) ;} ;
struct TYPE_6__ {int tok; } ;
struct TYPE_5__ {scalar_t__ delim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int,int,char*,...) ;
 int FUNC_3 (TYPE_4__*,int,int *) ;
 int FUNC_4 (struct roff*,struct buf*,int) ;
 int FUNC_5 (struct roff*,struct buf*,int,int,int ) ;
 int FUNC_6 (struct roff*,char*,int*) ;
 int FUNC_7 (struct roff*,char*,int*,int,int) ;
 int FUNC_8 (struct roff*,struct buf*,int,int*) ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 TYPE_3__* VAR_18 ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct roff*,int,struct buf*,int,int,int,int*) ;
 int FUNC_11 (struct roff*,int,struct buf*,int,int,int,int*) ;
 int FUNC_12 (struct roff*,int,struct buf*,int,int,int,int*) ;
 int FUNC_13 (int *,int,char*,int) ;

int
FUNC_14(struct roff *VAR_19, int VAR_20, struct buf *VAR_21, int *VAR_22)
{
 enum roff_tok VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;

 VAR_27 = VAR_25 = *VAR_22;



 if (VAR_19->tbl == ((void*)0) &&
     VAR_19->last_eqn != ((void*)0) && VAR_19->last_eqn->delim &&
     (VAR_19->eqn == ((void*)0) || VAR_19->eqn_inline)) {
  VAR_24 = FUNC_4(VAR_19, VAR_21, VAR_25);
  if (VAR_24 == VAR_8)
   return VAR_24;
  FUNC_0(VAR_24 == VAR_2);
 }



 VAR_24 = FUNC_5(VAR_19, VAR_21, VAR_20, VAR_25, VAR_19->escape);
 if ((VAR_24 & VAR_6) == VAR_5)
  return VAR_24;
 FUNC_0(VAR_24 == VAR_2);

 VAR_28 = FUNC_6(VAR_19, VAR_21->buf, &VAR_25);
 if (VAR_19->last != ((void*)0) && ! VAR_28) {
  VAR_23 = VAR_19->last->tok;
  VAR_24 = (*VAR_18[VAR_23].text)(VAR_19, VAR_23, VAR_21, VAR_20, VAR_25, VAR_25, VAR_22);
  if ((VAR_24 & VAR_6) == VAR_5)
   return VAR_24;
  VAR_24 &= ~VAR_6;
 } else
  VAR_24 = VAR_5;
 if (VAR_19->eqn != ((void*)0) && FUNC_9(VAR_21->buf + VAR_27, ".EN", 3)) {
  FUNC_1(VAR_19->eqn, VAR_21->buf + VAR_27);
  return VAR_24;
 }
 if (VAR_19->tbl != ((void*)0) && (VAR_28 == 0 || VAR_21->buf[VAR_25] == '\0')) {
  FUNC_13(VAR_19->tbl, VAR_20, VAR_21->buf, VAR_27);
  FUNC_3(VAR_19->man, VAR_20, VAR_19->tbl);
  return VAR_24;
 }
 if ( ! VAR_28)
  return FUNC_8(VAR_19, VAR_21, VAR_25, VAR_22) | VAR_24;



 if (VAR_21->buf[VAR_25] == '"') {
  FUNC_2(VAR_0, VAR_20, VAR_25, ((void*)0));
  return VAR_5;
 } else if (VAR_21->buf[VAR_25] == '\0')
  return VAR_5;







 if (VAR_19->last) {
  VAR_23 = VAR_19->last->tok;
  return (*VAR_18[VAR_23].sub)(VAR_19, VAR_23, VAR_21, VAR_20, VAR_27, VAR_25, VAR_22);
 }



 VAR_26 = VAR_25;
 VAR_23 = FUNC_7(VAR_19, VAR_21->buf, &VAR_25, VAR_20, VAR_27);



 if (VAR_19->tbl != ((void*)0) && (VAR_23 == VAR_15 || VAR_23 == VAR_10 ||
     VAR_23 == VAR_11 || VAR_23 == VAR_12 || VAR_23 == VAR_13 || VAR_23 == VAR_14)) {
  FUNC_2(VAR_1,
      VAR_20, VAR_25, "%s", VAR_21->buf + VAR_26);
  if (VAR_23 != VAR_15)
   return VAR_5;
  while (VAR_21->buf[VAR_25] != '\0' && VAR_21->buf[VAR_25] != ' ')
   VAR_25++;
  while (VAR_21->buf[VAR_25] == ' ')
   VAR_25++;
  FUNC_13(VAR_19->tbl, VAR_20, VAR_21->buf, VAR_25);
  FUNC_3(VAR_19->man, VAR_20, VAR_19->tbl);
  return VAR_5;
 }



 if (VAR_28 && VAR_17 != ((void*)0) &&
     (VAR_23 == VAR_15 || VAR_23 == VAR_3 || VAR_23 == VAR_4 ||
      VAR_23 == VAR_9 || VAR_23 == VAR_10)) {
  VAR_19->man->last = VAR_17;
  VAR_19->man->next = VAR_7;
  VAR_16 = 0;
  VAR_17 = ((void*)0);
 }






 if (VAR_23 == VAR_15)
  return VAR_2;



 return (*VAR_18[VAR_23].proc)(VAR_19, VAR_23, VAR_21, VAR_20, VAR_26, VAR_25, VAR_22);
}
