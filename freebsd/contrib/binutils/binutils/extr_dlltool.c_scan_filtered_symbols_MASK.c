
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 char const FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_6 (char*,char*,int,int ,int ,int,int ) ;
 char* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_3, void *VAR_4, long VAR_5,
         unsigned int VAR_6)
{
  asymbol *VAR_7;
  bfd_byte *VAR_8, *VAR_9;

  VAR_7 = FUNC_4 (VAR_3);
  if (VAR_7 == ((void*)0))
    FUNC_1 (FUNC_2 (VAR_3));

  VAR_8 = (bfd_byte *) VAR_4;
  VAR_9 = VAR_8 + VAR_5 * VAR_6;
  for (; VAR_8 < VAR_9; VAR_8 += VAR_6)
    {
      asymbol *VAR_10;
      const char *VAR_11;

      VAR_10 = FUNC_5 (VAR_3, VAR_1, VAR_8, VAR_7);
      if (VAR_10 == ((void*)0))
 FUNC_1 (FUNC_2 (VAR_3));

      VAR_11 = FUNC_0 (VAR_10);
      if (FUNC_3 (VAR_3) == VAR_11[0])
 ++VAR_11;

      FUNC_6 (FUNC_8 (VAR_11) , 0, -1, 0, 0,
     ! (VAR_10->flags & VAR_0), 0);

      if (VAR_2 && FUNC_7 (VAR_11, '@'))
        {
   int VAR_12 = (*VAR_11 == '@');
   char *VAR_13 = FUNC_8 (VAR_11 + VAR_12);
   char *VAR_14 = FUNC_7 (VAR_13, '@');
   *VAR_14 = '\0';

   FUNC_6 (VAR_13, FUNC_8 (VAR_11), -1, 0, 0, 0, 0);
 }
    }
}
