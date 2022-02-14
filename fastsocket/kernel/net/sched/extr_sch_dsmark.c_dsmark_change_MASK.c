
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct dsmark_qdisc_data {void** mask; void** value; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dsmark_qdisc_data*,unsigned long) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_3 (char*,struct Qdisc*,struct dsmark_qdisc_data*,int ,int ,unsigned long) ;
 struct dsmark_qdisc_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_7, u32 VAR_8, u32 VAR_9,
    struct nlattr **VAR_10, unsigned long *VAR_11)
{
 struct dsmark_qdisc_data *VAR_12 = FUNC_4(VAR_7);
 struct nlattr *VAR_13 = VAR_10[VAR_5];
 struct nlattr *VAR_14[VAR_3 + 1];
 int VAR_15 = -VAR_0;
 u8 VAR_16 = 0;

 FUNC_3("dsmark_change(sch %p,[qdisc %p],classid %x,parent %x),"
  "arg 0x%lx\n", VAR_7, VAR_12, VAR_8, VAR_9, *VAR_11);

 if (!FUNC_0(VAR_12, *VAR_11)) {
  VAR_15 = -VAR_1;
  goto errout;
 }

 if (!VAR_13)
  goto errout;

 VAR_15 = FUNC_2(VAR_14, VAR_3, VAR_13, VAR_6);
 if (VAR_15 < 0)
  goto errout;

 if (VAR_14[VAR_2])
  VAR_16 = FUNC_1(VAR_14[VAR_2]);

 if (VAR_14[VAR_4])
  VAR_12->value[*VAR_11-1] = FUNC_1(VAR_14[VAR_4]);

 if (VAR_14[VAR_2])
  VAR_12->mask[*VAR_11-1] = VAR_16;

 VAR_15 = 0;

errout:
 return VAR_15;
}
