
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,size_t,int ) ;
 void* FUNC_2 (void*,size_t,int,int,int,size_t) ;
 int FUNC_3 (void*,size_t) ;
 scalar_t__ FUNC_4 (int,void*,int ) ;

__attribute__((used)) static int
FUNC_5 (void *VAR_7, size_t VAR_8, int VAR_9, size_t VAR_10)
{
  void *VAR_11;




  if (VAR_8 == 0)
    return -1;


  VAR_11 = FUNC_2 (VAR_7, VAR_8, VAR_3 | VAR_4, VAR_2, VAR_9, VAR_10);

  if (VAR_11 == VAR_7)
    return 1;

  if (VAR_11 != (void *) VAR_1)
    FUNC_3 (VAR_11, VAR_8);


  VAR_11 = FUNC_2 (VAR_7, VAR_8, VAR_3 | VAR_4,
        VAR_2 | VAR_0, -1, 0);

  if (VAR_11 != VAR_7)
    {
      if (VAR_11 != (void *) VAR_1)
        FUNC_3 (VAR_11, VAR_8);
      return -1;
    }

  if (FUNC_1 (VAR_9, VAR_10, VAR_5) == (off_t)-1)
    return -1;

  while (VAR_8)
    {
      ssize_t VAR_12;

      VAR_12 = FUNC_4 (VAR_9, VAR_7, FUNC_0 (VAR_8, VAR_6));
      if (VAR_12 <= 0)
        return -1;
      VAR_7 = (char *) VAR_7 + VAR_12;
      VAR_8 -= VAR_12;
    }

  return 1;
}
