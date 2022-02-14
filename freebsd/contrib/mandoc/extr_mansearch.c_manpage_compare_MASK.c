
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manpage {int bits; int sec; scalar_t__ names; } ;


 int FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (scalar_t__,char) ;
 size_t FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_0, const void *VAR_1)
{
 const struct manpage *VAR_2, *VAR_3;
 const char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 if ((VAR_8 = VAR_3->bits - VAR_2->bits) ||
     (VAR_8 = VAR_2->sec - VAR_3->sec))
  return VAR_8;


 VAR_6 = FUNC_2(VAR_2->names, "(");
 VAR_7 = FUNC_2(VAR_3->names, "(");
 if (VAR_6 < VAR_7)
  VAR_6 = VAR_7;
 if ((VAR_8 = FUNC_3(VAR_2->names, VAR_3->names, VAR_6)))
  return VAR_8;


 VAR_4 = FUNC_1(VAR_2->names + VAR_6, '/');
 VAR_5 = FUNC_1(VAR_3->names + VAR_7, '/');
 return VAR_4 != ((void*)0) && VAR_5 != ((void*)0) ? FUNC_0(VAR_4, VAR_5) :
     VAR_4 != ((void*)0) ? -1 : VAR_5 != ((void*)0) ? 1 : 0;
}
