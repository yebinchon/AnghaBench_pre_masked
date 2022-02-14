
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct htb_sched {int* row_mask; scalar_t__* ptr; scalar_t__* last_ptr_id; scalar_t__* row; } ;
struct TYPE_13__ {scalar_t__* deficit; TYPE_7__* q; } ;
struct TYPE_14__ {TYPE_5__ leaf; } ;
struct htb_class {scalar_t__ quantum; TYPE_6__ un; TYPE_3__* parent; } ;
struct TYPE_12__ {scalar_t__ qlen; } ;
struct TYPE_15__ {TYPE_4__ q; struct sk_buff* (* dequeue ) (TYPE_7__*) ;} ;
struct TYPE_9__ {scalar_t__ ptr; } ;
struct TYPE_10__ {TYPE_1__ inner; } ;
struct TYPE_11__ {TYPE_2__ un; } ;


 int FUNC_0 (struct htb_sched*,struct htb_class*,int,struct sk_buff*) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;
 struct htb_class* FUNC_2 (scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*,TYPE_7__*) ;
 struct sk_buff* FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct htb_sched *VAR_0, int VAR_1,
     int VAR_2)
{
 struct sk_buff *VAR_3 = ((void*)0);
 struct htb_class *VAR_4, *VAR_5;

 VAR_5 = VAR_4 = FUNC_2(VAR_0->row[VAR_2] + VAR_1, VAR_1,
         VAR_0->ptr[VAR_2] + VAR_1,
         VAR_0->last_ptr_id[VAR_2] + VAR_1);

 do {
next:
  if (FUNC_8(!VAR_4))
   return ((void*)0);





  if (FUNC_8(VAR_4->un.leaf.q->q.qlen == 0)) {
   struct htb_class *VAR_6;
   FUNC_1(VAR_0, VAR_4);


   if ((VAR_0->row_mask[VAR_2] & (1 << VAR_1)) == 0)
    return ((void*)0);

   VAR_6 = FUNC_2(VAR_0->row[VAR_2] + VAR_1,
            VAR_1, VAR_0->ptr[VAR_2] + VAR_1,
            VAR_0->last_ptr_id[VAR_2] + VAR_1);

   if (VAR_4 == VAR_5)
    VAR_5 = VAR_6;
   VAR_4 = VAR_6;
   goto next;
  }

  VAR_3 = VAR_4->un.leaf.q->dequeue(VAR_4->un.leaf.q);
  if (FUNC_4(VAR_3 != ((void*)0)))
   break;

  FUNC_6("htb", VAR_4->un.leaf.q);
  FUNC_3((VAR_2 ? VAR_4->parent->un.inner.ptr : VAR_0->
      ptr[0]) + VAR_1);
  VAR_4 = FUNC_2(VAR_0->row[VAR_2] + VAR_1, VAR_1,
         VAR_0->ptr[VAR_2] + VAR_1,
         VAR_0->last_ptr_id[VAR_2] + VAR_1);

 } while (VAR_4 != VAR_5);

 if (FUNC_4(VAR_3 != ((void*)0))) {
  VAR_4->un.leaf.deficit[VAR_2] -= FUNC_5(VAR_3);
  if (VAR_4->un.leaf.deficit[VAR_2] < 0) {
   VAR_4->un.leaf.deficit[VAR_2] += VAR_4->quantum;
   FUNC_3((VAR_2 ? VAR_4->parent->un.inner.ptr : VAR_0->
       ptr[0]) + VAR_1);
  }


  if (!VAR_4->un.leaf.q->q.qlen)
   FUNC_1(VAR_0, VAR_4);
  FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);
 }
 return VAR_3;
}
