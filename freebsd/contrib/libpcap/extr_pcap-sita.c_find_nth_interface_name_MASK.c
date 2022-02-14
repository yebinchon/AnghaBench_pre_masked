
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct TYPE_3__* next; scalar_t__ IOPname; } ;
typedef TYPE_1__ iface_t ;
struct TYPE_4__ {TYPE_1__* iface; int * ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static char *FUNC_0(int VAR_3) {
 int VAR_4, VAR_5;
 iface_t *VAR_6;
 char *VAR_7 = 0;

 if (VAR_3 < 0) VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
   if (VAR_2[VAR_4][VAR_5].ip != ((void*)0)) {
    VAR_6 = VAR_2[VAR_4][VAR_5].iface;
    while (VAR_6) {
     if (VAR_6->IOPname) VAR_7 = VAR_6->name;
     if (VAR_3-- == 0) return VAR_7;
     VAR_6 = VAR_6->next;
    }
   }
  }
 }

 if (VAR_7) return VAR_7;
 return "";
}
