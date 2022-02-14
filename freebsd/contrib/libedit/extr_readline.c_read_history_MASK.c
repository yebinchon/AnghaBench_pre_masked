
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int *,TYPE_1__*,int ,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;

int
FUNC_3(const char *VAR_7)
{
 HistEvent VAR_8;

 if (VAR_5 == ((void*)0) || VAR_3 == ((void*)0))
  FUNC_2();
 if (VAR_7 == ((void*)0) && (VAR_7 = FUNC_0()) == ((void*)0))
  return VAR_4;
 VAR_4 = 0;
 if (FUNC_1(VAR_5, &VAR_8, VAR_2, VAR_7) == -1)
     return VAR_4 ? VAR_4 : VAR_0;
 if (FUNC_1(VAR_5, &VAR_8, VAR_1) == 0)
  VAR_6 = VAR_8.num;
 if (VAR_6 < 0)
  return VAR_0;
 return 0;
}
