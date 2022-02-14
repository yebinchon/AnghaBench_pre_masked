
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_buffer {int sb_list; } ;
struct nilfs_sc_info {int sc_segbufs; } ;


 struct nilfs_segment_buffer* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nilfs_segment_buffer*) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_0)
{
 struct nilfs_segment_buffer *VAR_1;

 while (!FUNC_2(&VAR_0->sc_segbufs)) {
  VAR_1 = FUNC_0(&VAR_0->sc_segbufs);
  FUNC_1(&VAR_1->sb_list);
  FUNC_3(VAR_1);
 }

}
