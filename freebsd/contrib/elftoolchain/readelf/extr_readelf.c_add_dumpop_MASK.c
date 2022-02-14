
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct readelf {int v_dumpop; } ;
struct TYPE_2__ {size_t si; char const* sn; } ;
struct dumpop {int type; int op; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dumpop*,int ) ;
 struct dumpop* FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 struct dumpop* FUNC_3 (struct readelf*,size_t,char const*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct readelf *VAR_3, size_t VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
 struct dumpop *VAR_8;

 if ((VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, -1, VAR_7)) == ((void*)0)) {
  if ((VAR_8 = FUNC_1(1, sizeof(*VAR_8))) == ((void*)0))
   FUNC_2(VAR_1, "calloc failed");
  if (VAR_7 == VAR_0)
   VAR_8->u.si = VAR_4;
  else
   VAR_8->u.sn = VAR_5;
  VAR_8->type = VAR_7;
  VAR_8->op = VAR_6;
  FUNC_0(&VAR_3->v_dumpop, VAR_8, VAR_2);
 } else
  VAR_8->op |= VAR_6;
}
