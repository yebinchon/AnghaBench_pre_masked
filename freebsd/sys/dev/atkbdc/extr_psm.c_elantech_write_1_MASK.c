
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(KBDC VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = VAR_5 == 2 ? VAR_2 : VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_0) != VAR_3;
 VAR_8 |= FUNC_0(VAR_4, VAR_9) != VAR_3;
 VAR_8 |= FUNC_0(VAR_4, VAR_0) != VAR_3;
 VAR_8 |= FUNC_0(VAR_4, VAR_6) != VAR_3;
 if (VAR_5 == 4) {
  VAR_8 |= FUNC_0(VAR_4, VAR_0) != VAR_3;
  VAR_8 |= FUNC_0(VAR_4, VAR_9) != VAR_3;
 }
 VAR_8 |= FUNC_0(VAR_4, VAR_0) != VAR_3;
 VAR_8 |= FUNC_0(VAR_4, VAR_7) != VAR_3;
 VAR_8 |= FUNC_1(VAR_4, 1) == 0;

 return (VAR_8);
}
