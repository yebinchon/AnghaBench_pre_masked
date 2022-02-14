
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_device {scalar_t__ go_state; int flags; int channels; } ;
struct p2p_data {int dev_capab; scalar_t__* vendor_elem; scalar_t__ wfd_ie_go_neg; int ssid_len; int ssid; TYPE_1__* cfg; int channels; int const op_channel; int const op_reg_class; scalar_t__ cross_connect; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {char const* country; int dev_addr; scalar_t__ p2p_intra_bss; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct wpabuf*,int,int ) ;
 int FUNC_1 (struct wpabuf*,char const*,struct p2p_channels*) ;
 int FUNC_2 (struct wpabuf*,int ,int ,int ) ;
 int * FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,char const*,int const,int const) ;
 int FUNC_5 (struct wpabuf*,int ,int ) ;
 int FUNC_6 (struct wpabuf*,int ) ;
 int FUNC_7 (struct wpabuf*,int *) ;
 int FUNC_8 (int *,int *,struct p2p_channels*) ;
 int FUNC_9 (struct p2p_data*,char*) ;
 struct wpabuf* FUNC_10 (int) ;
 size_t FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_13(struct p2p_data *VAR_10,
          struct p2p_device *VAR_11,
          u8 VAR_12, u8 VAR_13,
          const u8 *VAR_14, int VAR_15)
{
 struct wpabuf *VAR_16;
 u8 *VAR_17;
 struct p2p_channels VAR_18;
 u8 VAR_19;
 size_t VAR_20 = 0;

 FUNC_9(VAR_10, "Building GO Negotiation Confirm");






 if (VAR_10->vendor_elem && VAR_10->vendor_elem[VAR_9])
  VAR_20 += FUNC_11(VAR_10->vendor_elem[VAR_9]);

 VAR_16 = FUNC_10(1000 + VAR_20);
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 FUNC_5(VAR_16, VAR_4, VAR_12);

 VAR_17 = FUNC_3(VAR_16);
 FUNC_6(VAR_16, VAR_13);
 VAR_19 = 0;
 if (VAR_11->go_state == VAR_0) {
  if (VAR_11->flags & VAR_2) {
   VAR_19 |= VAR_7;
   if (VAR_11->flags & VAR_3)
    VAR_19 |=
     VAR_8;
  }
  if (VAR_10->cross_connect)
   VAR_19 |= VAR_5;
  if (VAR_10->cfg->p2p_intra_bss)
   VAR_19 |= VAR_6;
 }
 FUNC_0(VAR_16, VAR_10->dev_capab &
          ~VAR_1,
          VAR_19);
 if (VAR_15 || VAR_14 == ((void*)0))
  FUNC_4(VAR_16, VAR_10->cfg->country,
           VAR_10->op_reg_class,
           VAR_10->op_channel);
 else
  FUNC_4(VAR_16, (const char *) VAR_14,
           VAR_14[3], VAR_14[4]);
 FUNC_8(&VAR_10->channels, &VAR_11->channels, &VAR_18);
 FUNC_1(VAR_16, VAR_10->cfg->country, &VAR_18);
 if (VAR_15) {
  FUNC_2(VAR_16, VAR_10->cfg->dev_addr, VAR_10->ssid,
         VAR_10->ssid_len);
 }
 FUNC_7(VAR_16, VAR_17);






 if (VAR_10->vendor_elem && VAR_10->vendor_elem[VAR_9])
  FUNC_12(VAR_16, VAR_10->vendor_elem[VAR_9]);

 return VAR_16;
}
