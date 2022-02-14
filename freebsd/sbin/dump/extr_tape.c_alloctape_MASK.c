
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct req {int dummy; } ;
struct TYPE_3__ {char** tblock; int count; scalar_t__ firstrec; scalar_t__ tapea; struct req* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int) ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_2(void)
{
 int VAR_13 = FUNC_0() - 1;
 char *VAR_14;
 int VAR_15;

 VAR_12 = VAR_6 * VAR_1;
 VAR_7 = (VAR_6 + 1) * sizeof(struct req);






 if (VAR_2 == 0 && !VAR_11)
  VAR_10 = VAR_12 / VAR_4 +
      (VAR_3 ? 16 : VAR_4 == 625 ? 5 : 8);





 for (VAR_15 = 0; VAR_15 <= VAR_0; VAR_15++) {
  VAR_14 = (char *)
      FUNC_1((unsigned)(VAR_7 + VAR_12 + VAR_13 + VAR_1));
  if (VAR_14 == ((void*)0))
   return(0);
  VAR_8[VAR_15].tblock = (char (*)[VAR_1])
      (((long)&VAR_14[VAR_6 + 1] + VAR_13) &~ VAR_13);
  VAR_8[VAR_15].req = (struct req *)VAR_8[VAR_15].tblock - VAR_6 - 1;
 }
 VAR_9 = &VAR_8[0];
 VAR_9->count = 1;
 VAR_9->tapea = 0;
 VAR_9->firstrec = 0;
 VAR_5 = VAR_9->tblock;
 return(1);
}
