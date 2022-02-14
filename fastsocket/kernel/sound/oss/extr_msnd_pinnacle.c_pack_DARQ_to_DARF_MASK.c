
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {scalar_t__ io; scalar_t__ base; int DARF; scalar_t__ DARQ; } ;
typedef scalar_t__ LPDAQD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static __inline__ int FUNC_6(register int VAR_11)
{
 register int VAR_12, VAR_13 = 3;
 register WORD VAR_14;
 LPDAQD VAR_15;


 VAR_14 = FUNC_3(VAR_10.DARQ + VAR_9) + FUNC_0(VAR_0);
 if (VAR_14 > FUNC_3(VAR_10.DARQ + VAR_8))
  VAR_14 = 0;
 while (VAR_14 == FUNC_3(VAR_10.DARQ + VAR_7) && VAR_13--)
  FUNC_4(1);
 FUNC_5(VAR_14, VAR_10.DARQ + VAR_9);


 VAR_15 = VAR_11 * VAR_0 + VAR_10.base + VAR_2;


 VAR_12 = FUNC_3(VAR_15 + VAR_1);



 FUNC_2(VAR_5, VAR_10.io + VAR_6);
 FUNC_1(
  &VAR_10.DARF,
  VAR_10.base + VAR_11 * VAR_3,
  VAR_12);
 FUNC_2(VAR_4, VAR_10.io + VAR_6);

 return 1;
}
