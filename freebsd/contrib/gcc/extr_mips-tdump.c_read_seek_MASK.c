
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,long,long) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (char const*) ;
 long FUNC_4 (int ,void*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_5 (size_t) ;

__attribute__((used)) static void *
FUNC_6 (void *VAR_3, size_t VAR_4, off_t VAR_5, const char *VAR_6)
{
  long VAR_7 = 0;

  if (VAR_4 == 0)
    return VAR_3;

  if (!VAR_3)
    VAR_3 = FUNC_5 (VAR_4);

  if ((VAR_2 != VAR_5 && FUNC_2 (VAR_1, VAR_5, 0) == -1)
      || (VAR_7 = FUNC_4 (VAR_1, VAR_3, VAR_4)) < 0)
    {
      FUNC_3 (VAR_6);
      FUNC_0 (1);
    }

  if (VAR_7 != (long) VAR_4)
    {
      FUNC_1 (VAR_0, "%s: read %ld bytes, expected %ld bytes\n",
        VAR_6, VAR_7, (long) VAR_4);
      FUNC_0 (1);
    }

  VAR_2 = VAR_5 + VAR_4;
  return VAR_3;
}
