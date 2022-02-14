
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct p2ps_advertisement {int svc_name; int config_methods; int id; int hash; struct p2ps_advertisement* next; } ;
struct p2p_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int ,scalar_t__) ;
 scalar_t__* FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct p2p_data*,int ,int ,int ,scalar_t__**,scalar_t__**,size_t*,scalar_t__*) ;
 int FUNC_4 (struct wpabuf*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct p2p_data*) ;
 scalar_t__ FUNC_6 (struct p2p_data*,scalar_t__ const*,scalar_t__) ;
 int FUNC_7 (int ,char*,scalar_t__ const*,scalar_t__) ;
 struct wpabuf* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct wpabuf*) ;
 scalar_t__* FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int ) ;

void FUNC_13(struct wpabuf *VAR_6, struct p2p_data *VAR_7,
      u8 VAR_8, const u8 *VAR_9,
      struct p2ps_advertisement *VAR_10)
{
 struct p2ps_advertisement *VAR_11;
 int VAR_12;
 size_t VAR_13;
 struct wpabuf *VAR_14 = ((void*)0);
 u8 *VAR_15, *VAR_16, *VAR_17 = ((void*)0);

 if (!VAR_10 || !VAR_9 || !VAR_8)
  return;

 FUNC_7(VAR_2, "P2PS: Probe Request service hash values",
      VAR_9, VAR_8 * VAR_3);
 VAR_12 = FUNC_6(VAR_7, VAR_9, VAR_8) &&
  FUNC_5(VAR_7);


 VAR_14 = FUNC_8(VAR_0 + 256 + VAR_3);
 if (!VAR_14)
  return;





 VAR_17 = FUNC_2(VAR_14);

 VAR_13 = 0;

 FUNC_12(VAR_14, VAR_5);
 VAR_16 = FUNC_10(VAR_14, sizeof(u16));
 FUNC_0(VAR_16, (u16) VAR_13);
 FUNC_4(VAR_14, VAR_17);
 VAR_15 = FUNC_10(VAR_14, 0);

 if (VAR_12) {

  FUNC_3(VAR_14, VAR_7, 0, 0, VAR_4,
      &VAR_17, &VAR_15, &VAR_13, VAR_16);
 }


 for (VAR_11 = VAR_10; VAR_11 && VAR_13 <= VAR_1;
      VAR_11 = VAR_11->next) {
  const u8 *VAR_18 = VAR_9;
  u8 VAR_19;

  for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {

   if (FUNC_1(VAR_18, VAR_11->hash, VAR_3) == 0 &&
       FUNC_3(VAR_14, VAR_7,
           VAR_11->id,
           VAR_11->config_methods,
           VAR_11->svc_name,
           &VAR_17, &VAR_15,
           &VAR_13,
           VAR_16))
    break;

   VAR_18 += VAR_3;
  }
 }

 if (VAR_13)
  FUNC_11(VAR_6, VAR_14);
 FUNC_9(VAR_14);
}
