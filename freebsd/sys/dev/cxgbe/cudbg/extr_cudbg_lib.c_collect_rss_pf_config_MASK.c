
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct rss_pf_conf {int rss_pf_config; void* rss_pf_mask; void* rss_pf_map; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,void*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int,int *,int) ;
 void* FUNC_4 (struct adapter*,int) ;
 void* FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_7(struct cudbg_init *VAR_0,
     struct cudbg_buffer *VAR_1,
     struct cudbg_error *VAR_2)
{
 struct cudbg_buffer VAR_3;
 struct rss_pf_conf *VAR_4;
 struct adapter *VAR_5 = VAR_0->adap;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = 8 * sizeof(*VAR_4);

 VAR_10 = FUNC_1(VAR_1, VAR_8, &VAR_3);
 if (VAR_10)
  goto err;

 VAR_4 = (struct rss_pf_conf *)VAR_3.data;

 VAR_6 = FUNC_4(VAR_5, 1);
 VAR_7 = FUNC_5(VAR_5, 1);

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  VAR_4[VAR_9].rss_pf_map = VAR_6;
  VAR_4[VAR_9].rss_pf_mask = VAR_7;

  FUNC_3(VAR_5, VAR_9, &VAR_4[VAR_9].rss_pf_config, 1);
 }

 VAR_10 = FUNC_6(&VAR_3, VAR_1);
 if (VAR_10)
  goto err1;

 VAR_10 = FUNC_0(&VAR_3, VAR_1);
err1:
 FUNC_2(&VAR_3, VAR_1);
err:
 return VAR_10;
}
