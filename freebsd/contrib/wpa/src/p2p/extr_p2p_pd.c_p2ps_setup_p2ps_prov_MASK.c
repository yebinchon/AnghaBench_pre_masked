
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct p2ps_provision {char* info; int adv_mac; int session_mac; int method; void* session_id; void* adv_id; } ;
struct p2p_data {struct p2ps_provision* p2ps_prov; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct p2ps_provision*,int ,int) ;
 struct p2ps_provision* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct p2p_data *VAR_1, u32 VAR_2,
    u32 VAR_3, u16 VAR_4,
    const u8 *VAR_5, const u8 *VAR_6)
{
 struct p2ps_provision *VAR_7;

 if (!VAR_1->p2ps_prov) {
  VAR_1->p2ps_prov = FUNC_2(sizeof(struct p2ps_provision) + 1);
  if (!VAR_1->p2ps_prov)
   return -1;
 } else {
  FUNC_1(VAR_1->p2ps_prov, 0, sizeof(struct p2ps_provision) + 1);
 }

 VAR_7 = VAR_1->p2ps_prov;
 VAR_7->adv_id = VAR_2;
 VAR_7->session_id = VAR_3;
 VAR_7->method = VAR_4;
 FUNC_0(VAR_7->session_mac, VAR_5, VAR_0);
 FUNC_0(VAR_7->adv_mac, VAR_6, VAR_0);
 VAR_7->info[0] = '\0';

 return 0;
}
