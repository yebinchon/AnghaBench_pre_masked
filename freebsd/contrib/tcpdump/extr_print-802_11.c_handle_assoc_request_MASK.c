
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct mgmt_body_t {void* listen_interval; void* capability_info; } ;
typedef int pbody ;
typedef int netdissect_options ;


 void* FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (struct mgmt_body_t) ;
 int FUNC_3 (struct mgmt_body_t) ;
 int FUNC_4 (struct mgmt_body_t*,int ,int) ;
 int FUNC_5 (int *,struct mgmt_body_t*,int const*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_2,
                     const u_char *VAR_3, u_int VAR_4)
{
 struct mgmt_body_t VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 if (!FUNC_1(*VAR_3, VAR_0 + VAR_1))
  return 0;
 if (VAR_4 < VAR_0 + VAR_1)
  return 0;
 VAR_5.capability_info = FUNC_0(VAR_3);
 VAR_6 += VAR_0;
 VAR_4 -= VAR_0;
 VAR_5.listen_interval = FUNC_0(VAR_3+VAR_6);
 VAR_6 += VAR_1;
 VAR_4 -= VAR_1;

 VAR_7 = FUNC_5(VAR_2, &VAR_5, VAR_3, VAR_6, VAR_4);

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
 return VAR_7;
}
