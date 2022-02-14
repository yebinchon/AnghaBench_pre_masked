
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {int flags; TYPE_1__* last; int next; } ;
struct TYPE_2__ {scalar_t__ tok; scalar_t__ type; int flags; int string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct roff_man*,int,int,char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,int,int,int *) ;
 int FUNC_5 (struct roff_man*,int,int,int ) ;
 int FUNC_6 (struct roff_man*,int,int,char*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct roff_man *VAR_11, int VAR_12, char *VAR_13, int VAR_14)
{
 int VAR_15;
 char *VAR_16;



 if (VAR_11->flags & VAR_9) {
  FUNC_6(VAR_11, VAR_12, VAR_14, VAR_13 + VAR_14);
  FUNC_1(VAR_11, VAR_12, VAR_14, VAR_13 + VAR_14);
  return 1;
 }

 for (VAR_15 = VAR_14; VAR_13[VAR_15] == ' '; VAR_15++)
                                 ;







 if (VAR_13[VAR_15] == '\0') {
  if (VAR_11->flags & (VAR_3 | VAR_2)) {
   FUNC_4(VAR_0, VAR_12, 0, ((void*)0));
   return 1;
  }
  if (VAR_11->last->tok == VAR_4 || VAR_11->last->tok == VAR_5)
   return 1;
  if (VAR_11->last->type == VAR_7 &&
      ((VAR_16 = FUNC_2(VAR_11->last->string)) != ((void*)0))) {
   *VAR_16 = '\0';
   return 1;
  }
  FUNC_5(VAR_11, VAR_12, VAR_14, VAR_10);
  VAR_11->next = VAR_8;
  return 1;
 }






 VAR_15 = (int)FUNC_7(VAR_13);
 FUNC_0(VAR_15);

 if (' ' == VAR_13[VAR_15 - 1] || '\t' == VAR_13[VAR_15 - 1]) {
  if (VAR_15 > 1 && '\\' != VAR_13[VAR_15 - 2])
   FUNC_4(VAR_1, VAR_12, VAR_15 - 1, ((void*)0));

  for (--VAR_15; VAR_15 && ' ' == VAR_13[VAR_15]; VAR_15--)
                                 ;


  VAR_15 += '\\' == VAR_13[VAR_15] ? 2 : 1;

  VAR_13[VAR_15] = '\0';
 }
 FUNC_6(VAR_11, VAR_12, VAR_14, VAR_13 + VAR_14);







 FUNC_0(VAR_15);
 if (FUNC_3(VAR_13, (size_t)VAR_15))
  VAR_11->last->flags |= VAR_6;

 FUNC_1(VAR_11, VAR_12, VAR_14, VAR_13 + VAR_14);
 return 1;
}
