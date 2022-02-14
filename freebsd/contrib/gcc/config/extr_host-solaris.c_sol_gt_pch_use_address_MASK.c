
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 () ;
 int FUNC_1 (char*,size_t,void*) ;
 void* FUNC_2 (void*,size_t,int,int,int,size_t) ;
 int FUNC_3 (void*,size_t) ;

__attribute__((used)) static int
FUNC_4 (void *VAR_7, size_t VAR_8, int VAR_9, size_t VAR_10)
{
  void *VAR_11;




  if (VAR_8 == 0)
    return -1;

  VAR_11 = FUNC_2 (VAR_7, VAR_8, VAR_4 | VAR_5, VAR_3,
        VAR_9, VAR_10);




  if (VAR_11 != VAR_7)
    {
      size_t VAR_12 = FUNC_0();
      char VAR_13;
      size_t VAR_14;

      if (VAR_11 != (void *) VAR_1)
 FUNC_3 (VAR_11, VAR_8);

      VAR_6 = 0;
      for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14 += VAR_12)
 if (FUNC_1 ((char *)VAR_7 + VAR_14, VAR_12, (void *)&VAR_13) == -1
     && VAR_6 == VAR_0)
   continue;
 else
   break;

      if (VAR_14 >= VAR_8)
 VAR_11 = FUNC_2 (VAR_7, VAR_8,
       VAR_4 | VAR_5, VAR_3 | VAR_2,
       VAR_9, VAR_10);
    }

  return VAR_11 == VAR_7 ? 1 : -1;
}
