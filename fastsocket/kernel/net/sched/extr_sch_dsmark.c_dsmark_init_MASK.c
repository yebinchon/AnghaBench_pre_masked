
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct nlattr {int dummy; } ;
struct dsmark_qdisc_data {int indices; int * q; int set_tc_index; void* default_index; int * value; int * mask; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,struct Qdisc*,...) ;
 int * FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (struct Qdisc*) ;
 struct dsmark_qdisc_data* FUNC_9 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_11, struct nlattr *VAR_12)
{
 struct dsmark_qdisc_data *VAR_13 = FUNC_9(VAR_11);
 struct nlattr *VAR_14[VAR_6 + 1];
 int VAR_15 = -VAR_0;
 u32 VAR_16 = VAR_3;
 u16 VAR_17;
 u8 *VAR_18;

 FUNC_6("dsmark_init(sch %p,[qdisc %p],opt %p)\n", VAR_11, VAR_13, VAR_12);

 if (!VAR_12)
  goto errout;

 VAR_15 = FUNC_5(VAR_14, VAR_6, VAR_12, VAR_8);
 if (VAR_15 < 0)
  goto errout;

 VAR_15 = -VAR_0;
 VAR_17 = FUNC_4(VAR_14[VAR_5]);

 if (FUNC_0(VAR_17) != 1)
  goto errout;

 if (VAR_14[VAR_4])
  VAR_16 = FUNC_4(VAR_14[VAR_4]);

 VAR_18 = FUNC_1(VAR_17 * 2, VAR_2);
 if (VAR_18 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto errout;
 }

 VAR_13->mask = VAR_18;
 FUNC_2(VAR_13->mask, 0xff, VAR_17);

 VAR_13->value = VAR_13->mask + VAR_17;
 FUNC_2(VAR_13->value, 0, VAR_17);

 VAR_13->indices = VAR_17;
 VAR_13->default_index = VAR_16;
 VAR_13->set_tc_index = FUNC_3(VAR_14[VAR_7]);

 VAR_13->q = FUNC_7(FUNC_8(VAR_11), VAR_11->dev_queue,
     &VAR_10, VAR_11->handle);
 if (VAR_13->q == ((void*)0))
  VAR_13->q = &VAR_9;

 FUNC_6("dsmark_init: qdisc %p\n", VAR_13->q);

 VAR_15 = 0;
errout:
 return VAR_15;
}
