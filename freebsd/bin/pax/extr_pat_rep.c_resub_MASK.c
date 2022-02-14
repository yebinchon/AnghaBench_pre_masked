
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_6__ {int re_nsub; } ;
typedef TYPE_2__ regex_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(regex_t *VAR_0, regmatch_t *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4,
 char *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char VAR_8;
 regmatch_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = VAR_3;
 VAR_7 = VAR_4;
 VAR_11 = VAR_0->re_nsub;
 while ((VAR_7 < VAR_5) && ((VAR_8 = *VAR_6++) != '\0')) {




  if (VAR_8 == '&') {
   VAR_9 = VAR_1;
  } else if ((VAR_8 == '\\') && (*VAR_6 >= '0') && (*VAR_6 <= '9')) {



   if ((VAR_10 = *VAR_6++ - '0') > VAR_11)
    return(-1);
   VAR_9 = VAR_1 + VAR_10;
  } else {



    if ((VAR_8 == '\\') && ((*VAR_6 == '\\') || (*VAR_6 == '&')))
     VAR_8 = *VAR_6++;
    *VAR_7++ = VAR_8;
   continue;
  }




  if ((VAR_9->rm_so < 0) || (VAR_9->rm_eo < 0) ||
      ((VAR_10 = VAR_9->rm_eo - VAR_9->rm_so) <= 0))
   continue;





  if (VAR_10 > (VAR_5 - VAR_7))
   VAR_10 = VAR_5 - VAR_7;
  if (FUNC_0(VAR_7, VAR_2 + VAR_9->rm_so, VAR_10) != VAR_10)
   return(-1);
  VAR_7 += VAR_10;
 }
 return(VAR_7 - VAR_4);
}
