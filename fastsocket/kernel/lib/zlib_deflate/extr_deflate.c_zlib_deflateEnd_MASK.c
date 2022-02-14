
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_5__ {int status; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_4__ {int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(
 z_streamp VAR_6
)
{
    int VAR_7;
    deflate_state *VAR_8;

    if (VAR_6 == ((void*)0) || VAR_6->state == ((void*)0)) return VAR_5;
    VAR_8 = (deflate_state *) VAR_6->state;

    VAR_7 = VAR_8->status;
    if (VAR_7 != VAR_2 && VAR_7 != VAR_0 &&
 VAR_7 != VAR_1) {
      return VAR_5;
    }

    VAR_6->state = ((void*)0);

    return VAR_7 == VAR_0 ? VAR_3 : VAR_4;
}
