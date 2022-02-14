
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usershell {int * path; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct usershell *VAR_0, struct usershell const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_1->path != ((void*)0)) {
  VAR_0->path = FUNC_1(VAR_1->path);
  FUNC_0(VAR_0->path != ((void*)0));
 }
}
