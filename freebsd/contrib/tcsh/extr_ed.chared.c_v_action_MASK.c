
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;
typedef int CCRETVAL ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static CCRETVAL
FUNC_1(int VAR_15)
{
    Char *VAR_16, *VAR_17;

    if (VAR_0 == VAR_8) {
 VAR_0 = VAR_10;
 VAR_1 = 0;

 VAR_14 = 0;
 VAR_17 = VAR_12;
 for (VAR_16 = VAR_6; VAR_16 < VAR_7; VAR_16++) {
     *VAR_17++ = *VAR_16;
     VAR_14++;
 }

 VAR_11 = VAR_9;
 VAR_13 = VAR_6;
 VAR_7 = VAR_6;
 VAR_5 = VAR_6;
 if (VAR_15 & VAR_9)
     FUNC_0(0);

 return(VAR_4);
    }



 VAR_1 = VAR_5;
 VAR_0 = VAR_15;
 return(VAR_2);
}
