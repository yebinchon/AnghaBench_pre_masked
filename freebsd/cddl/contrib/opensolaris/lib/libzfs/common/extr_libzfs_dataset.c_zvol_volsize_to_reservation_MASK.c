
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int ) ;

uint64_t
FUNC_5(uint64_t VAR_6, nvlist_t *VAR_7)
{
 uint64_t VAR_8;
 uint64_t VAR_9, VAR_10;
 int VAR_11;
 char *VAR_12;

 if (FUNC_2(VAR_7,
     FUNC_4(VAR_3), &VAR_12) == 0)
  VAR_11 = FUNC_1(VAR_12);
 else
  VAR_11 = 1;
 if (FUNC_3(VAR_7,
     FUNC_4(VAR_4),
     &VAR_10) != 0)
  VAR_10 = VAR_5;
 VAR_9 = VAR_6/VAR_10;

 VAR_8 = 7;

 while (VAR_9 > 1) {
  VAR_9 += VAR_0 - 1;
  VAR_9 /= VAR_0;
  VAR_8 += VAR_9;
 }
 VAR_8 *= FUNC_0(VAR_2, VAR_11 + 1);
 VAR_6 *= VAR_11;





 VAR_8 *= 1ULL << VAR_1;
 VAR_6 += VAR_8;
 return (VAR_6);
}
