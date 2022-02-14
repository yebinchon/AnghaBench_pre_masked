
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_tid_data {int dummy; } ;
struct cudbg_tcam {int tid_hash_base; int routing_start; int clip_start; int filter_start; int server_start; int max_tid; int member_0; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {int size; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_init*,int,struct cudbg_tid_data*) ;
 int FUNC_4 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_5 (scalar_t__,struct cudbg_tcam*,int) ;
 int FUNC_6 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_7 (struct adapter*,int ) ;
 int FUNC_8 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_9(struct cudbg_init *VAR_11,
      struct cudbg_buffer *VAR_12,
      struct cudbg_error *VAR_13)
{
 struct cudbg_buffer VAR_14;
 struct adapter *VAR_15 = VAR_11->adap;
 struct cudbg_tcam VAR_16 = {0};
 struct cudbg_tid_data *VAR_17 = ((void*)0);
 u32 VAR_18, VAR_19 = 0, VAR_20 = 0;
 u32 VAR_21;
 int VAR_22, VAR_23;


 VAR_18 = FUNC_7(VAR_15, VAR_6);

 VAR_16.tid_hash_base = VAR_18;


 VAR_18 = FUNC_7(VAR_15, VAR_4);
 VAR_16.routing_start = VAR_18;


 VAR_18 = FUNC_7(VAR_15, VAR_0);
 VAR_16.clip_start = VAR_18;


 VAR_18 = FUNC_7(VAR_15, VAR_2);
 VAR_16.filter_start = VAR_18;


 VAR_18 = FUNC_7(VAR_15, VAR_5);
 VAR_16.server_start = VAR_18;


 VAR_18 = FUNC_7(VAR_15, VAR_1);
 if ((VAR_18 >> VAR_10) & 1) {
  VAR_18 = FUNC_7(VAR_15, VAR_3);
  if (FUNC_1(VAR_15) > VAR_7)
   VAR_16.max_tid = (VAR_18 & 0xFFFFF) +
           VAR_16.tid_hash_base;
  else {
   VAR_18 = FUNC_0(VAR_18);
   VAR_18 = 1 << VAR_18;
   VAR_16.max_tid = VAR_18 +
    VAR_16.tid_hash_base;
  }
 } else
  VAR_16.max_tid = VAR_9;

 VAR_23 = sizeof(struct cudbg_tid_data) * VAR_16.max_tid;
 VAR_23 += sizeof(struct cudbg_tcam);
 VAR_14.size = VAR_23;

 VAR_22 = FUNC_8(&VAR_14, VAR_12);
 if (VAR_22)
  goto err;

 VAR_22 = FUNC_4(VAR_12, VAR_8, &VAR_14);
 if (VAR_22)
  goto err;

 FUNC_5(VAR_14.data, &VAR_16, sizeof(struct cudbg_tcam));

 VAR_17 = (struct cudbg_tid_data *)(((struct cudbg_tcam *)
          VAR_14.data) + 1);
 VAR_20 = VAR_8 - sizeof(struct cudbg_tcam);
 VAR_19 = sizeof(struct cudbg_tcam);


 for (VAR_21 = 0; VAR_21 < VAR_16.max_tid; VAR_21++) {
  if (VAR_20 < sizeof(struct cudbg_tid_data)) {
   VAR_14.size = VAR_19;
   VAR_22 = FUNC_2(&VAR_14, VAR_12);
   if (VAR_22)
    goto err1;
   VAR_14.size = VAR_8;
   FUNC_6(&VAR_14, VAR_12);


   VAR_22 = FUNC_4(VAR_12, VAR_8,
           &VAR_14);
   if (VAR_22)
    goto err;

   VAR_17 = (struct cudbg_tid_data *)(VAR_14.data);
   VAR_20 = VAR_8;
   VAR_19 = 0;
  }

  VAR_22 = FUNC_3(VAR_11, VAR_21, VAR_17);

  if (VAR_22) {
   VAR_13->sys_err = VAR_22;
   goto err1;
  }

  VAR_17++;
  VAR_20 -= sizeof(struct cudbg_tid_data);
  VAR_19 += sizeof(struct cudbg_tid_data);
 }

 if (VAR_19) {
  VAR_14.size = VAR_19;
  VAR_22 = FUNC_2(&VAR_14, VAR_12);
 }

err1:
 VAR_14.size = VAR_8;
 FUNC_6(&VAR_14, VAR_12);
err:
 return VAR_22;
}
