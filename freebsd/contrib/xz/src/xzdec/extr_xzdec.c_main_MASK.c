
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lzma_stream ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char**) ;
 int FUNC_12 (int *,int *,char*) ;

int
FUNC_13(int VAR_9, char **VAR_10)
{

 FUNC_11(VAR_10);


 FUNC_6(VAR_9, VAR_10);




 lzma_stream VAR_11 = VAR_2;







 if (VAR_6 == VAR_9) {

  FUNC_12(&VAR_11, VAR_7, "(stdin)");
 } else {

  do {

   if (FUNC_8(VAR_10[VAR_6], "-") == 0) {
    FUNC_12(&VAR_11, VAR_7, "(stdin)");
   } else {
    FILE *VAR_12 = FUNC_3(VAR_10[VAR_6], "rb");
    if (VAR_12 == ((void*)0)) {
     FUNC_5("%s: %s", VAR_10[VAR_6],
       FUNC_9(VAR_5));
     FUNC_0(VAR_0);
    }

    FUNC_12(&VAR_11, VAR_12, VAR_10[VAR_6]);
    FUNC_1(VAR_12);
   }
  } while (++VAR_6 < VAR_9);
 }




 FUNC_4(&VAR_11);


 FUNC_10(VAR_1, VAR_0, VAR_4);
}
