
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fiqhandler {int fh_size; int fh_flags; int fh_func; int * fh_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fiqhandler* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fiqhandler*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct fiqhandler *VAR_6)
{
 struct fiqhandler *VAR_7;
 u_int VAR_8;
 int VAR_9 = 0;

 if (VAR_6->fh_size > 0x100)
  return (VAR_1);

 VAR_8 = FUNC_2(VAR_3);

 if ((VAR_7 = FUNC_0(&VAR_5)) != ((void*)0)) {
  if ((VAR_7->fh_flags & VAR_2) == 0) {
   VAR_9 = VAR_0;
   goto out;
  }


  if (VAR_7->fh_regs != ((void*)0))
   FUNC_3(VAR_7->fh_regs);
 }


 if (VAR_6->fh_regs != ((void*)0))
  FUNC_5(VAR_6->fh_regs);

 FUNC_1(&VAR_5, VAR_6, VAR_4);


 FUNC_4(VAR_6->fh_func, VAR_6->fh_size);


 VAR_8 &= ~VAR_3;

 out:
 FUNC_6(VAR_8);
 return (VAR_9);
}
