
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct copy_file_range_args {int * outoffp; int * inoffp; int flags; int len; int outfd; int infd; } ;
typedef int off_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread*,int ,int *,int ,int *,int ,int ) ;

int
FUNC_3(struct thread *VAR_0, struct copy_file_range_args *VAR_1)
{
 off_t VAR_2, VAR_3, *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = VAR_5 = ((void*)0);
 if (VAR_1->inoffp != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_1->inoffp, &VAR_2, sizeof(off_t));
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_4 = &VAR_2;
 }
 if (VAR_1->outoffp != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_1->outoffp, &VAR_3, sizeof(off_t));
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_5 = &VAR_3;
 }
 VAR_6 = FUNC_2(VAR_0, VAR_1->infd, VAR_4, VAR_1->outfd,
     VAR_5, VAR_1->len, VAR_1->flags);
 if (VAR_6 == 0 && VAR_1->inoffp != ((void*)0))
  VAR_6 = FUNC_1(VAR_4, VAR_1->inoffp, sizeof(off_t));
 if (VAR_6 == 0 && VAR_1->outoffp != ((void*)0))
  VAR_6 = FUNC_1(VAR_5, VAR_1->outoffp, sizeof(off_t));
 return (VAR_6);
}
