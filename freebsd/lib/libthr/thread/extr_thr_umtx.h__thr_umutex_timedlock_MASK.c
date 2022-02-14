
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int dummy; } ;
struct timespec {int dummy; } ;


 int FUNC_0 (struct umutex*,int ,struct timespec const*) ;
 scalar_t__ FUNC_1 (struct umutex*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct umutex *VAR_0, uint32_t VAR_1,
    const struct timespec *VAR_2)
{

 if (FUNC_1(VAR_0, VAR_1) == 0)
  return (0);
 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
