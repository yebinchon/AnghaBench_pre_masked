
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_2) + 1;
 unsigned int VAR_4;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(0);
 VAR_0 += VAR_3;

 VAR_4 = VAR_3 + 110;
 while (VAR_4 & 3) {
  FUNC_1(0);
  VAR_0++;
  VAR_4++;
 }
}
