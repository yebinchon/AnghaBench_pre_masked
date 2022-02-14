
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmt {int code; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct stmt *VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_5 && VAR_4 != VAR_1 && *VAR_3 == VAR_4)
  VAR_2->code = VAR_0;
 else
  *VAR_3 = VAR_4;
}
