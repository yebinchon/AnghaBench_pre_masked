
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int name; } ;
struct g_flashmap_slice {scalar_t__ sl_end; scalar_t__ sl_start; int sl_name; } ;
struct g_flashmap_head {int dummy; } ;
struct flash_slice {scalar_t__ size; scalar_t__ base; int label; } ;
typedef scalar_t__ (* flash_slicer_t ) (int ,int ,struct flash_slice*,int*) ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct g_flashmap_head*,struct g_flashmap_slice*,int ) ;
 int FUNC_1 (struct flash_slice*,int ) ;
 void* FUNC_2 (int,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, struct g_provider *VAR_6, flash_slicer_t VAR_7,
    struct g_flashmap_head *VAR_8)
{
 struct flash_slice *VAR_9;
 struct g_flashmap_slice *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_9 = FUNC_2(sizeof(struct flash_slice) * VAR_0,
     VAR_1, VAR_2 | VAR_3);
 if (VAR_7(VAR_5, VAR_6->name, VAR_9, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_10 = FUNC_2(sizeof(struct g_flashmap_slice),
       VAR_1, VAR_2);

   VAR_10->sl_name = VAR_9[VAR_11].label;
   VAR_10->sl_start = VAR_9[VAR_11].base;
   VAR_10->sl_end = VAR_9[VAR_11].base + VAR_9[VAR_11].size - 1;

   FUNC_0(VAR_8, VAR_10, VAR_4);
  }
 }

 FUNC_1(VAR_9, VAR_1);
 return (VAR_12);
}
