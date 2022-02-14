
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,unsigned long,char const*) ;
 size_t FUNC_2 (void*,size_t,size_t,int *) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *,unsigned long,int ) ;
 void* FUNC_5 (size_t) ;

__attribute__((used)) static void *
FUNC_6 (void *VAR_2, FILE *VAR_3, long VAR_4, size_t VAR_5, size_t VAR_6,
   const char *VAR_7)
{
  void *VAR_8;

  if (VAR_5 == 0 || VAR_6 == 0)
    return ((void*)0);

  if (FUNC_4 (VAR_3, VAR_1 + VAR_4, VAR_0))
    {
      FUNC_1 (FUNC_0("Unable to seek to 0x%lx for %s\n"),
      VAR_1 + VAR_4, VAR_7);
      return ((void*)0);
    }

  VAR_8 = VAR_2;
  if (VAR_8 == ((void*)0))
    {

      if (VAR_6 < (~(size_t) 0 - 1) / VAR_5)

 VAR_8 = FUNC_5 (VAR_5 * VAR_6 + 1);

      if (VAR_8 == ((void*)0))
 {
   FUNC_1 (FUNC_0("Out of memory allocating 0x%lx bytes for %s\n"),
   (unsigned long)(VAR_5 * VAR_6), VAR_7);
   return ((void*)0);
 }

      ((char *) VAR_8)[VAR_5 * VAR_6] = '\0';
    }

  if (FUNC_2 (VAR_8, VAR_5, VAR_6, VAR_3) != VAR_6)
    {
      FUNC_1 (FUNC_0("Unable to read in 0x%lx bytes of %s\n"),
      (unsigned long)(VAR_5 * VAR_6), VAR_7);
      if (VAR_8 != VAR_2)
 FUNC_3 (VAR_8);
      return ((void*)0);
    }

  return VAR_8;
}
