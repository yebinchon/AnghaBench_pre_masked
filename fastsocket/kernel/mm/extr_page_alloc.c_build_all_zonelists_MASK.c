
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int (*) (int *),void*,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

void FUNC_7(void *VAR_11)
{
 FUNC_5();

 if (VAR_7 == VAR_1) {
  FUNC_0(((void*)0));
  FUNC_2();
  FUNC_1();
 } else {


  FUNC_6(FUNC_0, VAR_11, ((void*)0));

 }
 VAR_8 = FUNC_3();







 if (VAR_8 < (VAR_5 * VAR_0))
  VAR_4 = 1;
 else
  VAR_4 = 0;

 FUNC_4("Built %i zonelists in %s order, mobility grouping %s.  "
  "Total pages: %ld\n",
   VAR_3,
   VAR_10[VAR_2],
   VAR_4 ? "off" : "on",
   VAR_8);



}
