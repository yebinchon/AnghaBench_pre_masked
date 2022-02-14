
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int e_c; } ;
typedef int SCR ;
typedef TYPE_1__ EVENT ;
typedef int ARG_CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(
 SCR *VAR_5,
 ARG_CHAR_T VAR_6,
 u_long *VAR_7)
{
 EVENT VAR_8;
 u_long VAR_9, VAR_10;

 VAR_8.e_c = VAR_6;
 VAR_9 = VAR_10 = 0;
 do {




  VAR_10 = VAR_9 * 10 + VAR_8.e_c - '0';
  if (VAR_9 > VAR_10) {

   do {
    if (FUNC_2(VAR_5, 0, &VAR_8,
        VAR_0 | VAR_1) != VAR_2)
     return (1);
   } while (FUNC_0(VAR_8.e_c));
   FUNC_1(VAR_5, VAR_3,
       "235|Number larger than %lu", VAR_4);
   return (1);
  }
  VAR_9 = VAR_10;
  if (FUNC_2(VAR_5, 0, &VAR_8, VAR_0 | VAR_1) != VAR_2)
   return (1);
 } while (FUNC_0(VAR_8.e_c));
 *VAR_7 = VAR_9;
 return (0);
}
