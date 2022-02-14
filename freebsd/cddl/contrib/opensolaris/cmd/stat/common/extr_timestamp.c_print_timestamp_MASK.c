
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;
typedef char* time_t ;
typedef int dstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 char* FUNC_3 (int *) ;

void
FUNC_4(uint_t VAR_2)
{
 time_t VAR_3 = FUNC_3(((void*)0));

 if (VAR_2 == VAR_1) {
  (void) FUNC_1("%ld\n", VAR_3);
 } else if (VAR_2 == VAR_0) {
  char VAR_4[64];
  int VAR_5;

  VAR_5 = FUNC_2(VAR_4, sizeof (VAR_4), "%+", FUNC_0(&VAR_3));
  if (VAR_5 > 0)
   (void) FUNC_1("%s\n", VAR_4);
 }
}
