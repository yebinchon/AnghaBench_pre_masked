
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_mode {struct scc_chan* m_chan; } ;
struct scc_chan {int ch_rlist; } ;
struct resource_list_entry {int dummy; } ;
struct resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct scc_mode* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct resource_list_entry* FUNC_2 (int *,int,int) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct resource_list_entry *VAR_6;
 struct scc_chan *VAR_7;
 struct scc_mode *VAR_8;

 if (FUNC_1(VAR_2) != VAR_1)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_2);
 VAR_7 = VAR_8->m_chan;
 VAR_6 = FUNC_2(&VAR_7->ch_rlist, VAR_3, VAR_4);
 return ((VAR_6 == ((void*)0)) ? VAR_0 : 0);
}
