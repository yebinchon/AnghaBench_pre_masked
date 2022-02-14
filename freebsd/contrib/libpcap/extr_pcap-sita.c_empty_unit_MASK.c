
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* imsg; } ;
typedef TYPE_1__ unit_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (void*,int) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3, int VAR_4) {
 unit_t *VAR_5 = &VAR_2[VAR_3][VAR_4];

 FUNC_0(VAR_5);
 if (VAR_5->imsg) {
  void *VAR_6;

  VAR_6 = (char *)FUNC_2(VAR_5->imsg, 1);
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_1, "Warning...call to realloc() failed, value of errno is %d\n", VAR_0);
   return;
  }
  VAR_5->imsg = VAR_6;
 }
}
