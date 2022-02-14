
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {int q; struct route4_head* root; } ;
struct route4_head {struct route4_bucket** table; } ;
struct route4_filter {int handle; int id; struct route4_filter* next; TYPE_1__* bkt; } ;
struct route4_bucket {struct route4_filter** ht; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {struct route4_filter** ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct route4_filter*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,struct route4_head*,int ) ;
 int FUNC_5 (struct tcf_proto*,unsigned long,struct route4_filter*,int,struct route4_head*,struct nlattr**,struct nlattr*,int) ;
 int FUNC_6 (struct tcf_proto*) ;
 int FUNC_7 (struct tcf_proto*) ;
 unsigned int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct tcf_proto *VAR_7, unsigned long VAR_8,
         u32 VAR_9,
         struct nlattr **VAR_10,
         unsigned long *VAR_11)
{
 struct route4_head *VAR_12 = VAR_7->root;
 struct route4_filter *VAR_13, *VAR_14, **VAR_15;
 struct route4_bucket *VAR_16;
 struct nlattr *VAR_17 = VAR_10[VAR_3];
 struct nlattr *VAR_18[VAR_5 + 1];
 unsigned int VAR_19, VAR_20;
 u32 VAR_21 = 0;
 int VAR_22;

 if (VAR_17 == ((void*)0))
  return VAR_9 ? -VAR_0 : 0;

 VAR_22 = FUNC_3(VAR_18, VAR_5, VAR_17, VAR_6);
 if (VAR_22 < 0)
  return VAR_22;

 if ((VAR_13 = (struct route4_filter*)*VAR_11) != ((void*)0)) {
  if (VAR_13->handle != VAR_9 && VAR_9)
   return -VAR_0;

  if (VAR_13->bkt)
   VAR_21 = VAR_13->handle;

  VAR_22 = FUNC_5(VAR_7, VAR_8, VAR_13, VAR_9, VAR_12, VAR_18,
   VAR_10[VAR_4], 0);
  if (VAR_22 < 0)
   return VAR_22;

  goto reinsert;
 }

 VAR_22 = -VAR_1;
 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_2(sizeof(struct route4_head), VAR_2);
  if (VAR_12 == ((void*)0))
   goto errout;

  FUNC_6(VAR_7);
  VAR_7->root = VAR_12;
  FUNC_7(VAR_7);
 }

 VAR_13 = FUNC_2(sizeof(struct route4_filter), VAR_2);
 if (VAR_13 == ((void*)0))
  goto errout;

 VAR_22 = FUNC_5(VAR_7, VAR_8, VAR_13, VAR_9, VAR_12, VAR_18,
  VAR_10[VAR_4], 1);
 if (VAR_22 < 0)
  goto errout;

reinsert:
 VAR_19 = FUNC_0(VAR_13->handle >> 16);
 for (VAR_15 = &VAR_13->bkt->ht[VAR_19]; (VAR_14=*VAR_15) != ((void*)0); VAR_15 = &VAR_14->next)
  if (VAR_13->handle < VAR_14->handle)
   break;

 VAR_13->next = VAR_14;
 FUNC_6(VAR_7);
 *VAR_15 = VAR_13;

 if (VAR_21 && VAR_13->handle != VAR_21) {
  VAR_20 = FUNC_8(VAR_21);
  VAR_19 = FUNC_0(VAR_21 >> 16);
  if ((VAR_16 = VAR_12->table[VAR_20]) != ((void*)0)) {
   for (VAR_15 = &VAR_16->ht[VAR_19]; *VAR_15; VAR_15 = &(*VAR_15)->next) {
    if (*VAR_15 == VAR_13) {
     *VAR_15 = VAR_13->next;
     break;
    }
   }
  }
 }
 FUNC_7(VAR_7);

 FUNC_4(VAR_7->q, VAR_12, VAR_13->id);
 *VAR_11 = (unsigned long)VAR_13;
 return 0;

errout:
 FUNC_1(VAR_13);
 return VAR_22;
}
