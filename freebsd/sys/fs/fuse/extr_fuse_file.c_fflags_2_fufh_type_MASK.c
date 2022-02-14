
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fufh_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline fufh_type_t
FUNC_1(int VAR_7)
{
 if ((VAR_7 & VAR_1) && (VAR_7 & VAR_6))
  return VAR_4;
 else if (VAR_7 & (VAR_6))
  return VAR_5;
 else if (VAR_7 & (VAR_1))
  return VAR_3;
 else if (VAR_7 & (VAR_0))
  return VAR_2;
 else
  FUNC_0("FUSE: What kind of a flag is this (%x)?", VAR_7);
}
