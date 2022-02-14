
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;} ;


 int FUNC_0 (int,size_t,int,int,void**) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int,size_t,int,void**) ;
 int FUNC_2 (int,size_t,void**) ;

void FUNC_3(int VAR_1, size_t VAR_2, int VAR_3, int VAR_4, void **VAR_5)
{
 if ( VAR_3 > VAR_4 ) {
  int VAR_6 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = VAR_6;
 }

 if ( VAR_4 == VAR_1-1 ) {
  if ( VAR_3 == VAR_1-2 ) {

   VAR_0.gen_syndrome(VAR_1, VAR_2, VAR_5);
  } else {



  }
 } else {
  if ( VAR_4 == VAR_1-2 ) {

   FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
  } else {

   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  }
 }
}
