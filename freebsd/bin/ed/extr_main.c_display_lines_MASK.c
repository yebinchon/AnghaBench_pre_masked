
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct TYPE_4__* q_forw; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 long FUNC_0 (long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 TYPE_1__* FUNC_1 (long) ;
 char* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,int ,int ,int) ;

int
FUNC_4(long VAR_4, long VAR_5, int VAR_6)
{
 line_t *VAR_7;
 line_t *VAR_8;
 char *VAR_9;

 if (!VAR_4) {
  VAR_3 = "invalid address";
  return VAR_0;
 }
 VAR_8 = FUNC_1(FUNC_0(VAR_5, VAR_1));
 VAR_7 = FUNC_1(VAR_4);
 for (; VAR_7 != VAR_8; VAR_7 = VAR_7->q_forw) {
  if ((VAR_9 = FUNC_2(VAR_7)) == ((void*)0))
   return VAR_0;
  if (FUNC_3(VAR_9, VAR_7->len, VAR_2 = VAR_4++, VAR_6) < 0)
   return VAR_0;
 }
 return 0;
}
