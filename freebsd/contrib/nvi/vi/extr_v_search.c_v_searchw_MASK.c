
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_2__ {size_t klen; int * keyw; } ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,size_t,size_t) ;
 int * FUNC_2 (char*) ;
 size_t FUNC_3 (int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int *,size_t,int ,int ) ;

int
FUNC_9(SCR *VAR_8, VICMD *VAR_9)
{
 size_t VAR_10, VAR_11;
 int VAR_12;
 CHAR_T *VAR_13, *VAR_14;


 VAR_11 = FUNC_5(VAR_8)->klen + FUNC_3(VAR_4, 1)
     + FUNC_3(VAR_6, VAR_2);
 FUNC_1(VAR_8, VAR_13, VAR_10, VAR_11);
 VAR_14 = VAR_13;


 if (FUNC_6(FUNC_5(VAR_8)->keyw[0])) {
  FUNC_4(VAR_14, VAR_3, VAR_4);
  VAR_14 += VAR_4;
 } else if (FUNC_7(FUNC_5(VAR_8)->keyw[0])) {
  FUNC_4(VAR_14, FUNC_2("\\"), 1);
  VAR_14 += 1;
 }

 FUNC_4(VAR_14, FUNC_5(VAR_8)->keyw, FUNC_5(VAR_8)->klen);
 VAR_14 += FUNC_5(VAR_8)->klen;

 if (FUNC_6(VAR_14[-1])) {
  FUNC_4(VAR_14, VAR_5, VAR_6);
  VAR_14 += VAR_6;
 } else {





  FUNC_4(VAR_14, VAR_1, VAR_2);
  VAR_14 += VAR_2;
 }

 VAR_11 = VAR_14 - VAR_13;
 VAR_12 = FUNC_8(VAR_8, VAR_9, VAR_13, VAR_11, VAR_7, VAR_0);

 FUNC_0(VAR_8, VAR_13, VAR_10);
 return (VAR_12);
}
