
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int window; scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; int parent; } ;
typedef TYPE_1__ BOX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(BOX * VAR_4)
{
    FUNC_2(VAR_4->window);
    FUNC_1(VAR_4->parent,
   VAR_4->y - VAR_0, VAR_4->x - VAR_0,
   VAR_4->height + (2 * VAR_0), VAR_4->width + (2 * VAR_0),
   VAR_3, VAR_2);

    FUNC_0(VAR_4->window, VAR_1);
    FUNC_3(VAR_4->window, "%02d", VAR_4->value);
    return 0;
}
