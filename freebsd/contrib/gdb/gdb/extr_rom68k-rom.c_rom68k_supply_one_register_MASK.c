
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int,unsigned char*) ;

__attribute__((used)) static char *
FUNC_6 (int VAR_1, unsigned char *VAR_2)
{
  ULONGEST VAR_3;
  unsigned char VAR_4[VAR_0];

  VAR_3 = 0;
  while (*VAR_2 != '\0')
    if (FUNC_2 (*VAR_2))
      VAR_3 = (VAR_3 * 16) + FUNC_1 (*VAR_2++);
    else
      break;


  while (FUNC_3 (*VAR_2))
    VAR_2++;

  FUNC_4 (VAR_4, FUNC_0 (VAR_1), VAR_3);
  FUNC_5 (VAR_1, VAR_4);

  return VAR_2;
}
