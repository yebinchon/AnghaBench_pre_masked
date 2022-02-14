
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_8__ {int xo_columns; int xo_anchor_columns; int xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int *,int,int *,char const*,int ,int,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6 (xo_handle_t *VAR_5, const char *VAR_6, ssize_t VAR_7,
   xo_xff_flags_t VAR_8)
{
    int VAR_9;
    int VAR_10 = FUNC_5(VAR_5);
    ssize_t VAR_11 = FUNC_2(&VAR_5->xo_data);

    VAR_9 = FUNC_4(VAR_5, &VAR_5->xo_data, VAR_1 | VAR_8,
       ((void*)0), VAR_6, VAR_7, -1,
       VAR_10, VAR_2);
    if (VAR_8 & VAR_0)
 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_11, VAR_9, VAR_10);

    if (FUNC_0(VAR_5, VAR_3))
 VAR_5->xo_columns += VAR_9;
    if (FUNC_1(VAR_5, VAR_4))
 VAR_5->xo_anchor_columns += VAR_9;
}
