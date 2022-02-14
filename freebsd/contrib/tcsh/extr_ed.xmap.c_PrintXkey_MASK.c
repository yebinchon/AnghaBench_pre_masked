
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Strbuf {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; int buf; } ;
typedef TYPE_1__ CStr ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (struct Strbuf*,TYPE_1__*,int *) ;
 int VAR_0 ;
 struct Strbuf VAR_1 ;
 int FUNC_2 (struct Strbuf*,char) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (struct Strbuf*,int ) ;
 int FUNC_4 (struct Strbuf*) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(const CStr *VAR_4)
{
    struct Strbuf VAR_5 = VAR_1;
    CStr VAR_6;

    if (VAR_4) {
 VAR_6.buf = VAR_4->buf;
 VAR_6.len = VAR_4->len;
    }
    else {
 VAR_6.buf = VAR_0;
 VAR_6.len = 0;
    }

    if (VAR_3 == ((void*)0) && VAR_6.len == 0)
 return;

    FUNC_2(&VAR_5, '"');
    FUNC_3(&VAR_5, VAR_2);
    if (FUNC_1(&VAR_5, &VAR_6, VAR_3) <= -1)

 FUNC_5(FUNC_0(9, 4, "Unbound extended key \"%S\"\n"), VAR_6.buf);
    FUNC_4(&VAR_5);
}
