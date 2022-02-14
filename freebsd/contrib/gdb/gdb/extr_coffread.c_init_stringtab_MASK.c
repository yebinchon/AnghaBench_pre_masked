
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (char*,int,int *) ;
 long FUNC_1 (int ,unsigned char*) ;
 scalar_t__ FUNC_2 (int *,long,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,unsigned char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (long) ;

__attribute__((used)) static int
FUNC_6 (bfd *VAR_2, long VAR_3)
{
  long VAR_4;
  int VAR_5;
  unsigned char VAR_6[4];

  FUNC_3 ();



  if (VAR_3 == 0)
    return 0;

  if (FUNC_2 (VAR_2, VAR_3, 0) < 0)
    return -1;

  VAR_5 = FUNC_0 ((char *) VAR_6, sizeof VAR_6, VAR_2);
  VAR_4 = FUNC_1 (VAR_1, VAR_6);



  if (VAR_5 != sizeof VAR_6 || VAR_4 < sizeof VAR_6)
    return 0;

  VAR_0 = (char *) FUNC_5 (VAR_4);


  FUNC_4 (VAR_0, VAR_6, sizeof VAR_6);
  if (VAR_4 == sizeof VAR_4)
    return 0;

  VAR_5 = FUNC_0 (VAR_0 + sizeof VAR_6, VAR_4 - sizeof VAR_6,
     VAR_2);
  if (VAR_5 != VAR_4 - sizeof VAR_6 || VAR_0[VAR_4 - 1] != '\0')
    return -1;

  return 0;
}
