
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshmac {size_t mac_len; } ;
typedef int ourmac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sshmac*,int ,int const*,size_t,int *,int) ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;

int
FUNC_2(struct sshmac *VAR_3, u_int32_t VAR_4,
    const u_char *VAR_5, size_t VAR_6,
    const u_char *VAR_7, size_t VAR_8)
{
 u_char VAR_9[VAR_0];
 int VAR_10;

 if (VAR_3->mac_len > VAR_8)
  return VAR_1;
 if ((VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_9, sizeof(VAR_9))) != 0)
  return VAR_10;
 if (FUNC_1(VAR_9, VAR_7, VAR_3->mac_len) != 0)
  return VAR_2;
 return 0;
}
