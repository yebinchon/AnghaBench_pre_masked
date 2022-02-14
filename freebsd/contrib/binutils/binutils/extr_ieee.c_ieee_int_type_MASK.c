
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct ieee_handle*,unsigned int,unsigned int,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_6, unsigned int VAR_7, bfd_boolean VAR_8)
{
  struct ieee_handle *VAR_9 = (struct ieee_handle *) VAR_6;
  unsigned int VAR_10;

  switch (VAR_7)
    {
    case 1:
      VAR_10 = (int) VAR_1;
      break;
    case 2:
      VAR_10 = (int) VAR_4;
      break;
    case 4:
      VAR_10 = (int) VAR_2;
      break;
    case 8:
      VAR_10 = (int) VAR_3;
      break;
    default:
      FUNC_1 (VAR_5, FUNC_0("IEEE unsupported integer type size %u\n"), VAR_7);
      return VAR_0;
    }

  if (VAR_8)
    ++VAR_10;

  return FUNC_2 (VAR_9, VAR_10, VAR_7, VAR_8, VAR_0);
}
