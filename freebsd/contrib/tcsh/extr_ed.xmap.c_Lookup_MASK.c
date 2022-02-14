
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Strbuf {int s; } ;
struct TYPE_6__ {scalar_t__ ch; struct TYPE_6__* sibling; int type; int val; struct TYPE_6__* next; } ;
typedef TYPE_1__ XmapNode ;
struct TYPE_7__ {int len; scalar_t__* buf; } ;
typedef TYPE_2__ CStr ;


 int FUNC_0 (struct Strbuf*,TYPE_1__ const*) ;
 int FUNC_1 (struct Strbuf*,char) ;
 int FUNC_2 (struct Strbuf*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct Strbuf*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct Strbuf *VAR_0, const CStr *VAR_1, const XmapNode *VAR_2)
{
    if (VAR_2 == ((void*)0))
 return (-1);

    if (VAR_1->len == 0) {

 FUNC_0(VAR_0, VAR_2);
 return (0);
    }
    else {

 if (VAR_2->ch == *(VAR_1->buf)) {

     FUNC_4(VAR_0, VAR_2->ch);
     if (VAR_2->next != ((void*)0)) {

  CStr VAR_3;
  VAR_3.buf = VAR_1->buf + 1;
  VAR_3.len = VAR_1->len - 1;
  return (FUNC_5(VAR_0, &VAR_3, VAR_2->next));
     }
     else {

  if (VAR_1->len == 1) {
      FUNC_1(VAR_0, '"');
      FUNC_2(VAR_0);
      FUNC_3(VAR_0->s, &VAR_2->val, VAR_2->type);
      return (0);
  }
  else
      return (-1);
     }
 }
 else {

     if (VAR_2->sibling)
  return (FUNC_5(VAR_0, VAR_1, VAR_2->sibling));
     else
  return (-1);
 }
    }
}
