
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_body_t {size_t reason_code; } ;
typedef int pbody ;
typedef int netdissect_options ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,scalar_t__) ;
 size_t VAR_1 ;
 int FUNC_3 (struct mgmt_body_t*,int ,int) ;
 char** VAR_2 ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_3,
                const u_char *VAR_4, u_int VAR_5)
{
 struct mgmt_body_t VAR_6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 if (!FUNC_2(*VAR_4, VAR_0))
  return 0;
 if (VAR_5 < VAR_0)
  return 0;
 VAR_6.reason_code = FUNC_0(VAR_4);

 FUNC_1((VAR_3, ": %s",
     (VAR_6.reason_code < VAR_1)
  ? VAR_2[VAR_6.reason_code]
  : "Reserved"));

 return 1;
}
