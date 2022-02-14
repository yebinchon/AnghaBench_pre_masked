
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; size_t index; } ;
typedef TYPE_1__ bucket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__** VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(bucket *VAR_9, int VAR_10)
{
    if (VAR_9->class == VAR_1)
 FUNC_1(VAR_10);
    VAR_9->class = VAR_0;
    if (!VAR_9->index)
 VAR_9->index = VAR_5;
    if (VAR_5 >= VAR_4)
 FUNC_0();
    VAR_6[VAR_5] = VAR_9;
    VAR_8[VAR_5] = VAR_3;
    VAR_7[VAR_5] = VAR_2;
}
