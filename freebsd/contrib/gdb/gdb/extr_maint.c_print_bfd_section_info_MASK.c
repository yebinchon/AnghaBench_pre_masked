
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd ;
struct TYPE_7__ {int filepos; } ;
typedef TYPE_1__ asection ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int *,TYPE_1__*) ;
 char* FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char const*,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_0,
   asection *VAR_1,
   void *VAR_2)
{
  flagword VAR_3 = FUNC_0 (VAR_0, VAR_1);
  const char *VAR_4 = FUNC_1 (VAR_0, VAR_1);

  if (VAR_2 == ((void*)0) || *((char *) VAR_2) == '\0'
      || FUNC_6 ((char *) VAR_2, VAR_4)
      || FUNC_5 ((char *) VAR_2, VAR_3))
    {
      CORE_ADDR VAR_5, VAR_6;

      VAR_5 = FUNC_3 (VAR_0, VAR_1);
      VAR_6 = VAR_5 + FUNC_2 (VAR_0, VAR_1);
      FUNC_4 (VAR_4, VAR_3, VAR_5, VAR_6, VAR_1->filepos);
    }
}
