
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int bw_percent; } ;
struct TYPE_3__ {int bw_percent; } ;
struct node_hfsc_sc {TYPE_2__ m2; TYPE_1__ m1; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (double) ;

void
FUNC_2(const char *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    const struct node_hfsc_sc *VAR_4)
{
 FUNC_0(" %s", VAR_0);

 if (VAR_2 != 0) {
  FUNC_0("(");
  if (VAR_4 != ((void*)0) && VAR_4->m1.bw_percent > 0)
   FUNC_0("%u%%", VAR_4->m1.bw_percent);
  else
   FUNC_0("%s", FUNC_1((double)VAR_1));
  FUNC_0(" %u", VAR_2);
 }

 if (VAR_4 != ((void*)0) && VAR_4->m2.bw_percent > 0)
  FUNC_0(" %u%%", VAR_4->m2.bw_percent);
 else
  FUNC_0(" %s", FUNC_1((double)VAR_3));

 if (VAR_2 != 0)
  FUNC_0(")");
}
