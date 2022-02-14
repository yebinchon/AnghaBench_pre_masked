
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int u_longlong_t ;
struct TYPE_5__ {int dt_oflags; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_6__ {int r_offset; int r_info; } ;
typedef TYPE_2__ GElf_Rela ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_10, char *VAR_11, int VAR_12, GElf_Rela *VAR_13,
    uint32_t *VAR_14)
{
 uint8_t *VAR_15 = (uint8_t *)(VAR_11 + VAR_13->r_offset - 1);
 uint8_t VAR_16;
 (*VAR_14) -= 1;






 if (FUNC_0(VAR_13->r_info) != VAR_8 &&
     FUNC_0(VAR_13->r_info) != VAR_9)
  return (-1);
 if (!VAR_12) {
  if ((VAR_15[0] == VAR_3 || VAR_15[0] == VAR_4) &&
      VAR_15[1] == VAR_3 && VAR_15[2] == VAR_3 &&
      VAR_15[3] == VAR_3 && VAR_15[4] == VAR_3)
   return (0);
 } else if (VAR_10->dt_oflags & VAR_0) {
  if (VAR_15[0] == VAR_5 &&
      VAR_15[1] == VAR_6 && VAR_15[2] == VAR_7 &&
      (VAR_15[3] == VAR_3 || VAR_15[3] == VAR_4) &&
      VAR_15[4] == VAR_3) {
   (*VAR_14) += 3;
   return (0);
  }
 } else {
  if (VAR_15[0] == VAR_6 && VAR_15[1] == VAR_7 &&
      (VAR_15[2] == VAR_3 || VAR_15[2] == VAR_4) &&
      VAR_15[3] == VAR_3 && VAR_15[4] == VAR_3) {
   (*VAR_14) += 2;
   return (0);
  }
 }





 if (VAR_15[0] != VAR_1 && VAR_15[0] != VAR_2) {
  FUNC_1("found %x instead of a call or jmp instruction at "
      "%llx\n", VAR_15[0], (u_longlong_t)VAR_13->r_offset);
  return (-1);
 }

 VAR_16 = (VAR_15[0] == VAR_2) ? VAR_4 : VAR_3;
 if (!VAR_12) {
  VAR_15[0] = VAR_16;
  VAR_15[1] = VAR_3;
  VAR_15[2] = VAR_3;
  VAR_15[3] = VAR_3;
  VAR_15[4] = VAR_3;
 } else if (VAR_10->dt_oflags & VAR_0) {
  VAR_15[0] = VAR_5;
  VAR_15[1] = VAR_6;
  VAR_15[2] = VAR_7;
  VAR_15[3] = VAR_16;
  VAR_15[4] = VAR_3;
  (*VAR_14) += 3;
 } else {
  VAR_15[0] = VAR_6;
  VAR_15[1] = VAR_7;
  VAR_15[2] = VAR_16;
  VAR_15[3] = VAR_3;
  VAR_15[4] = VAR_3;
  (*VAR_14) += 2;
 }

 return (0);
}
