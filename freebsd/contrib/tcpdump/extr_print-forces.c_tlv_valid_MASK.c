
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct forces_tlv {int length; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline u_int FUNC_2(const struct forces_tlv *VAR_5, u_int VAR_6)
{
 if (VAR_6 < VAR_4)
  return VAR_2;
 if (FUNC_0(&VAR_5->length) < VAR_4)
  return VAR_3;
 if (FUNC_0(&VAR_5->length) > VAR_6)
  return VAR_1;
 if (VAR_6 < FUNC_1(FUNC_0(&VAR_5->length)))
  return VAR_0;

 return 0;
}
