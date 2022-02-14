
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_scan_area {unsigned long offset; size_t length; int node; } ;
struct kmemleak_object {unsigned long size; int lock; int area_list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kmemleak_object*) ;
 struct kmemleak_object* FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *,int *) ;
 struct kmemleak_scan_area* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct kmemleak_scan_area*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct kmemleak_object*) ;
 int VAR_1 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_2, unsigned long VAR_3,
     size_t VAR_4, gfp_t VAR_5)
{
 unsigned long VAR_6;
 struct kmemleak_object *VAR_7;
 struct kmemleak_scan_area *VAR_8;

 VAR_7 = FUNC_2(VAR_2, 0);
 if (!VAR_7) {
  FUNC_6("Adding scan area to unknown object at 0x%08lx\n",
         VAR_2);
  return;
 }

 VAR_8 = FUNC_4(VAR_1, VAR_5 & VAR_0);
 if (!VAR_8) {
  FUNC_6("Cannot allocate a scan area\n");
  goto out;
 }

 FUNC_8(&VAR_7->lock, VAR_6);
 if (VAR_3 + VAR_4 > VAR_7->size) {
  FUNC_6("Scan area larger than object 0x%08lx\n", VAR_2);
  FUNC_1(VAR_7);
  FUNC_5(VAR_1, VAR_8);
  goto out_unlock;
 }

 FUNC_0(&VAR_8->node);
 VAR_8->offset = VAR_3;
 VAR_8->length = VAR_4;

 FUNC_3(&VAR_8->node, &VAR_7->area_list);
out_unlock:
 FUNC_9(&VAR_7->lock, VAR_6);
out:
 FUNC_7(VAR_7);
}
