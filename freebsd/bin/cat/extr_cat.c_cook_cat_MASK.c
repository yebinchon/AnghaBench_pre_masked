
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
typedef int mbstate_t ;
struct TYPE_12__ {int _mbstate; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,TYPE_1__*) ;
 scalar_t__ VAR_13 ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static void
FUNC_16(FILE *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 wint_t VAR_19;


 if (VAR_14 == VAR_10 && FUNC_2(VAR_10))
  FUNC_0(VAR_10);

 VAR_17 = VAR_16 = 0;
 for (VAR_18 = '\n'; (VAR_15 = FUNC_5(VAR_14)) != VAR_1; VAR_18 = VAR_15) {
  if (VAR_18 == '\n') {
   if (VAR_9) {
    if (VAR_15 == '\n') {
     if (VAR_16)
      continue;
     VAR_16 = 1;
    } else
     VAR_16 = 0;
   }
   if (VAR_7) {
    if (!VAR_3 || VAR_15 != '\n') {
     (void)FUNC_4(VAR_11, "%6d\t", ++VAR_17);
     if (FUNC_3(VAR_11))
      break;
    } else if (VAR_4) {
     (void)FUNC_4(VAR_11, "%6s\t", "");
     if (FUNC_3(VAR_11))
      break;
    }
   }
  }
  if (VAR_15 == '\n') {
   if (VAR_4 && FUNC_11('$') == VAR_1)
    break;
  } else if (VAR_15 == '\t') {
   if (VAR_12) {
    if (FUNC_11('^') == VAR_1 || FUNC_11('I') == VAR_1)
     break;
    continue;
   }
  } else if (VAR_13) {
   (void)FUNC_14(VAR_15, VAR_14);




   if ((VAR_19 = FUNC_6(VAR_14)) == VAR_2) {
    if (FUNC_3(VAR_14) && VAR_5 == VAR_0) {
     FUNC_0(VAR_14);

     FUNC_10(&VAR_14->_mbstate, 0, sizeof(mbstate_t));
     if ((VAR_15 = FUNC_5(VAR_14)) == VAR_1)
      break;
     VAR_19 = VAR_15;
     goto ilseq;
    } else
     break;
   }
   if (!FUNC_7(VAR_19) && !FUNC_9(VAR_19)) {
ilseq:
    if (FUNC_11('M') == VAR_1 || FUNC_11('-') == VAR_1)
     break;
    VAR_19 = FUNC_13(VAR_19);
   }
   if (FUNC_8(VAR_19)) {
    VAR_15 = FUNC_13(VAR_19);
    VAR_15 = (VAR_15 == '\177') ? '?' : (VAR_15 | 0100);
    if (FUNC_11('^') == VAR_1 || FUNC_11(VAR_15) == VAR_1)
     break;
    continue;
   }
   if (FUNC_12(VAR_19) == VAR_2)
    break;
   VAR_15 = -1;
   continue;
  }
  if (FUNC_11(VAR_15) == VAR_1)
   break;
 }
 if (FUNC_3(VAR_14)) {
  FUNC_15("%s", VAR_6);
  VAR_8 = 1;
  FUNC_0(VAR_14);
 }
 if (FUNC_3(VAR_11))
  FUNC_1(1, "stdout");
}
