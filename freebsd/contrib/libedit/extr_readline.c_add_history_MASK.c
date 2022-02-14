
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;

int
FUNC_2(const char *VAR_7)
{
 HistEvent VAR_8;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_1();

 if (FUNC_0(VAR_3, &VAR_8, VAR_0, VAR_7) == -1)
  return 0;

 (void)FUNC_0(VAR_3, &VAR_8, VAR_1);
 if (VAR_8.num == VAR_5)
  VAR_4++;
 else {
  VAR_6++;
  VAR_5 = VAR_8.num;
 }
 return 0;
}
