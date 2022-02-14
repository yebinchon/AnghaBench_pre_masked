
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (char*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_9)
{
  char *VAR_10;
  char *VAR_11;
  unsigned long VAR_12;
  unsigned long VAR_13;
  unsigned long VAR_14;
  unsigned long VAR_15;

  if (VAR_9 != ((void*)0))
    {
      VAR_10 = VAR_11 = VAR_9;
      VAR_12 = FUNC_2 (VAR_10, VAR_2, VAR_0,
          VAR_6);
      VAR_10 += VAR_2;
      VAR_11 += VAR_12;
      VAR_13 = FUNC_2 (VAR_10, FUNC_0 (VAR_8),
        VAR_0, VAR_6);
      VAR_10 += FUNC_0 (VAR_8);
      VAR_13 += VAR_5;
      while (VAR_10 < VAR_11)
 {
   VAR_14 = FUNC_2 (VAR_10, VAR_3, VAR_0,
     VAR_6);
   VAR_10 += VAR_3 + VAR_4;
   VAR_15 = FUNC_2 (VAR_10, VAR_1, VAR_0,
          VAR_6);
   VAR_10 += VAR_1;
   VAR_15 += VAR_13;
   if (VAR_14 != 0)
     {
       FUNC_1 (VAR_7, VAR_14, VAR_15);
     }
 }
    }
}
