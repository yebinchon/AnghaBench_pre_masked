
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct kvm_kernel_irq_routing_entry {int dummy; } ;
struct kvm_irq_routing_table {unsigned int nr_rt_entries; int** chip; int * rt_entries; int * map; } ;
struct kvm_irq_routing_entry {scalar_t__ gsi; scalar_t__ flags; } ;
struct kvm {int irq_lock; struct kvm_irq_routing_table* irq_routing; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct kvm_irq_routing_table*) ;
 int FUNC_1 (struct kvm*,struct kvm_irq_routing_table*) ;
 struct kvm_irq_routing_table* FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm_irq_routing_table*,int *,struct kvm_irq_routing_entry const*) ;
 int FUNC_7 () ;

int FUNC_8(struct kvm *VAR_5,
   const struct kvm_irq_routing_entry *VAR_6,
   unsigned VAR_7,
   unsigned VAR_8)
{
 struct kvm_irq_routing_table *VAR_9, *VAR_10;
 u32 VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14;

 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  if (VAR_6[VAR_11].gsi >= VAR_4)
   return -VAR_0;
  VAR_13 = FUNC_3(VAR_13, VAR_6[VAR_11].gsi);
 }

 VAR_13 += 1;

 VAR_9 = FUNC_2(sizeof(*VAR_9) + (VAR_13 * sizeof(struct hlist_head))
        + (VAR_7 * sizeof(struct kvm_kernel_irq_routing_entry)),
        VAR_2);

 if (!VAR_9)
  return -VAR_1;

 VAR_9->rt_entries = (void *)&VAR_9->map[VAR_13];

 VAR_9->nr_rt_entries = VAR_13;
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
   VAR_9->chip[VAR_11][VAR_12] = -1;

 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  VAR_14 = -VAR_0;
  if (VAR_6->flags)
   goto out;
  VAR_14 = FUNC_6(VAR_9, &VAR_9->rt_entries[VAR_11], VAR_6);
  if (VAR_14)
   goto out;
  ++VAR_6;
 }

 FUNC_4(&VAR_5->irq_lock);
 VAR_10 = VAR_5->irq_routing;
 FUNC_1(VAR_5, VAR_9);
 FUNC_5(&VAR_5->irq_lock);

 FUNC_7();

 VAR_9 = VAR_10;
 VAR_14 = 0;

out:
 FUNC_0(VAR_9);
 return VAR_14;
}
