
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned char *VAR_0,
         unsigned char *(*VAR_1)
       (unsigned char *, int))
{
  int VAR_2;
  unsigned int VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_2 = FUNC_1 (VAR_0, &VAR_3);
  VAR_0 += VAR_3;



  if (VAR_2 == 32)
    {
      VAR_4 = FUNC_1 (VAR_0, &VAR_3);
      VAR_0 += VAR_3;
      FUNC_0 ("flag = %d, vendor = %s\n", VAR_4, VAR_0);
      VAR_0 += FUNC_2((char *)VAR_0) + 1;
      return VAR_0;
    }

  if ((VAR_2 & 2) == 0 && VAR_1)
    return VAR_1 (VAR_0, VAR_2);

  if (VAR_2 & 1)
    VAR_5 = 1;
  else
    VAR_5 = 2;
  FUNC_0 ("  Tag_unknown_%d: ", VAR_2);

  if (VAR_5 == 1)
    {
      FUNC_0 ("\"%s\"\n", VAR_0);
      VAR_0 += FUNC_2 ((char *)VAR_0) + 1;
    }
  else
    {
      VAR_4 = FUNC_1 (VAR_0, &VAR_3);
      VAR_0 += VAR_3;
      FUNC_0 ("%d (0x%x)\n", VAR_4, VAR_4);
    }

  return VAR_0;
}
