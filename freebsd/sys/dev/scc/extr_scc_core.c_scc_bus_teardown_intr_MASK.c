
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_mode {int ** ih_src; int * ih_arg; int * ih; scalar_t__ m_fastintr; scalar_t__ m_hasintr; } ;
struct resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct scc_mode* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
    void *VAR_5)
{
 struct scc_mode *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_3) != VAR_2)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6->m_hasintr)
  return (VAR_0);

 VAR_6->m_hasintr = 0;
 VAR_6->m_fastintr = 0;
 VAR_6->ih = ((void*)0);
 VAR_6->ih_arg = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_6->ih_src[VAR_7] = ((void*)0);
 return (0);
}
