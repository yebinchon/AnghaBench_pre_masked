
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioeventfd {int flags; int len; scalar_t__ addr; int datamatch; int fd; } ;
struct kvm {int slots_lock; int ioeventfds; } ;
struct eventfd_ctx {int dummy; } ;
struct _ioeventfd {scalar_t__ addr; int length; int wildcard; int list; int dev; int datamatch; struct eventfd_ctx* eventfd; } ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct eventfd_ctx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct eventfd_ctx*) ;
 struct eventfd_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct eventfd_ctx*) ;
 scalar_t__ FUNC_5 (struct kvm*,struct _ioeventfd*) ;
 int VAR_9 ;
 int FUNC_6 (struct _ioeventfd*) ;
 int FUNC_7 (struct kvm*,int,int *) ;
 int FUNC_8 (int *,int *) ;
 struct _ioeventfd* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct kvm *VAR_10, struct kvm_ioeventfd *VAR_11)
{
 int VAR_12 = VAR_11->flags & VAR_5;
 enum kvm_bus VAR_13 = VAR_12 ? VAR_8 : VAR_7;
 struct _ioeventfd *VAR_14;
 struct eventfd_ctx *VAR_15;
 int VAR_16;


 switch (VAR_11->len) {
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  return -VAR_1;
 }


 if (VAR_11->addr + VAR_11->len < VAR_11->addr)
  return -VAR_1;


 if (VAR_11->flags & ~VAR_6)
  return -VAR_1;

 VAR_15 = FUNC_3(VAR_11->fd);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 VAR_14 = FUNC_9(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_16 = -VAR_2;
  goto fail;
 }

 FUNC_0(&VAR_14->list);
 VAR_14->addr = VAR_11->addr;
 VAR_14->length = VAR_11->len;
 VAR_14->eventfd = VAR_15;


 if (VAR_11->flags & VAR_4)
  VAR_14->datamatch = VAR_11->datamatch;
 else
  VAR_14->wildcard = 1;

 FUNC_11(&VAR_10->slots_lock);


 if (FUNC_5(VAR_10, VAR_14)) {
  VAR_16 = -VAR_0;
  goto unlock_fail;
 }

 FUNC_8(&VAR_14->dev, &VAR_9);

 VAR_16 = FUNC_7(VAR_10, VAR_13, &VAR_14->dev);
 if (VAR_16 < 0)
  goto unlock_fail;

 FUNC_10(&VAR_14->list, &VAR_10->ioeventfds);

 FUNC_12(&VAR_10->slots_lock);

 return 0;

unlock_fail:
 FUNC_12(&VAR_10->slots_lock);

fail:
 FUNC_6(VAR_14);
 FUNC_4(VAR_15);

 return VAR_16;
}
