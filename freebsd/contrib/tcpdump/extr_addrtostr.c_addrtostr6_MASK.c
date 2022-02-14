
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,char*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (char*,size_t,char*,int) ;
 size_t FUNC_3 (char*) ;

const char *
FUNC_4 (const void *VAR_4, char *VAR_5, size_t VAR_6)
{







  const u_char *VAR_7 = (const u_char *)VAR_4;
  char *VAR_8;
  size_t VAR_9, VAR_10;
  int VAR_11;
  struct {
    int base;
    int len;
  } VAR_12, VAR_13;
  uint16_t VAR_14 [VAR_1 / VAR_2];
  int VAR_15;





  for (VAR_15 = 0; VAR_15 < (VAR_1 / VAR_2); VAR_15++)
      VAR_14[VAR_15] = (VAR_7[2*VAR_15] << 8) | VAR_7[2*VAR_15 + 1];

  VAR_12.len = 0;
  VAR_12.base = -1;
  VAR_13.len = 0;
  VAR_13.base = -1;
  for (VAR_15 = 0; VAR_15 < (int)(VAR_1 / VAR_2); VAR_15++)
  {
    if (VAR_14[VAR_15] == 0)
    {
      if (VAR_13.base == -1)
           VAR_13.base = VAR_15, VAR_13.len = 1;
      else VAR_13.len++;
    }
    else if (VAR_13.base != -1)
    {
      if (VAR_12.base == -1 || VAR_13.len > VAR_12.len)
         VAR_12 = VAR_13;
      VAR_13.base = -1;
    }
  }
  if ((VAR_13.base != -1) && (VAR_12.base == -1 || VAR_13.len > VAR_12.len))
     VAR_12 = VAR_13;
  if (VAR_12.base != -1 && VAR_12.len < 2)
     VAR_12.base = -1;



  VAR_8 = VAR_5;
  VAR_9 = VAR_6;
  for (VAR_15 = 0; VAR_15 < (int)(VAR_1 / VAR_2); VAR_15++)
  {


    if (VAR_12.base != -1 && VAR_15 >= VAR_12.base && VAR_15 < (VAR_12.base + VAR_12.len))
    {
      if (VAR_15 == VAR_12.base)
        { if (VAR_9 == 0) { VAR_3 = VAR_0; return (((void*)0)); } *VAR_8++ = ':'; VAR_9--; };
      continue;
    }



    if (VAR_15 != 0)
       { if (VAR_9 == 0) { VAR_3 = VAR_0; return (((void*)0)); } *VAR_8++ = ':'; VAR_9--; };



    if (VAR_15 == 6 && VAR_12.base == 0 &&
        (VAR_12.len == 6 || (VAR_12.len == 5 && VAR_14[5] == 0xffff)))
    {
      if (!FUNC_1(VAR_7+12, VAR_8, VAR_9))
      {
        VAR_3 = VAR_0;
        return (((void*)0));
      }
      VAR_10 = FUNC_3(VAR_8);
      VAR_8 += VAR_10;
      VAR_9 -= VAR_10;
      break;
    }
    VAR_11 = FUNC_2 (VAR_8, VAR_9, "%x", VAR_14[VAR_15]);
    if (VAR_11 < 0)
        return (((void*)0));
    if ((size_t) VAR_11 >= VAR_9)
    {
        VAR_3 = VAR_0;
        return (((void*)0));
    }
    VAR_8 += VAR_11;
    VAR_9 -= VAR_11;
  }



  if (VAR_12.base != -1 && (VAR_12.base + VAR_12.len) == (VAR_1 / VAR_2))
     { if (VAR_9 == 0) { VAR_3 = VAR_0; return (((void*)0)); } *VAR_8++ = ':'; VAR_9--; };
  { if (VAR_9 == 0) { VAR_3 = VAR_0; return (((void*)0)); } *VAR_8++ = '\0'; VAR_9--; };

  return (VAR_5);
}
