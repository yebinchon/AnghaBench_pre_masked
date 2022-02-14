
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdq {int tdq_sysload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_0(struct tdq *VAR_3)
{
 int VAR_4;






 VAR_4 = VAR_3->tdq_sysload - 1;
 if (VAR_4 >= VAR_0)
  return (VAR_2);
 if (VAR_4 <= 1)
  return (VAR_1);
 return (VAR_1 / VAR_4);
}
