
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
typedef int buf ;


 int* VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (struct termp*,int,size_t) ;
 int FUNC_2 (struct termp*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_1, int VAR_2, size_t VAR_3)
{
 char VAR_4[12];

 if ((VAR_2 = VAR_0[VAR_2]) > 127) {
  (void)FUNC_0(VAR_4, sizeof(VAR_4), "\\[u%04x]", VAR_2);
  FUNC_2(VAR_1, VAR_4, VAR_3);
 } else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
