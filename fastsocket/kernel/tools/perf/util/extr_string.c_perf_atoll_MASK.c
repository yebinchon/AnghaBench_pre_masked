
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 unsigned int FUNC_2 (char const*) ;

s64 FUNC_3(const char *VAR_1)
{
 unsigned int VAR_2;
 s64 VAR_3 = -1, VAR_4 = 1;

 if (!FUNC_1(VAR_1[0]))
  goto out_err;

 for (VAR_2 = 1; VAR_2 < FUNC_2(VAR_1); VAR_2++) {
  switch (VAR_1[VAR_2]) {
  case 'B':
  case 'b':
   break;
  case 'K':
   if (VAR_1[VAR_2 + 1] != 'B')
    goto out_err;
   else
    goto kilo;
  case 'k':
   if (VAR_1[VAR_2 + 1] != 'b')
    goto out_err;
kilo:
   VAR_4 = VAR_0;
   break;
  case 'M':
   if (VAR_1[VAR_2 + 1] != 'B')
    goto out_err;
   else
    goto mega;
  case 'm':
   if (VAR_1[VAR_2 + 1] != 'b')
    goto out_err;
mega:
   VAR_4 = VAR_0 * VAR_0;
   break;
  case 'G':
   if (VAR_1[VAR_2 + 1] != 'B')
    goto out_err;
   else
    goto giga;
  case 'g':
   if (VAR_1[VAR_2 + 1] != 'b')
    goto out_err;
giga:
   VAR_4 = VAR_0 * VAR_0 * VAR_0;
   break;
  case 'T':
   if (VAR_1[VAR_2 + 1] != 'B')
    goto out_err;
   else
    goto tera;
  case 't':
   if (VAR_1[VAR_2 + 1] != 'b')
    goto out_err;
tera:
   VAR_4 = VAR_0 * VAR_0 * VAR_0 * VAR_0;
   break;
  case '\0':
   VAR_4 = 1;
   break;
  default:
   if (!FUNC_1(VAR_1[VAR_2]))
    goto out_err;
   break;
  }
 }

 VAR_3 = FUNC_0(VAR_1) * VAR_4;
 goto out;

out_err:
 VAR_3 = -1;
out:
 return VAR_3;
}
