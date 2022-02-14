
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char **VAR_0)
{

  enum { inAtom, inString, init, inComment };
  int VAR_1 = init;
  const char *VAR_2 = 0;
  for (;;) {
    switch (**VAR_0) {
    case '\0':
      if (VAR_1 == inAtom)
        return VAR_2;
      return 0;
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      if (VAR_1 == inAtom)
        return VAR_2;
      break;
    case '(':
      if (VAR_1 == inAtom)
        return VAR_2;
      if (VAR_1 != inString)
        VAR_1++;
      break;
    case ')':
      if (VAR_1 > init)
        --VAR_1;
      else if (VAR_1 != inString)
        return 0;
      break;
    case ';':
    case '/':
    case '=':
      if (VAR_1 == inAtom)
        return VAR_2;
      if (VAR_1 == init)
        return (*VAR_0)++;
      break;
    case '\\':
      ++*VAR_0;
      if (**VAR_0 == '\0')
        return 0;
      break;
    case '"':
      switch (VAR_1) {
      case inString:
        ++*VAR_0;
        return VAR_2;
      case inAtom:
        return VAR_2;
      case init:
        VAR_2 = *VAR_0;
        VAR_1 = inString;
        break;
      }
      break;
    default:
      if (VAR_1 == init) {
        VAR_2 = *VAR_0;
        VAR_1 = inAtom;
      }
      break;
    }
    ++*VAR_0;
  }

}
