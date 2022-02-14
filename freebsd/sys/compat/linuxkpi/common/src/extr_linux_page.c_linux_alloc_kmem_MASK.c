
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,int,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (size_t,int) ;

vm_offset_t
FUNC_2(gfp_t VAR_5, unsigned int VAR_6)
{
 size_t VAR_7 = ((size_t)VAR_3) << VAR_6;
 vm_offset_t VAR_8;

 if ((VAR_5 & VAR_1) == 0) {
  VAR_8 = FUNC_1(VAR_7, VAR_5 & VAR_2);
 } else {
  VAR_8 = FUNC_0(VAR_7, VAR_5 & VAR_2, 0,
      VAR_0, VAR_3, 0, VAR_4);
 }
 return (VAR_8);
}
