
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_9__ {char* page; } ;
struct TYPE_8__ {int BSIZE; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int,TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

int
FUNC_2(HTAB *VAR_2, BUFHEAD *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 u_int16_t *VAR_7;
 char *VAR_8;
 int VAR_9;
 u_int16_t VAR_10;
 char *VAR_11;

 VAR_7 = (u_int16_t *)VAR_3->page;
 VAR_8 = VAR_3->page;
 VAR_9 = VAR_6;
 VAR_11 = VAR_5;

 for (VAR_10 = VAR_2->BSIZE - VAR_7[VAR_4];
     VAR_10 <= VAR_6 && VAR_7[VAR_4 + 1] == VAR_0;
     VAR_10 = VAR_2->BSIZE - VAR_7[VAR_4]) {
  if (FUNC_1(VAR_8 + VAR_7[VAR_4], VAR_11, VAR_10))
   return (-2);
  VAR_11 += VAR_10;
  VAR_9 -= VAR_10;
  VAR_3 = FUNC_0(VAR_2, VAR_7[VAR_4 + 2], VAR_3, 0);
  if (!VAR_3)
   return (-3);
  VAR_8 = VAR_3->page;
  VAR_7 = (u_int16_t *)VAR_8;
  VAR_4 = 1;
 }

 if (VAR_10 != VAR_9 || FUNC_1(VAR_8 + VAR_7[VAR_4], VAR_11, VAR_10)) {



  return (-2);
 } else
  return (VAR_4);
}
