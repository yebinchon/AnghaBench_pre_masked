
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (struct vmx*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct vmx*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmx *VAR_20)
{
 int VAR_21, VAR_22;

 VAR_22 = 0;




 VAR_22 += FUNC_0(VAR_20, VAR_5);
 VAR_22 += FUNC_0(VAR_20, VAR_19);
 VAR_22 += FUNC_0(VAR_20, VAR_8);
 VAR_22 += FUNC_0(VAR_20, VAR_16);

 for (VAR_21 = 0; VAR_21 < 8; VAR_21++)
  VAR_22 += FUNC_0(VAR_20, VAR_7 + VAR_21);

 for (VAR_21 = 0; VAR_21 < 8; VAR_21++)
  VAR_22 += FUNC_0(VAR_20, VAR_17 + VAR_21);

 for (VAR_21 = 0; VAR_21 < 8; VAR_21++)
  VAR_22 += FUNC_0(VAR_20, VAR_6 + VAR_21);

 VAR_22 += FUNC_0(VAR_20, VAR_2);
 VAR_22 += FUNC_0(VAR_20, VAR_14);
 VAR_22 += FUNC_0(VAR_20, VAR_13);
 VAR_22 += FUNC_0(VAR_20, VAR_12);
 VAR_22 += FUNC_0(VAR_20, VAR_10);
 VAR_22 += FUNC_0(VAR_20, VAR_11);
 VAR_22 += FUNC_0(VAR_20, VAR_9);
 VAR_22 += FUNC_0(VAR_20, VAR_4);
 VAR_22 += FUNC_0(VAR_20, VAR_0);
 VAR_22 += FUNC_0(VAR_20, VAR_3);







 VAR_22 += FUNC_1(VAR_20, VAR_18);
 VAR_22 += FUNC_1(VAR_20, VAR_1);
 VAR_22 += FUNC_1(VAR_20, VAR_15);

 return (VAR_22);
}
