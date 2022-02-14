
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct struct_lb_stats {int nchan; struct lb_port_stats* s; } ;
struct lb_port_stats {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; } ;
struct TYPE_2__ {int nports; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int,struct lb_port_stats*) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_0,
       struct cudbg_buffer *VAR_1,
       struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4;
 struct lb_port_stats *VAR_5;
 struct struct_lb_stats *VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_10 = VAR_3->params.nports;
 if (VAR_10 < 0)
  goto err;

 VAR_8 = VAR_10;
 VAR_9 = sizeof(struct struct_lb_stats) +
        VAR_8 * sizeof(struct lb_port_stats);

 VAR_10 = FUNC_1(VAR_1, VAR_9, &VAR_4);
 if (VAR_10)
  goto err;

 VAR_6 = (struct struct_lb_stats *) VAR_4.data;

 VAR_6->nchan = VAR_8;
 VAR_5 = VAR_6->s;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 += 2, VAR_5 += 2) {
  FUNC_3(VAR_3, VAR_7, VAR_5);
  FUNC_3(VAR_3, VAR_7 + 1, VAR_5+1);
 }

 VAR_10 = FUNC_4(&VAR_4, VAR_1);
 if (VAR_10)
  goto err1;

 VAR_10 = FUNC_0(&VAR_4, VAR_1);
err1:
 FUNC_2(&VAR_4, VAR_1);
err:
 return VAR_10;
}
