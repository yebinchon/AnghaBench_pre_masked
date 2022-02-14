
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct TYPE_4__* q_forw; } ;
typedef TYPE_1__ line_t ;
typedef int FILE ;


 long VAR_0 ;
 long VAR_1 ;
 TYPE_1__* FUNC_0 (long) ;
 char* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

long
FUNC_3(FILE *VAR_4, long VAR_5, long VAR_6)
{
 line_t *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8 = 0;
 char *VAR_9;
 int VAR_10;

 for (; VAR_5 && VAR_5 <= VAR_6; VAR_5++, VAR_7 = VAR_7->q_forw) {
  if ((VAR_9 = FUNC_1(VAR_7)) == ((void*)0))
   return VAR_0;
  VAR_10 = VAR_7->len;
  if (VAR_5 != VAR_1 || !VAR_2 || !VAR_3)
   VAR_9[VAR_10++] = '\n';
  if (FUNC_2(VAR_4, VAR_9, VAR_10) < 0)
   return VAR_0;
  VAR_8 += VAR_10;
 }
 return VAR_8;
}
