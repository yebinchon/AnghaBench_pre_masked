
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {scalar_t__ critical_sequence; unsigned long critical_end; void* preempt_timestamp; } ;
struct trace_array {int dummy; } ;
typedef void* cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct trace_array*,int ,unsigned long,unsigned long,int) ;
 void* VAR_4 ;
 int FUNC_9 (struct trace_array*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct trace_array *VAR_5,
        struct trace_array_cpu *VAR_6,
        unsigned long VAR_7,
        int VAR_8)
{
 cycle_t VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_9 = VAR_6->preempt_timestamp;
 VAR_10 = FUNC_0(VAR_8);
 VAR_11 = VAR_10-VAR_9;

 FUNC_3(VAR_12);

 VAR_13 = FUNC_4();

 if (!FUNC_5(VAR_11))
  goto out;

 FUNC_6(&VAR_3, VAR_12);


 if (!FUNC_5(VAR_11))
  goto out_unlock;

 FUNC_8(VAR_5, VAR_0, VAR_7, VAR_12, VAR_13);

 if (VAR_6->critical_sequence != VAR_2)
  goto out_unlock;

 VAR_6->critical_end = VAR_7;

 if (FUNC_2(!FUNC_1())) {
  VAR_4 = VAR_11;
  FUNC_9(VAR_5, VAR_1, VAR_8);
 }

 VAR_2++;

out_unlock:
 FUNC_7(&VAR_3, VAR_12);

out:
 VAR_6->critical_sequence = VAR_2;
 VAR_6->preempt_timestamp = FUNC_0(VAR_8);
 FUNC_8(VAR_5, VAR_0, VAR_7, VAR_12, VAR_13);
}
