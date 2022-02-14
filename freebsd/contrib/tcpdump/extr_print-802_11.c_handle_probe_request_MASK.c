
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct mgmt_body_t {int dummy; } ;
typedef int pbody ;
typedef int netdissect_options ;


 int FUNC_0 (struct mgmt_body_t) ;
 int FUNC_1 (struct mgmt_body_t) ;
 int FUNC_2 (struct mgmt_body_t*,int ,int) ;
 int FUNC_3 (int *,struct mgmt_body_t*,int const*,int,int ) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
                     const u_char *VAR_1, u_int VAR_2)
{
 struct mgmt_body_t VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_5 = FUNC_3(VAR_0, &VAR_3, VAR_1, VAR_4, VAR_2);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 return VAR_5;
}
