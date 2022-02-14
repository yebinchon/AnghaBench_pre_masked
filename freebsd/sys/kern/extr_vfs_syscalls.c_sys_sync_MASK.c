
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sync_args {int dummy; } ;
struct mount {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mount* FUNC_0 (int *) ;
 struct mount* FUNC_1 (struct mount*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct mount*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct mount*,int) ;
 int FUNC_8 (struct mount*,int ) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*) ;
 scalar_t__ FUNC_11 (int *,struct mount**,int ) ;

int
FUNC_12(struct thread *VAR_9, struct sync_args *VAR_10)
{
 struct mount *VAR_11, *VAR_12;
 int VAR_13;

 FUNC_5(&VAR_8);
 for (VAR_11 = FUNC_0(&VAR_7); VAR_11 != ((void*)0); VAR_11 = VAR_12) {
  if (FUNC_7(VAR_11, VAR_1 | VAR_0)) {
   VAR_12 = FUNC_1(VAR_11, VAR_6);
   continue;
  }
  if ((VAR_11->mnt_flag & VAR_3) == 0 &&
      FUNC_11(((void*)0), &VAR_11, VAR_5) == 0) {
   VAR_13 = FUNC_4(VAR_4);
   FUNC_8(VAR_11, VAR_2);
   FUNC_2(VAR_11, VAR_2);
   FUNC_3(VAR_13);
   FUNC_10(VAR_11);
  }
  FUNC_5(&VAR_8);
  VAR_12 = FUNC_1(VAR_11, VAR_6);
  FUNC_9(VAR_11);
 }
 FUNC_6(&VAR_8);
 return (0);
}
