
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bktr_chnlset {size_t index; int max_channel; int name; } ;
struct TYPE_2__ {int * ptr; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;

int
FUNC_1(struct bktr_chnlset *VAR_5)
{
       if (( VAR_5->index < VAR_2 ) ||
               ( VAR_5->index > VAR_1 ))
                       return( VAR_3 );

       FUNC_0(&VAR_5->name, &VAR_4[VAR_5->index].name,
               VAR_0);

       VAR_5->max_channel=VAR_4[VAR_5->index].ptr[0];
       return( 0 );
}
