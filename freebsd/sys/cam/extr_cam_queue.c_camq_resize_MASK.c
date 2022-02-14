
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct camq {int entries; int array_size; int ** queue_array; } ;
typedef int cam_pinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int **,int) ;
 int FUNC_2 (int **,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;

u_int32_t
FUNC_4(struct camq *VAR_4, int VAR_5)
{
 cam_pinfo **VAR_6;

 FUNC_0(VAR_5 >= VAR_4->entries, ("camq_resize: "
     "New queue size can't accommodate queued entries (%d < %d).",
     VAR_5, VAR_4->entries));
 VAR_6 = (cam_pinfo **)FUNC_3(VAR_5 * sizeof(cam_pinfo *),
      VAR_2, VAR_3);
 if (VAR_6 == ((void*)0)) {

  return (VAR_1);
 }





 if (VAR_4->queue_array != ((void*)0)) {
  VAR_4->queue_array++;
  FUNC_1(VAR_4->queue_array, VAR_6,
        VAR_4->entries * sizeof(cam_pinfo *));
  FUNC_2(VAR_4->queue_array, VAR_2);
 }
 VAR_4->queue_array = VAR_6-1;
 VAR_4->array_size = VAR_5;
 return (VAR_0);
}
