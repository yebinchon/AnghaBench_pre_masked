
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int type; char* help; int flags; int short_name; char* long_name; char* argh; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 int VAR_6 ;

int FUNC_2(const char * const *VAR_7,
    const struct option *VAR_8, int VAR_9)
{
 if (!VAR_7)
  return VAR_0;

 FUNC_0(VAR_6, "\n usage: %s\n", *VAR_7++);
 while (*VAR_7 && **VAR_7)
  FUNC_0(VAR_6, "    or: %s\n", *VAR_7++);
 while (*VAR_7) {
  FUNC_0(VAR_6, "%s%s\n",
    **VAR_7 ? "    " : "",
    *VAR_7);
  VAR_7++;
 }

 if (VAR_8->type != 136)
  FUNC_1('\n', VAR_6);

 for (; VAR_8->type != 137; VAR_8++) {
  size_t VAR_10;
  int VAR_11;

  if (VAR_8->type == 136) {
   FUNC_1('\n', VAR_6);
   if (*VAR_8->help)
    FUNC_0(VAR_6, "%s\n", VAR_8->help);
   continue;
  }
  if (!VAR_9 && (VAR_8->flags & VAR_1))
   continue;

  VAR_10 = FUNC_0(VAR_6, "    ");
  if (VAR_8->short_name)
   VAR_10 += FUNC_0(VAR_6, "-%c", VAR_8->short_name);
  else
   VAR_10 += FUNC_0(VAR_6, "    ");

  if (VAR_8->long_name && VAR_8->short_name)
   VAR_10 += FUNC_0(VAR_6, ", ");
  if (VAR_8->long_name)
   VAR_10 += FUNC_0(VAR_6, "--%s", VAR_8->long_name);

  switch (VAR_8->type) {
  case 141:
   break;
  case 133:
  case 129:
  case 134:
  case 128:
   if (VAR_8->flags & VAR_3)
    if (VAR_8->long_name)
     VAR_10 += FUNC_0(VAR_6, "[=<n>]");
    else
     VAR_10 += FUNC_0(VAR_6, "[<n>]");
   else
    VAR_10 += FUNC_0(VAR_6, " <n>");
   break;
  case 138:
   if (VAR_8->flags & VAR_2)
    break;

  case 130:
   if (VAR_8->argh) {
    if (VAR_8->flags & VAR_3)
     if (VAR_8->long_name)
      VAR_10 += FUNC_0(VAR_6, "[=<%s>]", VAR_8->argh);
     else
      VAR_10 += FUNC_0(VAR_6, "[<%s>]", VAR_8->argh);
    else
     VAR_10 += FUNC_0(VAR_6, " <%s>", VAR_8->argh);
   } else {
    if (VAR_8->flags & VAR_3)
     if (VAR_8->long_name)
      VAR_10 += FUNC_0(VAR_6, "[=...]");
     else
      VAR_10 += FUNC_0(VAR_6, "[...]");
    else
     VAR_10 += FUNC_0(VAR_6, " ...");
   }
   break;
  default:
  case 137:
  case 136:
  case 140:
  case 139:
  case 135:
  case 131:
  case 132:
   break;
  }

  if (VAR_10 <= VAR_5)
   VAR_11 = VAR_5 - VAR_10;
  else {
   FUNC_1('\n', VAR_6);
   VAR_11 = VAR_5;
  }
  FUNC_0(VAR_6, "%*s%s\n", VAR_11 + VAR_4, "", VAR_8->help);
 }
 FUNC_1('\n', VAR_6);

 return VAR_0;
}
