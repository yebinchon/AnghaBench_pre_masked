
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_dataset_head {int dummy; } ;
typedef struct zone_dataset_head zone_dataset_t ;


 struct zone_dataset_head* FUNC_0 (struct zone_dataset_head*) ;
 int FUNC_1 (struct zone_dataset_head*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct zone_dataset_head*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct zone_dataset_head *VAR_3;
 zone_dataset_t *VAR_4;

 VAR_3 = VAR_2;
        while ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
                FUNC_1(VAR_4, VAR_1);
                FUNC_2(VAR_4, VAR_0);
        }
        FUNC_2(VAR_3, VAR_0);
}
