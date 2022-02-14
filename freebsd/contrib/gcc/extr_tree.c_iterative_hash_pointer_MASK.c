
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptr ;
typedef int hashval_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline hashval_t
FUNC_2 (void *VAR_0, hashval_t VAR_1)
{
  if (sizeof (VAR_0) == sizeof (hashval_t))
    return FUNC_0 ((size_t) VAR_0, VAR_1);
  else
    {
      hashval_t VAR_2 = (hashval_t) (size_t) VAR_0;


      int VAR_3 = 0;
      hashval_t VAR_4 = (hashval_t) ((size_t) VAR_0 >> (sizeof (hashval_t) * 8 + VAR_3));
      FUNC_1 (VAR_2, VAR_4, VAR_1);
      return VAR_1;
    }
}
