
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_body_t {size_t reason_code; } ;
typedef int pbody ;
struct TYPE_5__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,scalar_t__) ;
 size_t VAR_1 ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (struct mgmt_body_t*,int ,int) ;
 char** VAR_2 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_3,
              const uint8_t *VAR_4, const u_char *VAR_5, u_int VAR_6)
{
 struct mgmt_body_t VAR_7;
 const char *VAR_8 = ((void*)0);

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 if (!FUNC_2(*VAR_5, VAR_0))
  return 0;
 if (VAR_6 < VAR_0)
  return 0;
 VAR_7.reason_code = FUNC_0(VAR_5);

 VAR_8 = (VAR_7.reason_code < VAR_1)
   ? VAR_2[VAR_7.reason_code]
   : "Reserved";

 if (VAR_3->ndo_eflag) {
  FUNC_1((VAR_3, ": %s", VAR_8));
 } else {
  FUNC_1((VAR_3, " (%s): %s", FUNC_3(VAR_3, VAR_4), VAR_8));
 }
 return 1;
}
