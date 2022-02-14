
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int size; int revision; int signature; } ;
struct struct_mac_stats_rev1 {size_t port_count; int * stats; TYPE_2__ ver_hdr; } ;
struct cudbg_ver_hdr {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct TYPE_3__ {int nports; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,size_t,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,size_t,int *) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_2,
       struct cudbg_buffer *VAR_3,
       struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6;
 struct struct_mac_stats_rev1 *VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_11 = VAR_5->params.nports;
 if (VAR_11 < 0)
  goto err;

 VAR_9 = VAR_11;
 VAR_10 = sizeof(struct struct_mac_stats_rev1);

 VAR_11 = FUNC_1(VAR_3, VAR_10, &VAR_6);
 if (VAR_11)
  goto err;

 VAR_7 = (struct struct_mac_stats_rev1 *) VAR_6.data;

 VAR_7->ver_hdr.signature = VAR_0;
 VAR_7->ver_hdr.revision = VAR_1;
 VAR_7->ver_hdr.size = sizeof(struct struct_mac_stats_rev1) -
           sizeof(struct cudbg_ver_hdr);

 VAR_7->port_count = VAR_9;
 for (VAR_8 = 0; VAR_8 < VAR_7->port_count; VAR_8++)
  FUNC_3(VAR_5, VAR_8, &VAR_7->stats[VAR_8]);

 VAR_11 = FUNC_4(&VAR_6, VAR_3);
 if (VAR_11)
  goto err1;

 VAR_11 = FUNC_0(&VAR_6, VAR_3);
err1:
 FUNC_2(&VAR_6, VAR_3);
err:
 return VAR_11;
}
