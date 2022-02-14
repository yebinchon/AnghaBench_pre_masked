
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int clock_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static clock_t
FUNC_3(clock_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 clock_t VAR_7, VAR_8, VAR_9;







 if (VAR_1 && VAR_6 > (VAR_5 / 2))
  VAR_7 = (VAR_0 * VAR_2) / 1000;
 else
  VAR_7 = VAR_0 * VAR_3;

 VAR_9 = FUNC_2();
 VAR_8 = FUNC_0(VAR_9, FUNC_1(VAR_9 + VAR_7, VAR_4 + VAR_7));

 return (VAR_8);
}
