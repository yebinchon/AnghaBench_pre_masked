
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_sim_msg {int buf; } ;


 int FUNC_0 (int*,int ,int) ;
 int* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const*,size_t) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

u8 * FUNC_6(struct eap_sim_msg *VAR_0, u8 VAR_1, u16 VAR_2,
       const u8 *VAR_3, size_t VAR_4)
{
 int VAR_5 = 4 + VAR_4;
 int VAR_6;
 u8 *VAR_7;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_6 = (4 - VAR_5 % 4) % 4;
 VAR_5 += VAR_6;
 if (FUNC_5(&VAR_0->buf, VAR_5))
  return ((void*)0);
 VAR_7 = FUNC_1(VAR_0->buf, 0);
 FUNC_4(VAR_0->buf, VAR_1);
 FUNC_4(VAR_0->buf, VAR_5 / 4);
 FUNC_2(VAR_0->buf, VAR_2);
 if (VAR_3)
  FUNC_3(VAR_0->buf, VAR_3, VAR_4);
 else
  FUNC_1(VAR_0->buf, VAR_4);
 if (VAR_6)
  FUNC_0(FUNC_1(VAR_0->buf, VAR_6), 0, VAR_6);
 return VAR_7;
}
