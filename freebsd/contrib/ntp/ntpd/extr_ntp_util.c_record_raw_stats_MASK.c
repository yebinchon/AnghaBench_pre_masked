
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int32 ;
typedef int u_char ;
typedef int sockaddr_u ;
struct TYPE_10__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_11__ {int * fp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_7__ VAR_1 ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;

void
FUNC_7(
 sockaddr_u *VAR_3,
 sockaddr_u *VAR_4,
 l_fp *VAR_5,
 l_fp *VAR_6,
 l_fp *VAR_7,
 l_fp *VAR_8,
 int VAR_9,
 int VAR_10,
 int VAR_11,
 int VAR_12,
 int VAR_13,
 int VAR_14,
 double VAR_15,
 double VAR_16,
 u_int32 VAR_17,
 int VAR_18,
 u_char *VAR_19
 )
{
 l_fp VAR_20;
 u_long VAR_21;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_20);
 FUNC_1(&VAR_1, VAR_20.l_ui);
 VAR_21 = VAR_20.l_ui / 86400 + VAR_0;
 VAR_20.l_ui %= 86400;
 if (VAR_1.fp != ((void*)0)) {
  FUNC_2(VAR_1.fp, "%lu %d %s %s %d %d %d %d %d %d %d %d %d %d %.6f %.6f %d",
      VAR_21, FUNC_6(&VAR_20, 3),
      VAR_3 ? FUNC_5(VAR_3) : "-",
      VAR_4 ? FUNC_5(VAR_4) : "-",
      FUNC_6(VAR_5, 9), FUNC_6(VAR_6, 9),
      FUNC_6(VAR_7, 9), FUNC_6(VAR_8, 9),
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_16, FUNC_4(VAR_17, VAR_12));
  if (VAR_18 > 0) {
   int VAR_22;

   FUNC_2(VAR_1.fp, " %d: ", VAR_18);
   for (VAR_22 = 0; VAR_22 < VAR_18; ++VAR_22) {
    FUNC_2(VAR_1.fp, "%02x", VAR_19[VAR_22]);
   }
  }
  FUNC_2(VAR_1.fp, "\n");
  FUNC_0(VAR_1.fp);
 }
}
