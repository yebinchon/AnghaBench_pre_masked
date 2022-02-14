
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u32 ;
struct perf_header {scalar_t__ needs_swap; } ;
typedef scalar_t__ ssize_t ;
typedef int len ;


 char FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int,char*,char) ;

__attribute__((used)) static char *FUNC_4(int VAR_0, struct perf_header *VAR_1)
{
 ssize_t VAR_2, VAR_3;
 u32 VAR_4;
 char *VAR_5;

 VAR_2 = FUNC_3(VAR_0, &VAR_4, sizeof(VAR_4));
 if (VAR_2 < (ssize_t)sizeof(VAR_4))
  return ((void*)0);

 if (VAR_1->needs_swap)
  VAR_4 = FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_0, VAR_5, VAR_4);
 if (VAR_3 == (ssize_t)VAR_4) {





  return VAR_5;
 }

 FUNC_1(VAR_5);
 return ((void*)0);
}
