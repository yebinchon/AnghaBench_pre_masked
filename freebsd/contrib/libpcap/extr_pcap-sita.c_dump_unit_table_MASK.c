
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* IOPname; struct TYPE_3__* next; } ;
typedef TYPE_1__ iface_t ;
struct TYPE_4__ {char* ip; int fd; TYPE_1__* iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static void FUNC_1(void) {
 int VAR_3, VAR_4;
 iface_t *VAR_5;

 FUNC_0("%c:%c %s %s\n", 'C', 'S', "fd", "IP Address");
 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
   if (VAR_2[VAR_3][VAR_4].ip != ((void*)0))
    FUNC_0("%d:%d %2d %s\n", VAR_3, VAR_4, VAR_2[VAR_3][VAR_4].fd, VAR_2[VAR_3][VAR_4].ip);
   VAR_5 = VAR_2[VAR_3][VAR_4].iface;
   while (VAR_5) {
    char *VAR_6 = (VAR_5->name) ? VAR_5->name : "";
    char *VAR_7 = (VAR_5->IOPname) ? VAR_5->IOPname : "";
    VAR_5 = VAR_5->next;
    FUNC_0("   %12s    -> %12s\n", VAR_7, VAR_6);
   }
  }
 }
}
