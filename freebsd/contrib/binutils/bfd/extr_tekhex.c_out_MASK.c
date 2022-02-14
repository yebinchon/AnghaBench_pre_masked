
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int *) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_1, int VAR_2, char *VAR_3, char *VAR_4)
{
  int VAR_5 = 0;
  char *VAR_6;
  char VAR_7[6];
  bfd_size_type VAR_8;

  VAR_7[0] = '%';
  FUNC_0 (VAR_7 + 1, VAR_4 - VAR_3 + 5);
  VAR_7[3] = VAR_2;

  for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++)
    VAR_5 += VAR_0[(unsigned char) *VAR_6];

  VAR_5 += VAR_0[(unsigned char) VAR_7[1]];
  VAR_5 += VAR_0[(unsigned char) VAR_7[2]];
  VAR_5 += VAR_0[(unsigned char) VAR_7[3]];
  FUNC_0 (VAR_7 + 4, VAR_5);
  if (FUNC_2 (VAR_7, (bfd_size_type) 6, VAR_1) != 6)
    FUNC_1 ();
  VAR_4[0] = '\n';
  VAR_8 = VAR_4 - VAR_3 + 1;
  if (FUNC_2 (VAR_3, VAR_8, VAR_1) != VAR_8)
    FUNC_1 ();
}
