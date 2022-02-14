
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int sle64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static inline struct timespec FUNC_2(const sle64 VAR_1)
{
 struct timespec VAR_2;


 u64 VAR_3 = (u64)(FUNC_1(VAR_1) - VAR_0);




 VAR_2.tv_nsec = FUNC_0(VAR_3, 10000000) * 100;
 VAR_2.tv_sec = VAR_3;
 return VAR_2;
}
