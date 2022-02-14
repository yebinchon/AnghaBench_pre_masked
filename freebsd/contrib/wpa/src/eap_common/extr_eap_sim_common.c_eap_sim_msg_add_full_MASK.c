
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {int buf; } ;


 int FUNC_0 (int*,int ,int) ;
 int* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

u8 * FUNC_5(struct eap_sim_msg *VAR_0, u8 VAR_1,
     const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4 = 2 + VAR_3;
 int VAR_5;
 u8 *VAR_6;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_5 = (4 - VAR_4 % 4) % 4;
 VAR_4 += VAR_5;
 if (FUNC_4(&VAR_0->buf, VAR_4))
  return ((void*)0);
 VAR_6 = FUNC_1(VAR_0->buf, 0);
 FUNC_3(VAR_0->buf, VAR_1);
 FUNC_3(VAR_0->buf, VAR_4 / 4);
 FUNC_2(VAR_0->buf, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0(FUNC_1(VAR_0->buf, VAR_5), 0, VAR_5);
 return VAR_6;
}
