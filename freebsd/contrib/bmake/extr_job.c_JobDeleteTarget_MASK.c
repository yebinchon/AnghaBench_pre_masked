
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; char* path; char* name; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(GNode *VAR_3)
{
 if ((VAR_3->type & (VAR_0|VAR_1)) == 0 && !FUNC_1(VAR_3)) {
     char *VAR_4 = (VAR_3->path == ((void*)0) ? VAR_3->name : VAR_3->path);
     if (!VAR_2 && FUNC_2(VAR_4) != -1) {
  FUNC_0("*** %s removed", VAR_4);
     }
 }
}
