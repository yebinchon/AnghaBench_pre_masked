
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int dummy; } ;


 int VAR_0 ;
 struct statvfs* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct statvfs* FUNC_1 (struct statvfs*,int) ;
 int VAR_2 ;
 int VAR_3 ;

struct statvfs *
FUNC_2(void)
{

 if (VAR_2 == VAR_3) {
  VAR_2 = VAR_2 ? VAR_2 * 2 : 1;
  VAR_1 = FUNC_1(VAR_1,
      VAR_2 * sizeof(struct statvfs));
  if (VAR_1 == ((void*)0))
   FUNC_0(VAR_0, "realloc");
 }

 return (&VAR_1[VAR_3++]);
}
