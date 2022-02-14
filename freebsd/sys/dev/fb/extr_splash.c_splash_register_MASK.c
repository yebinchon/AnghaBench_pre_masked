
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int splash_decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,int **,int) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int **,int ) ;
 int ** FUNC_2 (int,int ,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(splash_decoder_t *VAR_8)
{
 splash_decoder_t **VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_6 != ((void*)0)) {




  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10 == 0) {

   if (VAR_7 != ((void*)0))
    VAR_10 = FUNC_4(VAR_6);
   if (VAR_10 == 0)
    FUNC_3(VAR_8);
  }
  return VAR_10;
 } else {

  for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
   if (VAR_4[VAR_11] == ((void*)0))
    break;
  }
  if ((VAR_11 >= VAR_5) && (VAR_5 % VAR_0) == 0) {
   VAR_9 = FUNC_2(sizeof(*VAR_9)*(VAR_5 + VAR_0),
       VAR_2, VAR_3);
   if (VAR_9 == ((void*)0))
    return VAR_1;
   if (VAR_4 != ((void*)0)) {
    FUNC_0(VAR_4, VAR_9, sizeof(*VAR_9)*VAR_5);
    FUNC_1(VAR_4, VAR_2);
   }
   VAR_4 = VAR_9;
   VAR_11 = VAR_5++;
  }
  VAR_4[VAR_11] = VAR_8;
 }

 return 0;
}
