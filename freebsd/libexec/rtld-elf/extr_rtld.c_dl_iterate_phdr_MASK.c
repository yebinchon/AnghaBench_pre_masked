
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_phdr_info {int dummy; } ;
typedef int phdr_info ;
typedef int (* __dl_iterate_hdr_callback ) (struct dl_phdr_info*,int,void*) ;
typedef int RtldLockState ;
typedef int Obj_Entry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,struct dl_phdr_info*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

int
FUNC_11(__dl_iterate_hdr_callback VAR_5, void *VAR_6)
{
 struct dl_phdr_info VAR_7;
 Obj_Entry *VAR_8, VAR_9;
 RtldLockState VAR_10, VAR_11;
 int VAR_12;

 FUNC_6(&VAR_9);
 VAR_12 = 0;

 FUNC_10(VAR_4, &VAR_11);
 FUNC_10(VAR_3, &VAR_10);
 for (VAR_8 = FUNC_3(FUNC_0(&VAR_1)); VAR_8 != ((void*)0);) {
  FUNC_1(&VAR_1, VAR_8, &VAR_9, VAR_0);
  FUNC_8(VAR_8, &VAR_7);
  FUNC_5(VAR_8);
  FUNC_7(VAR_3, &VAR_10);

  VAR_12 = VAR_5(&VAR_7, sizeof VAR_7, VAR_6);

  FUNC_10(VAR_3, &VAR_10);
  FUNC_9(VAR_8);
  VAR_8 = FUNC_4(&VAR_9);
  FUNC_2(&VAR_1, &VAR_9, VAR_0);
  if (VAR_12 != 0) {
   FUNC_7(VAR_3, &VAR_10);
   FUNC_7(VAR_4, &VAR_11);
   return (VAR_12);
  }
 }

 if (VAR_12 == 0) {
  FUNC_8(&VAR_2, &VAR_7);
  FUNC_7(VAR_3, &VAR_10);
  VAR_12 = VAR_5(&VAR_7, sizeof(VAR_7), VAR_6);
 }
 FUNC_7(VAR_4, &VAR_11);
 return (VAR_12);
}
