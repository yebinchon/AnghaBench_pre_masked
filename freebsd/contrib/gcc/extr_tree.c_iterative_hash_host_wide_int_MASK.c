
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashval_t ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline hashval_t
FUNC_2 (HOST_WIDE_INT VAR_0, hashval_t VAR_1)
{
  if (sizeof (HOST_WIDE_INT) == sizeof (hashval_t))
    return FUNC_0 (VAR_0, VAR_1);
  else
    {
      hashval_t VAR_2 = (hashval_t) VAR_0;


      int VAR_3 = 0;
      hashval_t VAR_4 = (hashval_t) (VAR_0 >> (sizeof (hashval_t) * 8 + VAR_3));
      FUNC_1 (VAR_2, VAR_4, VAR_1);
      if (sizeof (HOST_WIDE_INT) > 2 * sizeof (hashval_t))
 {
   hashval_t VAR_5 = (hashval_t) (VAR_0 >> (sizeof (hashval_t) * 16 + VAR_3));
   hashval_t VAR_6 = (hashval_t) (VAR_0 >> (sizeof (hashval_t) * 24 + VAR_3));
   FUNC_1 (VAR_5, VAR_6, VAR_1);
 }
      return VAR_1;
    }
}
