
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spigen_mmap {scalar_t__ kvaddr; int bufsize; int * bufobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spigen_mmap*,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct spigen_mmap *VAR_3 = VAR_2;

 if (VAR_3->kvaddr != 0)
  FUNC_1(VAR_3->kvaddr, VAR_3->bufsize / VAR_1);
 if (VAR_3->bufobj != ((void*)0))
  FUNC_2(VAR_3->bufobj);
 FUNC_0(VAR_3, VAR_0);
}
