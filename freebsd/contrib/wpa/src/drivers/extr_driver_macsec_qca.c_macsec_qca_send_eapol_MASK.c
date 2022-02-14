
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int sock; } ;
struct macsec_qca_data {TYPE_1__ common; scalar_t__ use_pae_group_addr; } ;
struct ieee8023_hdr {int ethertype; int * src; int * dest; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee8023_hdr*) ;
 int FUNC_2 (int *,int const*,size_t) ;
 struct ieee8023_hdr* FUNC_3 (size_t) ;
 int const* VAR_5 ;
 int FUNC_4 (int ,int *,size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, const u8 *VAR_7,
     const u8 *VAR_8, size_t VAR_9, int VAR_10,
     const u8 *VAR_11, u32 VAR_12)
{
 struct macsec_qca_data *VAR_13 = VAR_6;
 struct ieee8023_hdr *VAR_14;
 size_t VAR_15;
 u8 *VAR_16;
 int VAR_17;

 VAR_15 = sizeof(*VAR_14) + VAR_9;
 VAR_14 = FUNC_3(VAR_15);
 if (!VAR_14) {
  FUNC_6(VAR_3,
      "malloc() failed for macsec_qca_send_eapol(len=%lu)",
      (unsigned long) VAR_15);
  return -1;
 }

 FUNC_2(VAR_14->dest, VAR_13->use_pae_group_addr ? VAR_5 : VAR_7,
    VAR_0);
 FUNC_2(VAR_14->src, VAR_11, VAR_0);
 VAR_14->ethertype = FUNC_0(VAR_1);

 VAR_16 = (u8 *) (VAR_14 + 1);
 FUNC_2(VAR_16, VAR_8, VAR_9);

 VAR_17 = FUNC_4(VAR_13->common.sock, (u8 *) VAR_14, VAR_15, 0);
 FUNC_1(VAR_14);

 if (VAR_17 < 0) {
  FUNC_6(VAR_2,
      "macsec_qca_send_eapol - packet len: %lu - failed: send: %s",
      (unsigned long) VAR_15, FUNC_5(VAR_4));
 }

 return VAR_17;
}
