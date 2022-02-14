
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

int
FUNC_6(uint64_t VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_4(VAR_4,
     FUNC_0(VAR_6, VAR_7, (VAR_0+VAR_5*4)));

 if (FUNC_2() || FUNC_3() || FUNC_1())
  VAR_8 |= VAR_1;
 else
  VAR_8 |= VAR_2;

 FUNC_5(VAR_4,
     FUNC_0(VAR_6, VAR_7, (VAR_0 + VAR_5 * 4)),
     VAR_3 | VAR_8);
 FUNC_5(VAR_4,
     FUNC_0(VAR_6, VAR_7, (VAR_0 + VAR_5 * 4)), VAR_8);
 return (0);
}
