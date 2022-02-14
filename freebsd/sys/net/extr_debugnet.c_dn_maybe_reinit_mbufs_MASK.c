
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nmbuf; int ncl; int clsize; } ;


 int FUNC_0 (int,int,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, int VAR_3, int VAR_4)
{
 bool VAR_5;

 VAR_5 = 0;
 FUNC_1(&VAR_1);

 if (VAR_2 > VAR_0.nmbuf) {
  VAR_5 = 1;
  VAR_0.nmbuf = VAR_2;
 } else
  VAR_2 = VAR_0.nmbuf;

 if (VAR_3 > VAR_0.ncl) {
  VAR_5 = 1;
  VAR_0.ncl = VAR_3;
 } else
  VAR_3 = VAR_0.ncl;

 if (VAR_4 > VAR_0.clsize) {
  VAR_5 = 1;
  VAR_0.clsize = VAR_4;
 } else
  VAR_4 = VAR_0.clsize;

 FUNC_2(&VAR_1);

 if (VAR_5)
  FUNC_0(VAR_2, VAR_3, VAR_4);
}
