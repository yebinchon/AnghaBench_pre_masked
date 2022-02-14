
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct forces_ilv {int length; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_2(const struct forces_ilv *VAR_5, u_int VAR_6)
{
 if (VAR_6 < VAR_0)
  return VAR_3;
 if (FUNC_0(&VAR_5->length) < VAR_0)
  return VAR_4;
 if (FUNC_0(&VAR_5->length) > VAR_6)
  return VAR_2;
 if (VAR_6 < FUNC_1(FUNC_0(&VAR_5->length)))
  return VAR_1;

 return 0;
}
