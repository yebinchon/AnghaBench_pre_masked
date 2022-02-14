
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thread {int dummy; } ;
struct kcov_info {scalar_t__ mode; scalar_t__ kvaddr; int entries; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 struct thread* VAR_1 ;
 struct kcov_info* FUNC_1 (struct thread*) ;

__attribute__((used)) static void
FUNC_2(uintptr_t VAR_2)
{
 struct thread *VAR_3;
 struct kcov_info *VAR_4;
 uint64_t *VAR_5, VAR_6;

 VAR_3 = VAR_1;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0))
  return;




 if (VAR_4->mode != VAR_0)
  return;

 FUNC_0(VAR_4->kvaddr != 0,
     ("__sanitizer_cov_trace_pc: NULL buf while running"));

 VAR_5 = (uint64_t *)VAR_4->kvaddr;


 VAR_6 = VAR_5[0];
 if (VAR_6 + 2 > VAR_4->entries)
  return;

 VAR_5[VAR_6 + 1] = VAR_2;
 VAR_5[0] = VAR_6 + 1;
}
