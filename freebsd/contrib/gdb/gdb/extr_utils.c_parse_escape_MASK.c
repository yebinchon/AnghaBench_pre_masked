int
FUNC_0 (char **VAR_0)
{
  int VAR_1;
  int VAR_2 = *(*VAR_0)++;
  if (FUNC_0 (VAR_2, &VAR_1))
    return VAR_1;
  else
    switch (VAR_2)
      {
      case '\n':
 return -2;
      case 0:
 (*VAR_0)--;
 return 0;
      case '^':
 {


   char *VAR_3 = *VAR_0 - 1;

   VAR_2 = *(*VAR_0)++;

   if (VAR_2 == '?')
     {

       VAR_2 = 0177;

       if (!FUNC_0 (VAR_2, &VAR_1))
  FUNC_0 ("There is no character corresponding to `Delete' "
         "in the target character set `%s'.", FUNC_0 ());

       return VAR_1;
     }
   else if (VAR_2 == '\\')
     VAR_1 = FUNC_0 (VAR_0);
   else
     {
       if (!FUNC_0 (VAR_2, &VAR_1))
  FUNC_0 (VAR_3, *VAR_0);
     }



   if (!FUNC_0 (VAR_1, &VAR_1))
     FUNC_0 (VAR_3, *VAR_0);

   return VAR_1;
 }




      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
 {
   int VAR_4 = VAR_2 - '0';
   int VAR_5 = 0;
   while (++VAR_5 < 3)
     {
       VAR_2 = (**VAR_0);
       if (VAR_2 >= '0' && VAR_2 <= '7')
  {
    (*VAR_0)++;
    VAR_4 *= 8;
    VAR_4 += VAR_2 - '0';
  }
       else
  {
    break;
  }
     }
   return VAR_4;
 }
      default:
 if (!FUNC_0 (VAR_2, &VAR_1))
   FUNC_0
     ("The escape sequence `\%c' is equivalent to plain `%c', which"
      " has no equivalent\n" "in the `%s' character set.", VAR_2, VAR_2,
      FUNC_0 ());
 return VAR_1;
      }
}
