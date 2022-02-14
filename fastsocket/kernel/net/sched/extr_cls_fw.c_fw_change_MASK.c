
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {struct fw_head* root; } ;
struct nlattr {int dummy; } ;
struct fw_head {struct fw_filter** ht; scalar_t__ mask; } ;
struct fw_filter {scalar_t__ id; struct fw_filter* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct tcf_proto*,struct fw_filter*,struct nlattr**,struct nlattr**,unsigned long) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (struct fw_filter*) ;
 void* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_6 (struct tcf_proto*) ;
 int FUNC_7 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_8(struct tcf_proto *VAR_7, unsigned long VAR_8,
       u32 VAR_9,
       struct nlattr **VAR_10,
       unsigned long *VAR_11)
{
 struct fw_head *VAR_12 = (struct fw_head*)VAR_7->root;
 struct fw_filter *VAR_13 = (struct fw_filter *) *VAR_11;
 struct nlattr *VAR_14 = VAR_10[VAR_5];
 struct nlattr *VAR_15[VAR_4 + 1];
 int VAR_16;

 if (!VAR_14)
  return VAR_9 ? -VAR_0 : 0;

 VAR_16 = FUNC_5(VAR_15, VAR_4, VAR_14, VAR_6);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13 != ((void*)0)) {
  if (VAR_13->id != VAR_9 && VAR_9)
   return -VAR_0;
  return FUNC_0(VAR_7, VAR_13, VAR_15, VAR_10, VAR_8);
 }

 if (!VAR_9)
  return -VAR_0;

 if (VAR_12 == ((void*)0)) {
  u32 VAR_17 = 0xFFFFFFFF;
  if (VAR_15[VAR_3])
   VAR_17 = FUNC_4(VAR_15[VAR_3]);

  VAR_12 = FUNC_3(sizeof(struct fw_head), VAR_2);
  if (VAR_12 == ((void*)0))
   return -VAR_1;
  VAR_12->mask = VAR_17;

  FUNC_6(VAR_7);
  VAR_7->root = VAR_12;
  FUNC_7(VAR_7);
 }

 VAR_13 = FUNC_3(sizeof(struct fw_filter), VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_13->id = VAR_9;

 VAR_16 = FUNC_0(VAR_7, VAR_13, VAR_15, VAR_10, VAR_8);
 if (VAR_16 < 0)
  goto errout;

 VAR_13->next = VAR_12->ht[FUNC_1(VAR_9)];
 FUNC_6(VAR_7);
 VAR_12->ht[FUNC_1(VAR_9)] = VAR_13;
 FUNC_7(VAR_7);

 *VAR_11 = (unsigned long)VAR_13;
 return 0;

errout:
 FUNC_2(VAR_13);
 return VAR_16;
}
