
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (int,size_t) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long,size_t,void*) ;
 int FUNC_9 (int,int ,int ,unsigned int,size_t) ;

__attribute__((used)) static int
FUNC_10 (unsigned long VAR_1, void *VAR_2, size_t VAR_3)
{
  unsigned long VAR_4 = FUNC_3 (VAR_0);
  int VAR_5 = 1;


  if (VAR_1 <= VAR_4 - VAR_3)
    FUNC_8 (VAR_1, VAR_3, VAR_2);
  else
    {


      int VAR_6 = FUNC_0 (1);

      if (VAR_6 <= 0)
 VAR_5 = 0;
      else
 {
   int VAR_7 = FUNC_2 (VAR_6);
   size_t VAR_8 = VAR_3 - 1;







   if (VAR_3 > 1024 * 1024)
     {
       VAR_7 |= 0x8000;


       VAR_8 |= 0xfff;
     }
   else
     VAR_7 &= ~0x8000;

   if (FUNC_5 (VAR_6, VAR_1) != -1
       && FUNC_4 (VAR_6, VAR_7) != -1
       && FUNC_6 (VAR_6, VAR_8) != -1


       && FUNC_3 (VAR_6) >= VAR_8)
     FUNC_9 (VAR_6, 0, FUNC_7 (), (unsigned)VAR_2, VAR_3);
   else
     VAR_5 = 0;

   FUNC_1 (VAR_6);
 }
    }
  return VAR_5;
}
