
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(void)
{
 u64 VAR_2;
 FUNC_0(&VAR_1);
 VAR_2 = VAR_0;
 if (VAR_0 == (~0ULL))
  VAR_0 = 1;
 else
  VAR_0++;
 FUNC_1(&VAR_1);
 return VAR_2;
}
