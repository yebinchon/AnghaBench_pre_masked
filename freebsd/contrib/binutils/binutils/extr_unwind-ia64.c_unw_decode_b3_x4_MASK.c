
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int ,void*) ;
 int FUNC_2 (char*,int ,int ,void*) ;
 int FUNC_3 (char*,int ,void*) ;
 int FUNC_4 (unsigned char const**) ;
 unsigned char const* FUNC_5 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_6 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_7 (unsigned char const*,unsigned int,void*) ;
 unsigned char const* FUNC_8 (unsigned char const*,unsigned int,void*) ;

__attribute__((used)) static const unsigned char *
FUNC_9 (const unsigned char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
  unw_word VAR_3, VAR_4, VAR_5;

  if ((VAR_1 & 0x10) == 0)
    {
      VAR_3 = FUNC_4 (&VAR_0);
      VAR_4 = FUNC_4 (&VAR_0);
      FUNC_2 ("B3", VAR_3, VAR_4, VAR_2);
    }
  else if ((VAR_1 & 0x07) == 0)
    {
      VAR_5 = FUNC_4 (&VAR_0);
      if ((VAR_1 & 0x08) != 0)
 FUNC_1 ("B4", VAR_5, VAR_2);
      else
 FUNC_3 ("B4", VAR_5, VAR_2);
    }
  else
    switch (VAR_1 & 0x7)
      {
      case 1:
 return FUNC_5 (VAR_0, VAR_1, VAR_2);
      case 2:
 return FUNC_6 (VAR_0, VAR_1, VAR_2);
      case 3:
 return FUNC_7 (VAR_0, VAR_1, VAR_2);
      case 4:
 return FUNC_8 (VAR_0, VAR_1, VAR_2);
      default:
 FUNC_0 (VAR_1);
 break;
      }
  return VAR_0;
}
