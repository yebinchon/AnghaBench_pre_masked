
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* filename; scalar_t__ filesize; } ;
typedef TYPE_1__ filename_and_size_t ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int * FUNC_4 (char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_5 (const char *VAR_5)
{
  filename_and_size_t VAR_6;
  bfd *VAR_7;

  VAR_7 = FUNC_4 (VAR_5, VAR_4);

  if (VAR_7 == ((void*)0))

    return VAR_0;




  if (!FUNC_0 (VAR_7, VAR_1))
    {
      FUNC_1 (VAR_7);
      return VAR_0;
    }

  VAR_2 = VAR_0;
  VAR_6.filename = VAR_5;
  VAR_6.filesize = 0;
  FUNC_2 (VAR_7, VAR_3, & VAR_6);

  if (!FUNC_1 (VAR_7))
    {
      FUNC_3 (VAR_5);
      return VAR_0;
    }

  return VAR_2;
}
