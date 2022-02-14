
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_5__ {scalar_t__ balance; void const* key; struct TYPE_5__* llink; struct TYPE_5__* rlink; } ;
typedef TYPE_1__ posix_tnode ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (struct path*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*) ;
 scalar_t__ FUNC_4 (struct path*) ;

posix_tnode *
FUNC_5(const void *VAR_0, posix_tnode **VAR_1,
    int (*VAR_2)(const void *, const void *))
{
 struct path VAR_3;
 posix_tnode **VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;


 if (VAR_1 == ((void*)0))
  return (((void*)0));







 FUNC_1(&VAR_3);
 VAR_4 = VAR_1;
 while (*VAR_4 != ((void*)0)) {
  if ((*VAR_4)->balance != 0) {
   VAR_1 = VAR_4;
   FUNC_1(&VAR_3);
  }
  VAR_10 = VAR_2(VAR_0, (*VAR_4)->key);
  if (VAR_10 < 0) {
   FUNC_2(&VAR_3);
   VAR_4 = &(*VAR_4)->llink;
  } else if (VAR_10 > 0) {
   FUNC_3(&VAR_3);
   VAR_4 = &(*VAR_4)->rlink;
  } else {
   return (*VAR_4);
  }
 }


 VAR_5 = *VAR_4 = FUNC_0(sizeof(**VAR_4));
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->key = (void *)VAR_0;
 VAR_5->llink = ((void*)0);
 VAR_5->rlink = ((void*)0);
 VAR_5->balance = 0;







 for (VAR_6 = *VAR_1; VAR_6 != *VAR_4;) {
  if (FUNC_4(&VAR_3)) {
   VAR_6->balance += 1;
   VAR_6 = VAR_6->llink;
  } else {
   VAR_6->balance -= 1;
   VAR_6 = VAR_6->rlink;
  }
 }






 VAR_7 = *VAR_1;
 if (VAR_7->balance > 1) {
  VAR_8 = VAR_7->llink;
  if (VAR_8->balance < 0) {
   VAR_9 = VAR_8->rlink;
   VAR_8->rlink = VAR_9->llink;
   VAR_9->llink = VAR_8;
   VAR_7->llink = VAR_9->rlink;
   VAR_9->rlink = VAR_7;
   *VAR_1 = VAR_9;

   VAR_7->balance = VAR_9->balance > 0 ? -1 : 0;
   VAR_8->balance = VAR_9->balance < 0 ? 1 : 0;
   VAR_9->balance = 0;
  } else {
   VAR_7->llink = VAR_8->rlink;
   VAR_8->rlink = VAR_7;
   *VAR_1 = VAR_8;

   VAR_7->balance = 0;
   VAR_8->balance = 0;
  }
 } else if (VAR_7->balance < -1) {
  VAR_8 = VAR_7->rlink;
  if (VAR_8->balance > 0) {
   posix_tnode *VAR_11 = VAR_8->llink;
   VAR_7->rlink = VAR_11->llink;
   VAR_11->llink = VAR_7;
   VAR_8->llink = VAR_11->rlink;
   VAR_11->rlink = VAR_8;
   *VAR_1 = VAR_11;

   VAR_7->balance = VAR_11->balance < 0 ? 1 : 0;
   VAR_8->balance = VAR_11->balance > 0 ? -1 : 0;
   VAR_11->balance = 0;
  } else {
   VAR_7->rlink = VAR_8->llink;
   VAR_8->llink = VAR_7;
   *VAR_1 = VAR_8;

   VAR_7->balance = 0;
   VAR_8->balance = 0;
  }
 }


 return (VAR_5);
}
