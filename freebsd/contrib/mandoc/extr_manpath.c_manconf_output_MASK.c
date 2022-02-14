
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int toks ;
struct manoutput {char const* includes; char const* man; char const* paper; char const* style; char const* tag; int fragment; int mdoc; int noval; int toc; void* width; void* indent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char**,char*,void*) ;
 int FUNC_3 (int ,int ,int ,char*,char const* const,...) ;
 void* FUNC_4 (char const*) ;
 int * FUNC_5 (char*,char const) ;
 size_t FUNC_6 (char const* const) ;
 scalar_t__ FUNC_7 (char const*,char const* const,size_t) ;
 void* FUNC_8 (char const*,int,int,char const**) ;

int
FUNC_9(struct manoutput *VAR_5, const char *VAR_6, int VAR_7)
{
 const char *const VAR_8[] = {
     "includes", "man", "paper", "style", "indent", "width",
     "tag", "fragment", "mdoc", "noval", "toc"
 };
 const size_t VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);

 const char *VAR_10;
 char *VAR_11;
 size_t VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_12 = FUNC_6(VAR_8[VAR_13]);
  if (FUNC_7(VAR_6, VAR_8[VAR_13], VAR_12) == 0 &&
      FUNC_5(" =	", VAR_6[VAR_12]) != ((void*)0)) {
   VAR_6 += VAR_12;
   if (*VAR_6 == '=')
    VAR_6++;
   while (FUNC_1((unsigned char)*VAR_6))
    VAR_6++;
   break;
  }
 }

 if (VAR_13 < 6 && *VAR_6 == '\0') {
  FUNC_3(VAR_4, 0, 0, "-O %s=?", VAR_8[VAR_13]);
  return -1;
 }
 if (VAR_13 > 6 && VAR_13 < VAR_9 && *VAR_6 != '\0') {
  FUNC_3(VAR_1, 0, 0, "-O %s=%s", VAR_8[VAR_13], VAR_6);
  return -1;
 }

 switch (VAR_13) {
 case 0:
  if (VAR_5->includes != ((void*)0)) {
   VAR_11 = FUNC_4(VAR_5->includes);
   break;
  }
  VAR_5->includes = FUNC_4(VAR_6);
  return 0;
 case 1:
  if (VAR_5->man != ((void*)0)) {
   VAR_11 = FUNC_4(VAR_5->man);
   break;
  }
  VAR_5->man = FUNC_4(VAR_6);
  return 0;
 case 2:
  if (VAR_5->paper != ((void*)0)) {
   VAR_11 = FUNC_4(VAR_5->paper);
   break;
  }
  VAR_5->paper = FUNC_4(VAR_6);
  return 0;
 case 3:
  if (VAR_5->style != ((void*)0)) {
   VAR_11 = FUNC_4(VAR_5->style);
   break;
  }
  VAR_5->style = FUNC_4(VAR_6);
  return 0;
 case 4:
  if (VAR_5->indent) {
   FUNC_2(&VAR_11, "%zu", VAR_5->indent);
   break;
  }
  VAR_5->indent = FUNC_8(VAR_6, 0, 1000, &VAR_10);
  if (VAR_10 == ((void*)0))
   return 0;
  FUNC_3(VAR_2, 0, 0,
      "-O indent=%s is %s", VAR_6, VAR_10);
  return -1;
 case 5:
  if (VAR_5->width) {
   FUNC_2(&VAR_11, "%zu", VAR_5->width);
   break;
  }
  VAR_5->width = FUNC_8(VAR_6, 1, 1000, &VAR_10);
  if (VAR_10 == ((void*)0))
   return 0;
  FUNC_3(VAR_2, 0, 0,
      "-O width=%s is %s", VAR_6, VAR_10);
  return -1;
 case 6:
  if (VAR_5->tag != ((void*)0)) {
   VAR_11 = FUNC_4(VAR_5->tag);
   break;
  }
  VAR_5->tag = FUNC_4(VAR_6);
  return 0;
 case 7:
  VAR_5->fragment = 1;
  return 0;
 case 8:
  VAR_5->mdoc = 1;
  return 0;
 case 9:
  VAR_5->noval = 1;
  return 0;
 case 10:
  VAR_5->toc = 1;
  return 0;
 default:
  FUNC_3(VAR_0, 0, 0, "-O %s", VAR_6);
  return -1;
 }
 if (VAR_7) {
  FUNC_0(VAR_11);
  return 0;
 } else {
  FUNC_3(VAR_3, 0, 0,
      "-O %s=%s: already set to %s", VAR_8[VAR_13], VAR_6, VAR_11);
  FUNC_0(VAR_11);
  return -1;
 }
}
