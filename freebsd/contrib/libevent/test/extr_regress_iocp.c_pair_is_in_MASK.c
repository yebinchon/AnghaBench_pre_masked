
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_overlapped {int call_count; uintptr_t* keys; scalar_t__* sizes; int lock; } ;
typedef scalar_t__ ev_ssize_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dummy_overlapped *VAR_0, uintptr_t VAR_1, ev_ssize_t VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 FUNC_0(VAR_0->lock, 0);
 for (VAR_3=0; VAR_3 < VAR_0->call_count; ++VAR_3) {
  if (VAR_0->keys[VAR_3] == VAR_1 && VAR_0->sizes[VAR_3] == VAR_2) {
   VAR_4 = 1;
   break;
  }
 }
 FUNC_1(VAR_0->lock, 0);
 return VAR_4;
}
