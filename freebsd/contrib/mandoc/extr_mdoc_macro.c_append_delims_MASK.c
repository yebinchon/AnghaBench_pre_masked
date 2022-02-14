
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {TYPE_1__* last; } ;
typedef enum margserr { ____Placeholder_margserr } margserr ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct roff_man*,int,int,char*,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (struct roff_man*,int,int*,char*,int ,char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct roff_man *VAR_5, int VAR_6, int *VAR_7, char *VAR_8)
{
 char *VAR_9;
 int VAR_10;
 enum margserr VAR_11;

 if (VAR_8[*VAR_7] == '\0')
  return;

 for (;;) {
  VAR_10 = *VAR_7;
  VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_4, &VAR_9);
  if (VAR_11 == VAR_1)
   break;
  FUNC_0(VAR_5, VAR_6, VAR_10, VAR_9, VAR_2, 1);
  if (FUNC_2(VAR_9, FUNC_4(VAR_9)))
   VAR_5->last->flags |= VAR_3;
  if (VAR_11 == VAR_0)
   FUNC_1(VAR_9);
 }
}
