
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int header ;
typedef int bool_t ;
struct TYPE_4__ {int fbtbc; int last_frag; scalar_t__ nonblock; } ;
typedef TYPE_1__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool_t
FUNC_2(RECSTREAM *VAR_3)
{
 u_int32_t VAR_4;

 if (VAR_3->nonblock)
  return VAR_0;
 if (! FUNC_0(VAR_3, (char *)(void *)&VAR_4, sizeof(VAR_4)))
  return (VAR_0);
 VAR_4 = FUNC_1(VAR_4);
 VAR_3->last_frag = ((VAR_4 & VAR_1) == 0) ? VAR_0 : VAR_2;
 if (VAR_4 == 0)
  return(VAR_0);
 VAR_3->fbtbc = VAR_4 & (~VAR_1);
 return (VAR_2);
}
