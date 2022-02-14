
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fiqhandler {int fh_size; int fh_func; int * fh_regs; } ;


 int VAR_0 ;
 struct fiqhandler* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fiqhandler*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct fiqhandler *VAR_5)
{
 u_int VAR_6;
 struct fiqhandler *VAR_7;

 VAR_6 = FUNC_2(VAR_0);






 if (VAR_5 == FUNC_0(&VAR_4)) {
  if (VAR_5->fh_regs != ((void*)0))
   FUNC_3(VAR_5->fh_regs);
  FUNC_1(&VAR_4, VAR_5, VAR_1);
  if ((VAR_7 = FUNC_0(&VAR_4)) != ((void*)0)) {
   if (VAR_7->fh_regs != ((void*)0))
    FUNC_5(VAR_7->fh_regs);
   FUNC_4(VAR_7->fh_func, VAR_7->fh_size);
  }
 } else
  FUNC_1(&VAR_4, VAR_5, VAR_1);

 if (FUNC_0(&VAR_4) == ((void*)0)) {

  FUNC_4(VAR_2, VAR_3);


  VAR_6 |= VAR_0;
 }

 FUNC_6(VAR_6);
}
