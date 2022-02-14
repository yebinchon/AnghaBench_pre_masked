
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rss_config {int chip; void* tp_rssconf_cng; void* tp_rssconf_vrt; void* tp_rssconf_syn; void* tp_rssconf_ofd; void* tp_rssconf_tnl; void* tp_rssconf; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct TYPE_2__ {int chipid; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 void* FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_6,
         struct cudbg_buffer *VAR_7,
         struct cudbg_error *VAR_8)
{
 struct adapter *VAR_9 = VAR_6->adap;
 struct cudbg_buffer VAR_10;
 struct rss_config *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_13 = sizeof(struct rss_config);

 VAR_12 = FUNC_1(VAR_7, VAR_13, &VAR_10);
 if (VAR_12)
  goto err;

 VAR_11 = (struct rss_config *)VAR_10.data;

 VAR_11->tp_rssconf = FUNC_3(VAR_9, VAR_0);
 VAR_11->tp_rssconf_tnl = FUNC_3(VAR_9, VAR_4);
 VAR_11->tp_rssconf_ofd = FUNC_3(VAR_9, VAR_2);
 VAR_11->tp_rssconf_syn = FUNC_3(VAR_9, VAR_3);
 VAR_11->tp_rssconf_vrt = FUNC_3(VAR_9, VAR_5);
 VAR_11->tp_rssconf_cng = FUNC_3(VAR_9, VAR_1);
 VAR_11->chip = VAR_9->params.chipid;

 VAR_12 = FUNC_4(&VAR_10, VAR_7);
 if (VAR_12)
  goto err1;

 VAR_12 = FUNC_0(&VAR_10, VAR_7);

err1:
 FUNC_2(&VAR_10, VAR_7);
err:
 return VAR_12;
}
