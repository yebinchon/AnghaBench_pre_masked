
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct args_size {scalar_t__ constant; void* var; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 void* FUNC_0 (struct args_size) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_3 (void*,int) ;
 void* FUNC_4 (void*,int) ;
 void* FUNC_5 (int ,void*,void*) ;
 void* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (struct args_size *VAR_8, int VAR_9,
        struct args_size *VAR_10)
{
  tree VAR_11 = VAR_2;
  HOST_WIDE_INT VAR_12 = 0;
  int VAR_13 = VAR_9 / VAR_0;
  HOST_WIDE_INT VAR_14 = VAR_7;
  if (VAR_9 > VAR_3 && VAR_9 > VAR_6)
    {
      VAR_11 = VAR_8->var;
      VAR_12 = VAR_8->constant;
    }

  VAR_10->var = VAR_2;
  VAR_10->constant = 0;

  if (VAR_9 > VAR_0)
    {
      if (VAR_8->var)
 {
   tree VAR_15 = FUNC_6 (VAR_14);
   tree VAR_16 = FUNC_5 (VAR_4,
        FUNC_0 (*VAR_8),
        VAR_15);



   tree VAR_17 = FUNC_4 (VAR_16, VAR_9 / VAR_0);


   VAR_8->var = FUNC_5 (VAR_1, VAR_17, VAR_15);

   VAR_8->constant = 0;
   if (VAR_9 > VAR_3 && VAR_9 > VAR_6)
     VAR_10->var = FUNC_5 (VAR_1, VAR_8->var,
          VAR_11);
 }
      else
 {
   VAR_8->constant = -VAR_14 +



     FUNC_1 (VAR_8->constant + VAR_14, VAR_13);

     if (VAR_9 > VAR_3 && VAR_9 > VAR_6)
       VAR_10->constant = VAR_8->constant - VAR_12;
 }
    }
}
