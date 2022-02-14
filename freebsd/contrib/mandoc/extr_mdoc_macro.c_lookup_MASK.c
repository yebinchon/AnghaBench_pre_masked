
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {int flags; int mdocmac; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,char*,char const*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_3(struct roff_man *VAR_5, int VAR_6, int VAR_7, int VAR_8, const char *VAR_9)
{
 enum roff_tok VAR_10;

 if (VAR_5->flags & VAR_3) {
  VAR_5->flags &= ~VAR_3;
  return VAR_4;
 }
 if (VAR_6 == VAR_4 || FUNC_1(VAR_6)->flags & VAR_2) {
  VAR_10 = FUNC_2(VAR_5->mdocmac, VAR_9, 0);
  if (VAR_10 != VAR_4) {
   if (FUNC_1(VAR_10)->flags & VAR_1)
    return VAR_10;
   FUNC_0(VAR_0, VAR_7, VAR_8, "%s", VAR_9);
  }
 }
 return VAR_4;
}
