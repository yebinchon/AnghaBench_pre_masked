
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Strbuf {size_t len; int s; } ;
struct TYPE_3__ {struct TYPE_3__* sibling; struct TYPE_3__* next; int type; int val; int ch; } ;
typedef TYPE_1__ XmapNode ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (struct Strbuf*,char) ;
 int FUNC_2 (struct Strbuf*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct Strbuf*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct Strbuf *VAR_0, const XmapNode *VAR_1)
{
    size_t VAR_2;

    if (VAR_1 == ((void*)0)) {



 return;
    }

    VAR_2 = VAR_0->len;
    FUNC_4(VAR_0, VAR_1->ch);
    if (VAR_1->next == ((void*)0)) {

 FUNC_1(VAR_0, '"');
 FUNC_2(VAR_0);
 FUNC_3(VAR_0->s, &VAR_1->val, VAR_1->type);
    }
    else
 FUNC_6(VAR_0, VAR_1->next);


    if (VAR_1->sibling) {
 VAR_0->len = VAR_2;
 FUNC_6(VAR_0, VAR_1->sibling);
    }
}
