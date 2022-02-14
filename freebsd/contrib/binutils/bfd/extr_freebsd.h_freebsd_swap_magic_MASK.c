
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (void*) ;
 long FUNC_1 (void*) ;

__attribute__((used)) static long
FUNC_2 (void *VAR_4)
{
  long VAR_5 = FUNC_1(VAR_4);
  long VAR_6 = FUNC_0(VAR_4);
  int VAR_7 = VAR_5 & 0xffff;
  int VAR_8 = VAR_6 & 0xffff;
  int VAR_9 = VAR_7 == VAR_1 || VAR_7 == VAR_0 ||
    VAR_7 == VAR_3 || VAR_7 == VAR_2;
  int VAR_10 = VAR_8 == VAR_1 || VAR_8 == VAR_0 ||
    VAR_8 == VAR_3 || VAR_8 == VAR_2;

  return VAR_10 && !VAR_9 ? VAR_6 : VAR_5;
}
