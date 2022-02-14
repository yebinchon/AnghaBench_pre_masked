
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; } ;
typedef TYPE_1__ DYNBUF ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(DYNBUF * VAR_0, const char *VAR_1)
{
    if (VAR_1 == 0) {
 VAR_0->used = 0;
 FUNC_2(VAR_0, "");
    } else {
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
    }
}
