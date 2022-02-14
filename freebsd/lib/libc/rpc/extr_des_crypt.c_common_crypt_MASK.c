
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desparams {int des_key; int des_dir; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,unsigned int,struct desparams*) ;
 int FUNC_2 (char*,unsigned int,struct desparams*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_11, char *VAR_12, unsigned VAR_13, unsigned VAR_14,
    struct desparams *VAR_15)
{
 int VAR_16;

 if ((VAR_13 % 8) != 0 || VAR_13 > VAR_8) {
  return(VAR_1);
 }
 VAR_15->des_dir =
  ((VAR_14 & VAR_6) == VAR_7) ? VAR_10 : VAR_0;

 VAR_16 = VAR_14 & VAR_5;
 FUNC_0(VAR_11, VAR_15->des_key);



 if (&FUNC_1 != ((void*)0)) {
  if (!FUNC_1(VAR_12, VAR_13, VAR_15)) {
   return (VAR_2);
  }
 } else {
  if (!FUNC_2(VAR_12, VAR_13, VAR_15)) {
   return (VAR_2);
  }
 }
 return(VAR_16 == VAR_9 ? VAR_4 : VAR_3);
}
