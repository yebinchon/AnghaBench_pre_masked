
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,char const*,int*) ;
 int FUNC_1 (struct thread*,int,int ) ;
 struct vfsconf* FUNC_2 (char const*) ;

struct vfsconf *
FUNC_3(const char *VAR_3, struct thread *VAR_4, int *VAR_5)
{
 struct vfsconf *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 != ((void*)0))
  return (VAR_6);


 *VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_7);
 VAR_8 = (*VAR_5 == 0);
 if (*VAR_5 == VAR_0)
  *VAR_5 = 0;
 if (*VAR_5)
  return (((void*)0));


 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == ((void*)0)) {
  if (VAR_8)
   (void)FUNC_1(VAR_4, VAR_7, VAR_2);
  *VAR_5 = VAR_1;
  return (((void*)0));
 }
 return (VAR_6);
}
