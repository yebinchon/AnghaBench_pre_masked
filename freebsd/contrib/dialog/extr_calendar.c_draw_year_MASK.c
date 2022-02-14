
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_year; } ;
struct TYPE_3__ {int window; scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; int parent; } ;
typedef TYPE_1__ BOX ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,...) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(BOX * VAR_5, struct tm *VAR_6)
{
    int VAR_7 = VAR_6->tm_year + 1900;

    FUNC_1(VAR_5->parent, VAR_0);
    (void) FUNC_3(VAR_5->parent, VAR_5->y - 2, VAR_5->x - 1, FUNC_0("Year"));
    FUNC_2(VAR_5->parent,
    VAR_5->y - 1, VAR_5->x - 1,
    VAR_5->height + 2, VAR_5->width + 2,
    VAR_2,
    VAR_4,
    VAR_3);
    FUNC_1(VAR_5->window, VAR_1);
    FUNC_3(VAR_5->window, 0, 0, "%4d", VAR_7);
    FUNC_4(VAR_5->window, 0, 0);
    return 0;
}
