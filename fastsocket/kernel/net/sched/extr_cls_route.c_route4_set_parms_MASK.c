
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_exts {int dummy; } ;
struct route4_head {struct route4_bucket** table; } ;
struct TYPE_2__ {void* classid; } ;
struct route4_filter {int handle; int id; int iif; int exts; TYPE_1__ res; struct route4_bucket* bkt; struct route4_filter* next; } ;
struct route4_bucket {struct route4_filter** ht; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_0 (int) ;
 struct route4_bucket* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct nlattr*) ;
 int VAR_8 ;
 int FUNC_3 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_4 (struct tcf_proto*,int *,struct tcf_exts*) ;
 int FUNC_5 (struct tcf_proto*,struct tcf_exts*) ;
 int FUNC_6 (struct tcf_proto*,struct nlattr**,struct nlattr*,struct tcf_exts*,int *) ;
 int FUNC_7 (struct tcf_proto*) ;
 int FUNC_8 (struct tcf_proto*) ;
 unsigned int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_9, unsigned long VAR_10,
 struct route4_filter *VAR_11, u32 VAR_12, struct route4_head *VAR_13,
 struct nlattr **VAR_14, struct nlattr *VAR_15, int VAR_16)
{
 int VAR_17;
 u32 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0x8000;
 struct route4_filter *VAR_21;
 unsigned int VAR_22;
 struct route4_bucket *VAR_23;
 struct tcf_exts VAR_24;

 VAR_17 = FUNC_6(VAR_9, VAR_14, VAR_15, &VAR_24, &VAR_8);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = -VAR_1;
 if (VAR_14[VAR_7]) {
  if (VAR_16 && VAR_12 & 0x8000)
   goto errout;
  VAR_19 = FUNC_2(VAR_14[VAR_7]);
  if (VAR_19 > 0xFF)
   goto errout;
  VAR_20 = VAR_19;
 }

 if (VAR_14[VAR_5]) {
  if (VAR_14[VAR_6])
   goto errout;
  VAR_18 = FUNC_2(VAR_14[VAR_5]);
  if (VAR_18 > 0xFF)
   goto errout;
  VAR_20 |= VAR_18 << 16;
 } else if (VAR_14[VAR_6]) {
  VAR_18 = FUNC_2(VAR_14[VAR_6]);
  if (VAR_18 > 0x7FFF)
   goto errout;
  VAR_20 |= (VAR_18 | 0x8000) << 16;
 } else
  VAR_20 |= 0xFFFF << 16;

 if (VAR_12 && VAR_16) {
  VAR_20 |= VAR_12 & 0x7F00;
  if (VAR_20 != VAR_12)
   goto errout;
 }

 VAR_22 = FUNC_9(VAR_20);
 if ((VAR_23 = VAR_13->table[VAR_22]) == ((void*)0)) {
  VAR_17 = -VAR_2;
  VAR_23 = FUNC_1(sizeof(struct route4_bucket), VAR_3);
  if (VAR_23 == ((void*)0))
   goto errout;

  FUNC_7(VAR_9);
  VAR_13->table[VAR_22] = VAR_23;
  FUNC_8(VAR_9);
 } else {
  unsigned int VAR_25 = FUNC_0(VAR_20 >> 16);
  VAR_17 = -VAR_0;
  for (VAR_21 = VAR_23->ht[VAR_25]; VAR_21; VAR_21 = VAR_21->next)
   if (VAR_21->handle == VAR_11->handle)
    goto errout;
 }

 FUNC_7(VAR_9);
 if (VAR_14[VAR_7])
  VAR_11->id = VAR_19;

 if (VAR_14[VAR_5])
  VAR_11->id = VAR_19 | VAR_18<<16;
 else if (VAR_14[VAR_6])
  VAR_11->iif = VAR_18;

 VAR_11->handle = VAR_20;
 VAR_11->bkt = VAR_23;
 FUNC_8(VAR_9);

 if (VAR_14[VAR_4]) {
  VAR_11->res.classid = FUNC_2(VAR_14[VAR_4]);
  FUNC_3(VAR_9, &VAR_11->res, VAR_10);
 }

 FUNC_4(VAR_9, &VAR_11->exts, &VAR_24);

 return 0;
errout:
 FUNC_5(VAR_9, &VAR_24);
 return VAR_17;
}
