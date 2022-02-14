
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned char *VAR_1, int VAR_2)
{
  int VAR_3;
  unsigned int VAR_4;
  int VAR_5;

  if (VAR_2 == VAR_0)
    {
      VAR_5 = FUNC_1 (VAR_1, &VAR_4);
      VAR_1 += VAR_4;
      FUNC_0 ("  Tag_GNU_Power_ABI_FP: ");
      switch (VAR_5)
 {
 case 0:
   FUNC_0 ("Hard or soft float\n");
   break;
 case 1:
   FUNC_0 ("Hard float\n");
   break;
 case 2:
   FUNC_0 ("Soft float\n");
   break;
 default:
   FUNC_0 ("??? (%d)\n", VAR_5);
   break;
 }
      return VAR_1;
   }

  if (VAR_2 & 1)
    VAR_3 = 1;
  else
    VAR_3 = 2;
  FUNC_0 ("  Tag_unknown_%d: ", VAR_2);

  if (VAR_3 == 1)
    {
      FUNC_0 ("\"%s\"\n", VAR_1);
      VAR_1 += FUNC_2 ((char *)VAR_1) + 1;
    }
  else
    {
      VAR_5 = FUNC_1 (VAR_1, &VAR_4);
      VAR_1 += VAR_4;
      FUNC_0 ("%d (0x%x)\n", VAR_5, VAR_5);
    }

  return VAR_1;
}
