
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_seq*,char*) ;

__attribute__((used)) static int
FUNC_1(unsigned long long VAR_2, struct trace_seq *VAR_3,
       u32 VAR_4)
{

 if (!(VAR_4 & VAR_0))
  return 1;


 if (VAR_2 == -1)
  return FUNC_0(VAR_3, "  ");

 if (VAR_4 & VAR_1) {

  if (VAR_2 > 100000ULL)
   return FUNC_0(VAR_3, "! ");


  if (VAR_2 > 10000ULL)
   return FUNC_0(VAR_3, "+ ");
 }

 return FUNC_0(VAR_3, "  ");
}
