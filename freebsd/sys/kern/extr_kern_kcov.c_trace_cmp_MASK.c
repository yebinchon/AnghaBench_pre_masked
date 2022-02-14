
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thread {int dummy; } ;
struct kcov_info {scalar_t__ mode; scalar_t__ kvaddr; int entries; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 struct thread* VAR_1 ;
 struct kcov_info* FUNC_2 (struct thread*) ;

__attribute__((used)) static bool
FUNC_3(uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
 struct thread *VAR_6;
 struct kcov_info *VAR_7;
 uint64_t *VAR_8, VAR_9;

 VAR_6 = VAR_1;
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == ((void*)0))
  return (0);




 if (VAR_7->mode != VAR_0)
  return (0);

 FUNC_0(VAR_7->kvaddr != 0,
     ("__sanitizer_cov_trace_pc: NULL buf while running"));

 VAR_8 = (uint64_t *)VAR_7->kvaddr;


 VAR_9 = VAR_8[0];


 if (VAR_9 * 4 + 4 + 1 > VAR_7->entries)
  return (0);

 while (1) {
  VAR_8[VAR_9 * 4 + 1] = VAR_2;
  VAR_8[VAR_9 * 4 + 2] = VAR_3;
  VAR_8[VAR_9 * 4 + 3] = VAR_4;
  VAR_8[VAR_9 * 4 + 4] = VAR_5;

  if (FUNC_1(&VAR_8[0], VAR_9, VAR_9 + 1))
   break;
  VAR_8[0] = VAR_9;
 }

 return (1);
}
