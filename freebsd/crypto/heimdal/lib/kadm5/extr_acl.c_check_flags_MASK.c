
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kadm5_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

__attribute__((used)) static kadm5_ret_t
FUNC_0 (unsigned VAR_13,
      unsigned VAR_14)
{
    unsigned VAR_15 = ~VAR_14 & VAR_13;

    if(VAR_15 & VAR_10)
 return VAR_3;
    if(VAR_15 & VAR_7)
 return VAR_0;
    if(VAR_15 & VAR_12)
 return VAR_6;
    if(VAR_15 & VAR_9)
 return VAR_2;
    if(VAR_15 & VAR_8)
 return VAR_1;
    if(VAR_15 & VAR_11)
 return VAR_5;
    if(VAR_15)
 return VAR_4;
    return 0;
}
