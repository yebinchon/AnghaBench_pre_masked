
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstream {scalar_t__ len; char** bufp; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ fpos_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,struct memstream*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 char* FUNC_2 (char*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct memstream *VAR_2, fpos_t VAR_3)
{
 char *VAR_4;
 ssize_t VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  VAR_5 = VAR_0 - 1;
 else
  VAR_5 = VAR_3;
 if (VAR_5 > VAR_2->len) {
  VAR_4 = FUNC_2(*VAR_2->bufp, VAR_5 + 1);
  if (VAR_4 != ((void*)0)) {




   FUNC_1(VAR_4 + VAR_2->len + 1, 0, VAR_5 - VAR_2->len);
   *VAR_2->bufp = VAR_4;
   VAR_2->len = VAR_5;
   return (1);
  }
  return (0);
 }
 return (1);
}
