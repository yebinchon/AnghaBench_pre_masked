
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
 char* FUNC_0 (char const*,int) ;

const char *
FUNC_1(const char *VAR_0, apr_size_t VAR_1)
{
  const char *VAR_2 = FUNC_0(VAR_0, VAR_1);
  const char *VAR_3 = VAR_0 + VAR_1;
  int VAR_4 = 128;

  VAR_0 = VAR_2;
  while (VAR_0 < VAR_3)
    {
      unsigned char VAR_5 = *VAR_0++;
      switch (VAR_4)
        {
        case 128:
          if (VAR_5 <= 0x7F)
            break;
          else if (VAR_5 <= 0xC1)
            VAR_4 = 129;
          else if (VAR_5 <= 0xDF)
            VAR_4 = 134;
          else if (VAR_5 == 0xE0)
            VAR_4 = 130;
          else if (VAR_5 <= 0xEC)
            VAR_4 = 133;
          else if (VAR_5 == 0xED)
            VAR_4 = 135;
          else if (VAR_5 <= 0xEF)
            VAR_4 = 133;
          else if (VAR_5 == 0xF0)
            VAR_4 = 131;
          else if (VAR_5 <= 0xF3)
            VAR_4 = 132;
          else if (VAR_5 <= 0xF4)
            VAR_4 = 136;
          else
            VAR_4 = 129;
          break;
        case 134:
          if (VAR_5 >= 0x80 && VAR_5 <= 0xBF)
            VAR_4 = 128;
          else
            VAR_4 = 129;
          break;
        case 130:
          if (VAR_5 >= 0xA0 && VAR_5 <= 0xBF)
            VAR_4 = 134;
          else
            VAR_4 = 129;
          break;
        case 133:
          if (VAR_5 >= 0x80 && VAR_5 <= 0xBF)
            VAR_4 = 134;
          else
            VAR_4 = 129;
          break;
        case 135:
          if (VAR_5 >= 0x80 && VAR_5 <= 0x9F)
            VAR_4 = 134;
          else
            VAR_4 = 129;
          break;
        case 131:
          if (VAR_5 >= 0x90 && VAR_5 <= 0xBF)
            VAR_4 = 133;
          else
            VAR_4 = 129;
          break;
        case 132:
          if (VAR_5 >= 0x80 && VAR_5 <= 0xBF)
            VAR_4 = 133;
          else
            VAR_4 = 129;
          break;
        case 136:
          if (VAR_5 >= 0x80 && VAR_5 <= 0x8F)
            VAR_4 = 133;
          else
            VAR_4 = 129;
          break;
        default:
        case 129:
          return VAR_2;
        }
      if (VAR_4 == 128)
        VAR_2 = VAR_0;
    }
  return VAR_2;
}
