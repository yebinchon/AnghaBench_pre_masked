
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int * ns_gc_inodes_h; int ns_gc_inodes; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int,int ) ;

int FUNC_4(struct the_nilfs *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->ns_gc_inodes_h);

 FUNC_2(&VAR_3->ns_gc_inodes);

 VAR_3->ns_gc_inodes_h =
  FUNC_3(sizeof(struct hlist_head) * VAR_2,
   VAR_1);
 if (VAR_3->ns_gc_inodes_h == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(&VAR_3->ns_gc_inodes_h[VAR_4]);
 return 0;
}
