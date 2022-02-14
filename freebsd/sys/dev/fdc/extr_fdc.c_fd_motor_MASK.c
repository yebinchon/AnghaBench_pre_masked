
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdout; } ;
struct fd_data {int flags; int fdsu; int toffhandle; struct fdc_data* fdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct fd_data*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct fdc_data*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct fd_data *VAR_5, int VAR_6)
{
 struct fdc_data *VAR_7;

 VAR_7 = VAR_5->fdc;



 if (VAR_6) {
  VAR_5->flags |= VAR_2;
  VAR_7->fdout |= (VAR_0 << VAR_5->fdsu);
  FUNC_0(&VAR_5->toffhandle, VAR_4, VAR_3, VAR_5);
 } else {
  FUNC_1(&VAR_5->toffhandle);
  VAR_5->flags &= ~(VAR_1|VAR_2);
  VAR_7->fdout &= ~(VAR_0 << VAR_5->fdsu);
 }
 FUNC_2(VAR_7, VAR_7->fdout);
}
