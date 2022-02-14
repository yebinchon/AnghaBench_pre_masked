
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int ,int ,int*,int,int *) ;
 int FUNC_6 (int ,int ,int,int,int *) ;

int
FUNC_7 (CORE_ADDR VAR_4, char *VAR_5, int VAR_6,
     int VAR_7, struct mem_attrib *VAR_8,
     struct target_ops *VAR_9)
{

  int VAR_10 = sizeof (int) - 1;
  CORE_ADDR VAR_11 = VAR_4 & ~(CORE_ADDR)VAR_10;


  int VAR_12 = ((VAR_4 + VAR_6 - VAR_11 + VAR_10) & ~(CORE_ADDR)VAR_10)
    / sizeof (int);





  int *VAR_13 = (int *) FUNC_2 (VAR_12 * sizeof (int));

  int VAR_14 = FUNC_0 ();
  int VAR_15;

  if (!VAR_7)
    {

      for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++, VAR_11 += sizeof (int))
 {
   if (!FUNC_4 (VAR_11, VAR_13 + VAR_15, VAR_14))
     return 0;
   VAR_1;
 }


      VAR_11 -= VAR_12 * sizeof (int);
      FUNC_3 (VAR_5, (char *)VAR_13 + (VAR_4 - VAR_11), VAR_6);
    }
  else
    {

      if (VAR_11 < VAR_4)
 if (!FUNC_4 (VAR_11, VAR_13, VAR_14))
   return 0;


      if (VAR_11 + VAR_12 * sizeof (int) > VAR_4 + VAR_6)
 if (!FUNC_4 (VAR_11 + (VAR_12 - 1) * sizeof (int),
                        VAR_13 + VAR_12 - 1, VAR_14))
   return 0;


      FUNC_3 ((char *)VAR_13 + (VAR_4 - VAR_11), VAR_5, VAR_6);


      for (VAR_15 = 0, VAR_2 = 0; VAR_15 < VAR_12; VAR_15++, VAR_11 += sizeof (int))
 {
   if (VAR_14)
     FUNC_6 (VAR_0, FUNC_1 (VAR_3), VAR_11, VAR_13[VAR_15], ((void*)0));
   else
     FUNC_5 (VAR_0, FUNC_1 (VAR_3), (int *)(long) VAR_11,
        VAR_13[VAR_15], ((void*)0));

   if (VAR_2)
     return 0;
   VAR_1;
 }
    }

  return VAR_6;
}
