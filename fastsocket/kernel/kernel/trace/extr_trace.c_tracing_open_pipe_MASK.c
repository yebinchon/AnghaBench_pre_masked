
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {long cpu_file; struct trace_iterator* trace; int (* pipe_open ) (struct trace_iterator*) ;int mutex; int * tr; int iter_flags; int started; } ;
struct inode {scalar_t__ i_private; } ;
struct file {struct trace_iterator* private_data; } ;
struct TYPE_2__ {scalar_t__ in_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long,int ) ;
 struct trace_iterator* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct trace_iterator*) ;
 struct trace_iterator* FUNC_6 (int,int ) ;
 struct trace_iterator* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct trace_iterator*) ;
 size_t VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_16, struct file *VAR_17)
{
 long VAR_18 = (long) VAR_16->i_private;
 struct trace_iterator *VAR_19;
 int VAR_20 = 0;

 if (VAR_14)
  return -VAR_1;

 FUNC_9(&VAR_13);


 if (VAR_18 == VAR_7) {
  if (!FUNC_1(VAR_15)) {
   VAR_20 = -VAR_0;
   goto out;
  }
  FUNC_3(VAR_15);
 } else {
  if (!FUNC_4(VAR_18, VAR_15))
   FUNC_2(VAR_18, VAR_15);
  else {
   VAR_20 = -VAR_0;
   goto out;
  }
 }


 VAR_19 = FUNC_7(sizeof(*VAR_19), VAR_3);
 if (!VAR_19) {
  VAR_20 = -VAR_2;
  goto out;
 }





 VAR_19->trace = FUNC_6(sizeof(*VAR_19->trace), VAR_3);
 if (!VAR_19->trace) {
  VAR_20 = -VAR_2;
  goto fail;
 }
 if (VAR_8)
  *VAR_19->trace = *VAR_8;

 if (!FUNC_0(&VAR_19->started, VAR_3)) {
  VAR_20 = -VAR_2;
  goto fail;
 }


 FUNC_3(VAR_19->started);

 if (VAR_12 & VAR_6)
  VAR_19->iter_flags |= VAR_4;


 if (VAR_11[VAR_10].in_ns)
  VAR_19->iter_flags |= VAR_5;

 VAR_19->cpu_file = VAR_18;
 VAR_19->tr = &VAR_9;
 FUNC_8(&VAR_19->mutex);
 VAR_17->private_data = VAR_19;

 if (VAR_19->trace->pipe_open)
  VAR_19->trace->pipe_open(VAR_19);

out:
 FUNC_10(&VAR_13);
 return VAR_20;

fail:
 FUNC_5(VAR_19->trace);
 FUNC_5(VAR_19);
 FUNC_10(&VAR_13);
 return VAR_20;
}
