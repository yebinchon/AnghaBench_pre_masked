
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_man {int flags; TYPE_2__* last; } ;
typedef enum mdelim { ____Placeholder_mdelim } mdelim ;
struct TYPE_4__ {scalar_t__ type; char const* string; int flags; TYPE_1__* parent; } ;
struct TYPE_3__ {scalar_t__ tok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct roff_man*,int,int,char const*) ;
 int FUNC_2 (struct roff_man*,char const*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_12, int VAR_13, int VAR_14, const char *VAR_15,
  enum mdelim VAR_16, int VAR_17)
{

 if (VAR_16 == VAR_1)
  VAR_16 = FUNC_0(VAR_15);

 if (VAR_17 &&
     ! (VAR_12->flags & (VAR_8 | VAR_5 | VAR_7)) &&
     VAR_16 == VAR_2 && VAR_12->last->type == VAR_11 &&
     FUNC_0(VAR_12->last->string) == VAR_2) {
  FUNC_2(VAR_12, VAR_15);
  return;
 }

 FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15);
 if (VAR_16 == VAR_3)
  VAR_12->last->flags |= VAR_10;
 else if (VAR_16 == VAR_0 &&
     ! (VAR_12->flags & VAR_6) &&
     VAR_12->last->parent->tok != VAR_4)
  VAR_12->last->flags |= VAR_9;
 VAR_12->flags &= ~VAR_6;
}
