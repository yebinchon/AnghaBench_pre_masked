
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _7z_coders_info {unsigned int numFolders; int * folders; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct _7z_coders_info *VAR_0)
{
 unsigned VAR_1;

 if (VAR_0->folders) {
  for (VAR_1 = 0; VAR_1 < VAR_0->numFolders; VAR_1++)
   FUNC_1(&(VAR_0->folders[VAR_1]));
  FUNC_0(VAR_0->folders);
 }
}
