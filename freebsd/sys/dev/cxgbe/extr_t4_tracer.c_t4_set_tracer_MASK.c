
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_params {int snap_len; scalar_t__ min_len; scalar_t__ skip_ofst; scalar_t__ skip_len; int invert; scalar_t__ port; int * mask; int * data; } ;
struct TYPE_4__ {int port; int snap_len; scalar_t__ min_len; scalar_t__ skip_len; scalar_t__ skip_ofst; int invert; int * mask; int * data; } ;
struct t4_tracer {scalar_t__ valid; int idx; int enabled; TYPE_2__ tp; } ;
struct adapter {scalar_t__ tracer_valid; scalar_t__ tracer_enabled; TYPE_1__** port; } ;
struct TYPE_3__ {scalar_t__ tx_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (struct adapter*,int ,int ,int ) ;
 int FUNC_7 (struct adapter*,struct trace_params*,int ,int ) ;

int
FUNC_8(struct adapter *VAR_11, struct t4_tracer *VAR_12)
{
 int VAR_13;
 struct trace_params VAR_14, *VAR_15;

 if (VAR_12->idx >= VAR_9)
  return (VAR_1);

 VAR_13 = FUNC_0(VAR_11, ((void*)0), VAR_3 | VAR_10 | VAR_4,
     "t4sett");
 if (VAR_13)
  return (VAR_13);






 if (VAR_12->valid == 0) {
  if (FUNC_3(&VAR_11->tracer_valid, VAR_12->idx))
   VAR_15 = ((void*)0);
  else
   VAR_13 = VAR_1;
  goto done;
 }

 if (VAR_12->tp.port > 19 || VAR_12->tp.snap_len > 9600 ||
     VAR_12->tp.min_len > VAR_7 || VAR_12->tp.skip_len > VAR_6 ||
     VAR_12->tp.skip_ofst > VAR_8) {
  VAR_13 = VAR_1;
  goto done;
 }

 FUNC_4(&VAR_14.data[0], &VAR_12->tp.data[0], sizeof(VAR_14.data));
 FUNC_4(&VAR_14.mask[0], &VAR_12->tp.mask[0], sizeof(VAR_14.mask));
 VAR_14.snap_len = VAR_12->tp.snap_len;
 VAR_14.min_len = VAR_12->tp.min_len;
 VAR_14.skip_ofst = VAR_12->tp.skip_ofst;
 VAR_14.skip_len = VAR_12->tp.skip_len;
 VAR_14.invert = !!VAR_12->tp.invert;


 if (VAR_12->tp.port < 4) {
  if (VAR_11->port[VAR_12->tp.port] == ((void*)0)) {
   VAR_13 = VAR_1;
   goto done;
  }
  VAR_14.port = VAR_11->port[VAR_12->tp.port]->tx_chan;
 } else if (VAR_12->tp.port < 8) {
  if (VAR_11->port[VAR_12->tp.port - 4] == ((void*)0)) {
   VAR_13 = VAR_1;
   goto done;
  }
  VAR_14.port = VAR_11->port[VAR_12->tp.port - 4]->tx_chan + 4;
 }
 VAR_15 = &VAR_14;
done:
 if (VAR_13 == 0) {
  VAR_13 = -FUNC_7(VAR_11, VAR_15, VAR_12->idx, VAR_12->enabled);
  if (VAR_13 == 0) {
   if (VAR_12->enabled) {
    FUNC_5(&VAR_11->tracer_valid, VAR_12->idx);
    if (VAR_11->tracer_enabled == 0) {
     FUNC_6(VAR_11, VAR_0,
         VAR_2, VAR_2);
    }
    FUNC_5(&VAR_11->tracer_enabled, VAR_12->idx);
   } else {
    FUNC_1(&VAR_11->tracer_enabled, VAR_12->idx);
    if (VAR_11->tracer_enabled == 0) {
     FUNC_6(VAR_11, VAR_0,
         VAR_2, 0);
    }
   }
  }
 }
 FUNC_2(VAR_11, VAR_5);

 return (VAR_13);
}
