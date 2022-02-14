
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hc_index_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0(struct hc_index_data *VAR_9)
{



    VAR_9[VAR_2].flags &= ~VAR_0;


    VAR_9[VAR_6].flags &= ~VAR_0;
    VAR_9[VAR_3].flags &= ~VAR_0;
    VAR_9[VAR_4].flags &= ~VAR_0;
    VAR_9[VAR_5].flags &= ~VAR_0;




    VAR_9[VAR_2].flags |=
        (VAR_7 << VAR_1);


    VAR_9[VAR_6].flags |=
        (VAR_8 << VAR_1);
    VAR_9[VAR_3].flags |=
        (VAR_8 << VAR_1);
    VAR_9[VAR_4].flags |=
        (VAR_8 << VAR_1);
    VAR_9[VAR_5].flags |=
        (VAR_8 << VAR_1);
}
