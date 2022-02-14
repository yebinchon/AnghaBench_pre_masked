
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cesa_session {int cs_klen; int cs_config; scalar_t__ cs_aes_dkey; int cs_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct cesa_session *VAR_6)
{
 uint32_t VAR_7[4 * (VAR_5 + 1)];
 uint32_t *VAR_8;
 int VAR_9;

 FUNC_1(VAR_7, VAR_6->cs_key, VAR_6->cs_klen * 8);

 VAR_6->cs_config &= ~VAR_3;
 VAR_8 = (uint32_t *)VAR_6->cs_aes_dkey;

 switch (VAR_6->cs_klen) {
 case 16:
  VAR_6->cs_config |= VAR_0;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   *VAR_8++ = FUNC_0(VAR_7[4 * 10 + VAR_9]);
  break;
 case 24:
  VAR_6->cs_config |= VAR_1;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   *VAR_8++ = FUNC_0(VAR_7[4 * 12 + VAR_9]);
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
   *VAR_8++ = FUNC_0(VAR_7[4 * 11 + 2 + VAR_9]);
  break;
 case 32:
  VAR_6->cs_config |= VAR_2;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   *VAR_8++ = FUNC_0(VAR_7[4 * 14 + VAR_9]);
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   *VAR_8++ = FUNC_0(VAR_7[4 * 13 + VAR_9]);
  break;
 default:
  return (VAR_4);
 }

 return (0);
}
