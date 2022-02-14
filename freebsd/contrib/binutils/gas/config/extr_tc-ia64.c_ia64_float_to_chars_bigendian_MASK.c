
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LITTLENUM_TYPE ;


 int FUNC_0 (char*,long,int) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, LITTLENUM_TYPE *VAR_1,
          int VAR_2)
{
  while (VAR_2--)
    {
      FUNC_0 (VAR_0, (long) (*VAR_1++),
     sizeof (LITTLENUM_TYPE));
      VAR_0 += sizeof (LITTLENUM_TYPE);
    }
}
