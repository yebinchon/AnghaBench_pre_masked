
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {scalar_t__ sim_type; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char*,size_t,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct scard_data *VAR_4,
       unsigned char *VAR_5, size_t VAR_6)
{
 if (VAR_4->sim_type == VAR_2) {
  if (VAR_6 > VAR_1 &&
      !(VAR_5[VAR_1] & VAR_0))
   return 1;
  return 0;
 }

 if (VAR_4->sim_type == VAR_3) {
  int VAR_7;
  if (FUNC_0(VAR_5, VAR_6, &VAR_7, ((void*)0)))
   return -1;


  if (VAR_7 > 0 && (VAR_7 & 0x80))
   return 1;
  return 0;
 }

 return -1;
}
