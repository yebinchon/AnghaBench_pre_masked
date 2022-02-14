
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_8__ {int type_and_flag; } ;
typedef TYPE_2__ lisp_map_register_hdr ;


 int FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(netdissect_options *VAR_5, const lisp_map_register_hdr *VAR_6)
{
 uint8_t VAR_7 = FUNC_3(VAR_6->type_and_flag);

 if (!VAR_5->ndo_vflag) {
  FUNC_1((VAR_5, "%s,", FUNC_4(VAR_2, "unknown-type-%u", VAR_7)));
  return;
 } else {
  FUNC_1((VAR_5, "%s,", FUNC_4(VAR_2, "unknown-type-%u", VAR_7)));
 }

 if (VAR_7 == VAR_1) {
  FUNC_1((VAR_5, " flags [%s],", FUNC_2(VAR_4,
    "none", FUNC_0(VAR_6))));
 } else if (VAR_7 == VAR_0) {
  FUNC_1((VAR_5, " flags [%s],", FUNC_2(VAR_3,
    "none", FUNC_0(VAR_6))));
 }

 return;
}
