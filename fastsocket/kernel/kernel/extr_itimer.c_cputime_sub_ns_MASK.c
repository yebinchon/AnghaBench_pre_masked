
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timespec {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int cputime_t ;


 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ FUNC_1 (struct timespec*) ;

__attribute__((used)) static inline u32 FUNC_2(cputime_t VAR_0, s64 VAR_1)
{
 struct timespec VAR_2;
 s64 VAR_3;

 FUNC_0(VAR_0, &VAR_2);
 VAR_3 = FUNC_1(&VAR_2);

 return (VAR_3 <= VAR_1) ? 0 : VAR_3 - VAR_1;
}
