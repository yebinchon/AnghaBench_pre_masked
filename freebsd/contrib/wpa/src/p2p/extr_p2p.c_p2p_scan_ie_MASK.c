
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_data {int dev_capab; scalar_t__ p2ps_seek_count; scalar_t__ p2ps_seek; scalar_t__ ext_listen_interval; int ext_listen_period; TYPE_1__* cfg; scalar_t__* vendor_elem; scalar_t__ wfd_ie_probe_req; } ;
struct TYPE_2__ {scalar_t__ channel; scalar_t__ reg_class; int country; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct wpabuf*,int,int ) ;
 int FUNC_1 (struct wpabuf*,int const*) ;
 int FUNC_2 (struct wpabuf*,struct p2p_data*,int *) ;
 int FUNC_3 (struct wpabuf*,int ,scalar_t__) ;
 int* FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct wpabuf*,struct p2p_data*) ;
 int FUNC_7 (struct wpabuf*,int*) ;
 int FUNC_8 (struct wpabuf*,scalar_t__) ;

void FUNC_9(struct p2p_data *VAR_4, struct wpabuf *VAR_5, const u8 *VAR_6,
   unsigned int VAR_7)
{
 u8 VAR_8;
 u8 *VAR_9;






 if (VAR_4->vendor_elem && VAR_4->vendor_elem[VAR_3])
  FUNC_8(VAR_5,
          VAR_4->vendor_elem[VAR_3]);

 VAR_9 = FUNC_4(VAR_5);

 VAR_8 = VAR_4->dev_capab & ~VAR_1;


 if (VAR_4->p2ps_seek && VAR_4->p2ps_seek_count)
  VAR_8 |= VAR_2;

 FUNC_0(VAR_5, VAR_8, 0);

 if (VAR_6)
  FUNC_1(VAR_5, VAR_6);
 if (VAR_4->cfg->reg_class && VAR_4->cfg->channel)
  FUNC_5(VAR_5, VAR_4->cfg->country,
        VAR_4->cfg->reg_class,
        VAR_4->cfg->channel);
 if (VAR_4->ext_listen_interval)
  FUNC_3(VAR_5, VAR_4->ext_listen_period,
           VAR_4->ext_listen_interval);

 if (VAR_7 & VAR_0)
  FUNC_2(VAR_5, VAR_4, ((void*)0));

 if (VAR_4->p2ps_seek && VAR_4->p2ps_seek_count)
  FUNC_6(VAR_5, VAR_4);


 FUNC_7(VAR_5, VAR_9);
}
