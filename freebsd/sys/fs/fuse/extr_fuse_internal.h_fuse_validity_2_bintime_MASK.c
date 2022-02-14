
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct bintime {scalar_t__ sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*,struct bintime*) ;
 int FUNC_2 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static inline void
FUNC_3(uint64_t VAR_1, uint32_t VAR_2,
 struct bintime *VAR_3)
{
 struct timespec VAR_4, VAR_5, VAR_6;

 FUNC_0(&VAR_4);


 if (VAR_1 >= VAR_0 || VAR_1 + VAR_4.tv_sec + 2 >= VAR_0) {
  VAR_3->sec = VAR_0;
 } else {
  VAR_5.tv_sec = VAR_1;
  VAR_5.tv_nsec = VAR_2;
  FUNC_2(&VAR_5, &VAR_4, &VAR_6);
  FUNC_1(&VAR_6, VAR_3);
 }
}
