
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_body_t {void* capability_info; void* beacon_interval; int timestamp; } ;
typedef int pbody ;
typedef int netdissect_options ;


 void* FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (struct mgmt_body_t) ;
 int FUNC_3 (struct mgmt_body_t) ;
 int FUNC_4 (struct mgmt_body_t) ;
 int FUNC_5 (int *,int const*,scalar_t__) ;
 int FUNC_6 (struct mgmt_body_t*,int ,int) ;
 int FUNC_7 (int *,struct mgmt_body_t*,int const*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(netdissect_options *VAR_3,
                      const u_char *VAR_4, u_int VAR_5)
{
 struct mgmt_body_t VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));

 if (!FUNC_1(*VAR_4, VAR_2 + VAR_0 +
     VAR_1))
  return 0;
 if (VAR_5 < VAR_2 + VAR_0 +
     VAR_1)
  return 0;
 FUNC_5(&VAR_6.timestamp, VAR_4, VAR_2);
 VAR_7 += VAR_2;
 VAR_5 -= VAR_2;
 VAR_6.beacon_interval = FUNC_0(VAR_4+VAR_7);
 VAR_7 += VAR_0;
 VAR_5 -= VAR_0;
 VAR_6.capability_info = FUNC_0(VAR_4+VAR_7);
 VAR_7 += VAR_1;
 VAR_5 -= VAR_1;

 VAR_8 = FUNC_7(VAR_3, &VAR_6, VAR_4, VAR_7, VAR_5);

 FUNC_4(VAR_6);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6);

 return VAR_8;
}
