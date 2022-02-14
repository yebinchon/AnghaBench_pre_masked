
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obp_len; char* obp; } ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(SCR *VAR_0, const char *VAR_1)
{
 EX_PRIVATE *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0);


 for (VAR_3 = VAR_4 = 0; *VAR_1 != '\0'; ++VAR_4) {
  if (VAR_2->obp_len > sizeof(VAR_2->obp))
   (void)FUNC_1(VAR_0);
  if ((VAR_2->obp[VAR_2->obp_len++] = *VAR_1++) == '\n')
   VAR_3 = 1;
 }
 if (VAR_3)
  (void)FUNC_1(VAR_0);
 return (VAR_4);
}
