
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group {int dummy; } ;
struct p2p_device {int dummy; } ;
struct p2p_data {size_t num_groups; struct wpabuf** vendor_elem; TYPE_1__* cfg; struct p2p_group** groups; struct wpabuf* wfd_ie_invitation; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int country; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct wpabuf*,int ,struct p2p_channels*) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int FUNC_3 (struct wpabuf*,int const*) ;
 int * FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_6 (struct wpabuf*,int ,int ) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,int *) ;
 int FUNC_9 (struct p2p_group*) ;
 struct wpabuf* FUNC_10 (struct p2p_group*) ;
 struct wpabuf* FUNC_11 (int) ;
 size_t FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct p2p_data *VAR_3,
       struct p2p_device *VAR_4,
       u8 VAR_5, u8 VAR_6,
       const u8 *VAR_7,
       u8 VAR_8, u8 VAR_9,
       struct p2p_channels *VAR_10)
{
 struct wpabuf *VAR_11;
 u8 *VAR_12;
 size_t VAR_13 = 0;
 if (VAR_3->vendor_elem && VAR_3->vendor_elem[VAR_2])
  VAR_13 += FUNC_12(VAR_3->vendor_elem[VAR_2]);

 VAR_11 = FUNC_11(1000 + VAR_13);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 FUNC_6(VAR_11, VAR_1,
          VAR_5);

 VAR_12 = FUNC_4(VAR_11);
 FUNC_7(VAR_11, VAR_6);
 FUNC_2(VAR_11, 0, 0);
 if (VAR_8 && VAR_9)
  FUNC_5(VAR_11, VAR_3->cfg->country,
           VAR_8, VAR_9);
 if (VAR_7)
  FUNC_3(VAR_11, VAR_7);
 if (VAR_10)
  FUNC_1(VAR_11, VAR_3->cfg->country, VAR_10);
 FUNC_8(VAR_11, VAR_12);






 if (VAR_3->vendor_elem && VAR_3->vendor_elem[VAR_2])
  FUNC_13(VAR_11, VAR_3->vendor_elem[VAR_2]);

 return VAR_11;
}
