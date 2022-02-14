
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_params {int port; int invert; int skip_len; int skip_ofst; int min_len; int snap_len; int * mask; int * data; } ;
struct TYPE_2__ {int port; int invert; int skip_len; int skip_ofst; int min_len; int snap_len; int * mask; int * data; } ;
struct t4_tracer {int idx; int enabled; int valid; TYPE_1__ tp; } ;
struct adapter {int* chan_map; int tracer_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct adapter*,struct trace_params*,int,int*) ;

int
FUNC_5(struct adapter *VAR_5, struct t4_tracer *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct trace_params VAR_10;

 if (VAR_6->idx >= VAR_3) {
  VAR_6->idx = 0xff;
  VAR_6->enabled = 0;
  VAR_6->valid = 0;
  return (0);
 }

 VAR_7 = FUNC_0(VAR_5, ((void*)0), VAR_0 | VAR_4 | VAR_1,
     "t4gett");
 if (VAR_7)
  return (VAR_7);

 for (VAR_8 = VAR_6->idx; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_2(&VAR_5->tracer_valid, VAR_6->idx)) {
   FUNC_4(VAR_5, &VAR_10, VAR_8, &VAR_9);
   VAR_6->idx = VAR_8;
   VAR_6->enabled = VAR_9;
   VAR_6->valid = 1;
   FUNC_3(&VAR_6->tp.data[0], &VAR_10.data[0], sizeof(VAR_6->tp.data));
   FUNC_3(&VAR_6->tp.mask[0], &VAR_10.mask[0], sizeof(VAR_6->tp.mask));
   VAR_6->tp.snap_len = VAR_10.snap_len;
   VAR_6->tp.min_len = VAR_10.min_len;
   VAR_6->tp.skip_ofst = VAR_10.skip_ofst;
   VAR_6->tp.skip_len = VAR_10.skip_len;
   VAR_6->tp.invert = VAR_10.invert;


   if (VAR_10.port < 4)
    VAR_6->tp.port = VAR_5->chan_map[VAR_10.port];
   else if (VAR_10.port < 8)
    VAR_6->tp.port = VAR_5->chan_map[VAR_10.port - 4] + 4;
   else
    VAR_6->tp.port = VAR_10.port;

   goto done;
  }
 }

 VAR_6->idx = 0xff;
 VAR_6->enabled = 0;
 VAR_6->valid = 0;
done:
 FUNC_1(VAR_5, VAR_2);

 return (VAR_7);
}
