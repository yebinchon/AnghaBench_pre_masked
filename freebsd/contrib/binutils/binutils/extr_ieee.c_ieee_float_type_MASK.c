
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
FUNC_3 (void *VAR_6, unsigned int VAR_7)
{
  struct ieee_handle *VAR_8 = (struct ieee_handle *) VAR_6;
  unsigned int VAR_9;

  switch (VAR_7)
    {
    case 4:
      VAR_9 = (int) VAR_2;
      break;
    case 8:
      VAR_9 = (int) VAR_1;
      break;
    case 12:

      VAR_9 = (int) VAR_3;
      break;
    case 16:
      VAR_9 = (int) VAR_4;
      break;
    default:
      FUNC_1 (VAR_5, FUNC_0("IEEE unsupported float type size %u\n"), VAR_7);
      return VAR_0;
    }

  return FUNC_2 (VAR_8, VAR_9, VAR_7, VAR_0, VAR_0);
}
