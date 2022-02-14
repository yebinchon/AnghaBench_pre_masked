
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scc_mode {struct scc_chan* m_chan; } ;
struct scc_chan {int ch_rlist; } ;
struct resource_list_entry {struct resource* res; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int ,int ) ;
 struct scc_mode* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct resource_list_entry* FUNC_3 (int *,int,int ) ;

struct resource *
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 struct resource_list_entry *VAR_8;
 struct scc_chan *VAR_9;
 struct scc_mode *VAR_10;

 if (FUNC_2(VAR_1) != VAR_0)
  return (((void*)0));


 if (!FUNC_0(VAR_4, VAR_5))
  return (((void*)0));

 VAR_10 = FUNC_1(VAR_1);
 VAR_9 = VAR_10->m_chan;
 VAR_8 = FUNC_3(&VAR_9->ch_rlist, VAR_2, 0);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 *VAR_3 = 0;
 return (VAR_8->res);
}
