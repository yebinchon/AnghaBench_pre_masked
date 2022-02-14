
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int ig_list; int refcount; } ;
struct TYPE_2__ {int device_list_mutex; } ;


 int FUNC_0 (char*,struct iser_device*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iser_device*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct iser_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct iser_device *VAR_2)
{
 FUNC_4(&VAR_1.device_list_mutex);
 VAR_2->refcount--;
 FUNC_0("device %p refcount %d", VAR_2, VAR_2->refcount);
 if (!VAR_2->refcount) {
  FUNC_2(VAR_2);
  FUNC_3(&VAR_2->ig_list);
  FUNC_1(VAR_2, VAR_0);
  VAR_2 = ((void*)0);
 }
 FUNC_5(&VAR_1.device_list_mutex);
}
