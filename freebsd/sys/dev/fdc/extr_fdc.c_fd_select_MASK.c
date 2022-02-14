
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdout; } ;
struct fd_data {int fdsu; struct fdc_data* fdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fdc_data*,int) ;

__attribute__((used)) static void
FUNC_1(struct fd_data *VAR_3)
{
 struct fdc_data *VAR_4;


 VAR_4 = VAR_3->fdc;
 VAR_4->fdout &= ~VAR_1;
 VAR_4->fdout |= VAR_0 | VAR_2 | VAR_3->fdsu;
 FUNC_0(VAR_4, VAR_4->fdout);
}
