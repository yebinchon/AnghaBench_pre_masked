
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2 (xo_buffer_t *VAR_0, const char *VAR_1, ssize_t VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == 0 || !FUNC_1(VAR_0, VAR_2))
 return;

    FUNC_0(VAR_0->xb_curp, VAR_1, VAR_2);
    VAR_0->xb_curp += VAR_2;
}
