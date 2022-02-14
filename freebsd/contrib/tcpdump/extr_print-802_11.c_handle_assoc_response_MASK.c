
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_body_t {size_t status_code; int aid; void* capability_info; } ;
typedef int pbody ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_4 (struct mgmt_body_t*,int ,int) ;
 int FUNC_5 (int *,struct mgmt_body_t*,int const*,int,scalar_t__) ;
 char** VAR_4 ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_5,
                      const u_char *VAR_6, u_int VAR_7)
{
 struct mgmt_body_t VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 if (!FUNC_3(*VAR_6, VAR_1 + VAR_2 +
     VAR_0))
  return 0;
 if (VAR_7 < VAR_1 + VAR_2 +
     VAR_0)
  return 0;
 VAR_8.capability_info = FUNC_1(VAR_6);
 VAR_9 += VAR_1;
 VAR_7 -= VAR_1;
 VAR_8.status_code = FUNC_1(VAR_6+VAR_9);
 VAR_9 += VAR_2;
 VAR_7 -= VAR_2;
 VAR_8.aid = FUNC_1(VAR_6+VAR_9);
 VAR_9 += VAR_0;
 VAR_7 -= VAR_0;

 VAR_10 = FUNC_5(VAR_5, &VAR_8, VAR_6, VAR_9, VAR_7);

 FUNC_2((VAR_5, " AID(%x) :%s: %s", ((uint16_t)(VAR_8.aid << 2 )) >> 2 ,
     FUNC_0(VAR_8.capability_info) ? " PRIVACY " : "",
     (VAR_8.status_code < VAR_3
  ? VAR_4[VAR_8.status_code]
  : "n/a")));

 return VAR_10;
}
