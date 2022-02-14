
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct timespec FUNC_0 (int ) ;

__attribute__((used)) static __inline uint64_t
FUNC_1(sbintime_t VAR_2)
{
 struct timespec VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 return (VAR_3.tv_sec * VAR_0) +
     (VAR_3.tv_nsec / VAR_1);
}
