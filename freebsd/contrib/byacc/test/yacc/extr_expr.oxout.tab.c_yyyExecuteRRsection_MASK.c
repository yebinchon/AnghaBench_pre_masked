
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yyyGNT ;


 int FUNC_0 (int ,char*,long) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,long*,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(yyyGNT *VAR_2) {
   int VAR_3;
   long VAR_4 = 0;
   long VAR_5 = 0;

   if (!VAR_1) return;
   FUNC_2(VAR_2,&VAR_5,&VAR_4);
   if (VAR_5)
      {
       FUNC_1("\n\n\n**********\n",VAR_0);
       FUNC_1("cycle detected in completed parse tree",VAR_0);
       FUNC_1(" after decoration.\n",VAR_0);
       FUNC_0(VAR_0,
         "searching parse tree for %ld unsolved instances:\n",
               VAR_5
              );
       FUNC_4(VAR_2);
      }
   FUNC_3(VAR_2);
}
