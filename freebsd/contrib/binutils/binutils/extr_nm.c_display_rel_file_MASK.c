
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size_sym {int dummy; } ;
typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (int *,int **) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int *,long,int **,long,int **,int **) ;
 void* FUNC_7 (int *) ;
 long FUNC_8 (int *,scalar_t__,void**,unsigned int*) ;
 scalar_t__ VAR_1 ;
 long FUNC_9 (int *,scalar_t__,void*,long,unsigned int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int **,void*,long) ;
 int VAR_2 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,scalar_t__,struct size_sym*,long,int *) ;
 int FUNC_14 (int *,scalar_t__,void*,long,unsigned int,int *) ;
 int FUNC_15 (void*,long,unsigned int,int ) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 long FUNC_16 (int *,scalar_t__,void*,long,unsigned int,struct size_sym**) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int ** VAR_11 ;
 void* FUNC_17 (long) ;

__attribute__((used)) static void
FUNC_18 (bfd *VAR_12, bfd *VAR_13)
{
  long VAR_14;
  void *VAR_15;
  unsigned int VAR_16;
  struct size_sym *VAR_17;

  if (! VAR_1)
    {
      if (!(FUNC_4 (VAR_12) & VAR_0))
 {
   FUNC_12 (FUNC_0("%s: no symbols"), FUNC_5 (VAR_12));
   return;
 }
    }

  VAR_14 = FUNC_8 (VAR_12, VAR_1, &VAR_15, &VAR_16);
  if (VAR_14 < 0)
    FUNC_2 (FUNC_5 (VAR_12));

  if (VAR_14 == 0)
    {
      FUNC_12 (FUNC_0("%s: no symbols"), FUNC_5 (VAR_12));
      return;
    }

  if (VAR_4 && VAR_16 == sizeof (asymbol *))
    {
      asymbol *VAR_18;
      long VAR_19;
      asymbol **VAR_20 = ((void*)0);
      asymbol **VAR_21 = ((void*)0);
      long VAR_22 = 0;
      long VAR_23 = 0;

      if (VAR_1)
 {
   VAR_23 = VAR_14;
   VAR_21 = VAR_15;
 }
      else
 {
   long VAR_24 = FUNC_3 (VAR_12);

   VAR_22 = VAR_14;
   VAR_20 = VAR_15;

   if (VAR_24 > 0)
     {
       VAR_21 = FUNC_17 (VAR_24);
       VAR_23 = FUNC_1 (VAR_12, VAR_21);
       if (VAR_23 < 0)
  FUNC_2 (FUNC_5 (VAR_12));
     }
 }
      VAR_19 = FUNC_6 (VAR_12, VAR_22, VAR_20,
           VAR_23, VAR_21, &VAR_18);
      if (VAR_19 > 0)
 {
   asymbol **VAR_25;
   void *VAR_26;
   long VAR_27;

   VAR_26 = FUNC_17 ((VAR_14 + VAR_19 + 1) * sizeof (*VAR_25));
   VAR_25 = VAR_26;
   FUNC_11 (VAR_25, VAR_15, VAR_14 * sizeof (*VAR_25));
   VAR_25 += VAR_14;
   for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++)
     *VAR_25++ = VAR_18 + VAR_27;
   *VAR_25 = 0;
   VAR_15 = VAR_26;
   VAR_14 += VAR_19;
 }
    }





  VAR_14 = FUNC_9 (VAR_12, VAR_1, VAR_15, VAR_14, VAR_16);

  VAR_17 = ((void*)0);
  if (! VAR_2)
    {
      VAR_5 = VAR_12;
      VAR_7 = VAR_1;
      VAR_9 = FUNC_7 (VAR_12);
      VAR_10 = FUNC_7 (VAR_12);
      if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 FUNC_2 (FUNC_5 (VAR_12));

      if (! VAR_6)
 FUNC_15 (VAR_15, VAR_14, VAR_16,
        VAR_11[VAR_8][VAR_3]);
      else
 VAR_14 = FUNC_16 (VAR_12, VAR_1, VAR_15, VAR_14,
      VAR_16, &VAR_17);
    }

  if (! VAR_6)
    FUNC_14 (VAR_12, VAR_1, VAR_15, VAR_14, VAR_16, VAR_13);
  else
    FUNC_13 (VAR_12, VAR_1, VAR_17, VAR_14, VAR_13);

  FUNC_10 (VAR_15);
}
