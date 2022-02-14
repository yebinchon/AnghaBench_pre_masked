
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int flags; int retry; int fdc_mtx; int * bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fdc_data*) ;
 int FUNC_1 (char*,int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct fdc_data *VAR_5;

 VAR_5 = VAR_4;
 int VAR_6;

 FUNC_3(&VAR_5->fdc_mtx);
 VAR_5->flags |= VAR_0;
 while ((VAR_5->flags & VAR_1) == 0) {
  FUNC_4(&VAR_5->fdc_mtx);
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 && VAR_2 & 0x20) {
   if (VAR_5->bp != ((void*)0))
    FUNC_1("", VAR_5->bp, "");
   FUNC_5("Retry line %d\n", VAR_3);
  }
  VAR_5->retry += VAR_6;
  FUNC_3(&VAR_5->fdc_mtx);
 }
 VAR_5->flags &= ~(VAR_1 | VAR_0);
 FUNC_4(&VAR_5->fdc_mtx);

 FUNC_2(0);
}
