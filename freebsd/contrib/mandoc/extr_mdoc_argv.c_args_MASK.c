
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int flags; int roff; } ;
typedef enum margserr { ____Placeholder_margserr } margserr ;
typedef enum argsflag { ____Placeholder_argsflag } argsflag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int,int *) ;
 char* FUNC_3 (int ,char**,int,int*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static enum margserr
FUNC_5(struct roff_man *VAR_14, int VAR_15, int *VAR_16,
  char *VAR_17, enum argsflag VAR_18, char **VAR_19)
{
 char *VAR_20;
 char *VAR_21;
 int VAR_22;

 if (VAR_17[*VAR_16] == '\0') {
  if (VAR_14->flags & VAR_10 &&
      ! (VAR_14->flags & VAR_9)) {
   FUNC_2(VAR_7, VAR_15, *VAR_16, ((void*)0));
   VAR_14->flags &= ~VAR_10;
  }
  VAR_14->flags &= ~VAR_12;
  return VAR_3;
 }

 if (VAR_19 == ((void*)0))
  VAR_19 = &VAR_21;
 *VAR_19 = VAR_17 + *VAR_16;

 if (VAR_18 == VAR_0 && FUNC_0(VAR_17, *VAR_16))
  return VAR_5;






 if (VAR_18 == VAR_1) {
  if ((VAR_20 = FUNC_4(*VAR_19, '\t')) != ((void*)0)) {







   if (VAR_20 > VAR_17 && VAR_20[-1] != ' ')
    VAR_14->flags |= VAR_12;
   if (VAR_20[1] != ' ')
    VAR_14->flags |= VAR_13;







   *VAR_16 += (int)(VAR_20 - *VAR_19) + 1;
   while (VAR_17[*VAR_16] == ' ' && VAR_17[*VAR_16 + 1] == ' ')
    (*VAR_16)++;






   if (VAR_17[*VAR_16] == '\0' || VAR_17[*VAR_16 + 1] == '\0')
    VAR_14->flags |= VAR_13;
  } else {
   VAR_20 = FUNC_4(*VAR_19, '\0');
   if (VAR_20[-1] == ' ')
    FUNC_2(VAR_8,
        VAR_15, *VAR_16, ((void*)0));
   *VAR_16 += (int)(VAR_20 - *VAR_19);
  }


  while (VAR_20 > *VAR_19 && VAR_20[-1] == ' ' &&
      (VAR_20 - 1 == *VAR_19 || VAR_20[-2] != '\\'))
   VAR_20--;
  *VAR_20 = '\0';

  return VAR_4;
 }
 if (VAR_14->flags & VAR_10 ||
     (VAR_14->flags & VAR_9 && VAR_17[*VAR_16] == '\"')) {
  if ((VAR_14->flags & VAR_10) == 0) {
   *VAR_19 = &VAR_17[++(*VAR_16)];
   VAR_14->flags |= VAR_10;
  }
  VAR_22 = 0;
  for ( ; VAR_17[*VAR_16]; (*VAR_16)++) {

   if (VAR_22)
    VAR_17[*VAR_16 - VAR_22] = VAR_17[*VAR_16];
   if ('\"' != VAR_17[*VAR_16])
    continue;

   if ('\"' != VAR_17[*VAR_16 + 1])
    break;

   VAR_22++;
   (*VAR_16)++;
  }
  if (VAR_22)
   VAR_17[*VAR_16 - VAR_22] = '\0';

  if (VAR_17[*VAR_16] == '\0') {
   if ( ! (VAR_14->flags & VAR_9))
    FUNC_2(VAR_7,
        VAR_15, *VAR_16, ((void*)0));
   return VAR_6;
  }

  VAR_14->flags &= ~VAR_10;
  VAR_17[(*VAR_16)++] = '\0';

  if ('\0' == VAR_17[*VAR_16])
   return VAR_6;

  while (' ' == VAR_17[*VAR_16])
   (*VAR_16)++;

  if ('\0' == VAR_17[*VAR_16])
   FUNC_2(VAR_8, VAR_15, *VAR_16, ((void*)0));

  return VAR_6;
 }

 VAR_20 = &VAR_17[*VAR_16];
 *VAR_19 = FUNC_3(VAR_14->roff, &VAR_20, VAR_15, VAR_16);
 if (VAR_19 == &VAR_21)
  FUNC_1(*VAR_19);






 if (*VAR_20 == '\0' && VAR_14->flags & VAR_12) {
  VAR_14->flags &= ~VAR_12;
  VAR_14->flags |= VAR_11;
 }
 return VAR_2;
}
