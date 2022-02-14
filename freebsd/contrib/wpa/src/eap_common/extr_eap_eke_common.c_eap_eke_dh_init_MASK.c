
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dh_group {int prime_len; int prime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ,int*,int*) ;
 int FUNC_1 (int) ;
 struct dh_group* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int*,int ) ;
 int FUNC_4 (int ,char*,int*,int ) ;

int FUNC_5(u8 VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 const struct dh_group *VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 VAR_6 = FUNC_2(VAR_1);
 if (VAR_4 < 0 || VAR_4 > 255 || !VAR_6)
  return -1;
 VAR_5 = VAR_4;

 if (FUNC_0(VAR_5, VAR_6->prime, VAR_6->prime_len, VAR_2,
      VAR_3) < 0)
  return -1;
 FUNC_4(VAR_0, "EAP-EKE: DH private value",
   VAR_2, VAR_6->prime_len);
 FUNC_3(VAR_0, "EAP-EKE: DH public value",
      VAR_3, VAR_6->prime_len);

 return 0;
}
