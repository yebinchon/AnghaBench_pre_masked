
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int d_flags; struct cdevsw* d_gianttrick; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdevsw*) ;
 int FUNC_1 (struct cdevsw*,struct cdevsw*,int) ;

__attribute__((used)) static void
FUNC_2(struct cdevsw *VAR_1)
{
 struct cdevsw *VAR_2;

 if (VAR_1->d_gianttrick != ((void*)0)) {
  VAR_2 = VAR_1->d_gianttrick;
  FUNC_1(VAR_1, VAR_2, sizeof *VAR_1);
  FUNC_0(VAR_2);
  VAR_1->d_gianttrick = ((void*)0);
 }
 VAR_1->d_flags &= ~VAR_0;
}
