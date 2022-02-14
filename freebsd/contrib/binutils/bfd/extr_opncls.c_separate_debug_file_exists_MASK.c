
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,unsigned char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,unsigned char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (const char *VAR_2, const unsigned long VAR_3)
{
  static unsigned char VAR_4 [8 * 1024];
  unsigned long VAR_5 = 0;
  int VAR_6;
  bfd_size_type VAR_7;

  FUNC_0 (VAR_2);

  VAR_6 = FUNC_3 (VAR_2, VAR_1);
  if (VAR_6 < 0)
    return VAR_0;

  while ((VAR_7 = FUNC_4 (VAR_6, VAR_4, sizeof (VAR_4))) > 0)
    VAR_5 = FUNC_1 (VAR_5, VAR_4, VAR_7);

  FUNC_2 (VAR_6);

  return VAR_3 == VAR_5;
}
