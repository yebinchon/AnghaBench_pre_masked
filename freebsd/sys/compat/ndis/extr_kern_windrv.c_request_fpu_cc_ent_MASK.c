
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu_cc_ent {int * ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fpu_cc_ent* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fpu_cc_ent*,int ) ;
 int FUNC_2 (struct fpu_cc_ent*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (struct fpu_cc_ent*,int ) ;
 struct fpu_cc_ent* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct fpu_cc_ent *
FUNC_8(void)
{
 struct fpu_cc_ent *VAR_10;

 FUNC_6(&VAR_9);
 if ((VAR_10 = FUNC_0(&VAR_8)) != ((void*)0)) {
  FUNC_2(VAR_10, VAR_5);
  FUNC_7(&VAR_9);
  FUNC_6(&VAR_7);
  FUNC_1(&VAR_6, VAR_10, VAR_5);
  FUNC_7(&VAR_7);
  return (VAR_10);
 }
 FUNC_7(&VAR_9);

 if ((VAR_10 = FUNC_5(sizeof(struct fpu_cc_ent), VAR_2, VAR_3 |
     VAR_4)) != ((void*)0)) {
  VAR_10->ctx = FUNC_3(VAR_0 |
      VAR_1);
  if (VAR_10->ctx != ((void*)0)) {
   FUNC_6(&VAR_7);
   FUNC_1(&VAR_6, VAR_10, VAR_5);
   FUNC_7(&VAR_7);
  } else {
   FUNC_4(VAR_10, VAR_2);
   VAR_10 = ((void*)0);
  }
 }

 return (VAR_10);
}
