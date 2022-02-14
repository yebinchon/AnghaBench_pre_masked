
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct audit_context {int dummy; } ;


 struct timespec VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (struct audit_context*,struct timespec*,unsigned int*) ;

__attribute__((used)) static inline void FUNC_2(struct audit_context *VAR_1,
       struct timespec *VAR_2, unsigned int *VAR_3)
{
 if (!VAR_1 || !FUNC_1(VAR_1, VAR_2, VAR_3)) {
  *VAR_2 = VAR_0;
  *VAR_3 = FUNC_0();
 }
}
