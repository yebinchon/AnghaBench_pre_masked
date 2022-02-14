
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int name; struct TYPE_6__* next; struct TYPE_6__* child; } ;
typedef TYPE_1__ NODE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**,char*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(NODE *VAR_1, NODE *VAR_2, char const *VAR_3)
{
 int VAR_4, VAR_5;
 NODE *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10;

 VAR_4 = 0;

 if (VAR_1 != ((void*)0))
  VAR_6 = VAR_1->child;
 else
  VAR_6 = ((void*)0);
 if (VAR_2 != ((void*)0))
  VAR_7 = VAR_2->child;
 else
  VAR_7 = ((void*)0);
 while (VAR_6 != ((void*)0) || VAR_7 != ((void*)0)) {
  VAR_8 = VAR_9 = ((void*)0);
  if (VAR_6 != ((void*)0))
   VAR_8 = VAR_6->next;
  if (VAR_7 != ((void*)0))
   VAR_9 = VAR_7->next;
  if (VAR_6 != ((void*)0) && VAR_7 != ((void*)0)) {
   if (VAR_6->type != VAR_0 && VAR_7->type == VAR_0) {
    VAR_9 = VAR_7;
    VAR_7 = ((void*)0);
   } else if (VAR_6->type == VAR_0 && VAR_7->type != VAR_0) {
    VAR_8 = VAR_6;
    VAR_6 = ((void*)0);
   } else {
    VAR_5 = FUNC_3(VAR_6->name, VAR_7->name);
    if (VAR_5 > 0) {
     VAR_8 = VAR_6;
     VAR_6 = ((void*)0);
    } else if (VAR_5 < 0) {
     VAR_9 = VAR_7;
     VAR_7 = ((void*)0);
    }
   }
  }
  if (VAR_6 == ((void*)0) && VAR_7->type == VAR_0) {
   FUNC_0(&VAR_10, "%s%d/", VAR_3, VAR_7->name);
   VAR_5 = FUNC_4(VAR_6, VAR_7, VAR_10);
   FUNC_2(VAR_10);
   VAR_5 += FUNC_1(VAR_6, VAR_7, VAR_3);
  } else if (VAR_7 == ((void*)0) && VAR_6->type == VAR_0) {
   FUNC_0(&VAR_10, "%s%d/", VAR_3, VAR_6->name);
   VAR_5 = FUNC_4(VAR_6, VAR_7, VAR_10);
   FUNC_2(VAR_10);
   VAR_5 += FUNC_1(VAR_6, VAR_7, VAR_3);
  } else if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
   VAR_5 = FUNC_1(VAR_6, VAR_7, VAR_3);
  } else if (VAR_6->type == VAR_0 && VAR_7->type == VAR_0) {
   FUNC_0(&VAR_10, "%s%d/", VAR_3, VAR_6->name);
   VAR_5 = FUNC_4(VAR_6, VAR_7, VAR_10);
   FUNC_2(VAR_10);
   VAR_5 += FUNC_1(VAR_6, VAR_7, VAR_3);
  } else {
   VAR_5 = FUNC_1(VAR_6, VAR_7, VAR_3);
  }
  VAR_4 += VAR_5;
  VAR_6 = VAR_8;
  VAR_7 = VAR_9;
 }
 return (VAR_4);
}
