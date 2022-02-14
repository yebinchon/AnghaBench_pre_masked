
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int sockaddr_u ;
struct TYPE_6__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_7__ {int * fp; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

void
FUNC_6(
 sockaddr_u *VAR_3,
 const char *VAR_4
 )
{
 l_fp VAR_5;
 u_long VAR_6;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_5);
 FUNC_1(&VAR_1, VAR_5.l_ui);
 VAR_6 = VAR_5.l_ui / 86400 + VAR_0;
 VAR_5.l_ui %= 86400;
 if (VAR_1.fp != ((void*)0)) {
  FUNC_2(VAR_1.fp, "%lu %d %d %s\n", VAR_6,
      FUNC_5(&VAR_5, 3), FUNC_4(VAR_3), VAR_4);
  FUNC_0(VAR_1.fp);
 }
}
