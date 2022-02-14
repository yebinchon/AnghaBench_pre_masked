
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {char* s; scalar_t__ (* append_char ) (struct state*,char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct state*,char) ;
 scalar_t__ FUNC_1 (struct state*,char) ;
 scalar_t__ FUNC_2 (struct state*,char) ;
 scalar_t__ FUNC_3 (struct state*,char) ;
 scalar_t__ FUNC_4 (struct state*,char) ;
 scalar_t__ FUNC_5 (struct state*,char) ;
 scalar_t__ FUNC_6 (struct state*,char) ;
 scalar_t__ FUNC_7 (struct state*,char) ;
 scalar_t__ FUNC_8 (struct state*,char) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(struct state *VAR_5,
       unsigned long VAR_6, unsigned VAR_7, char *VAR_8,
       int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
  int VAR_13 = 0;
  int VAR_14;


  if(VAR_10 != -1)
    VAR_11 &= ~VAR_4;
  else
    VAR_10 = 1;

  if(VAR_10 == 0 && VAR_6 == 0)
    return 0;
  do{
    if((*VAR_5->append_char)(VAR_5, VAR_8[VAR_6 % VAR_7]))
      return 1;
    VAR_13++;
    VAR_6 /= VAR_7;
  }while(VAR_6);
  VAR_10 -= VAR_13;

  while(VAR_10-- > 0){
    if((*VAR_5->append_char)(VAR_5, '0'))
      return 1;
    VAR_13++;
  }

  if(VAR_11 & VAR_0 && (VAR_7 == 16 || VAR_7 == 8))
    VAR_13 += VAR_7 / 8;

  if(VAR_11 & VAR_4){
    VAR_9 -= VAR_13;
    if(VAR_12 || (VAR_11 & VAR_3) || (VAR_11 & VAR_2))
      VAR_9--;
    while(VAR_9-- > 0){
      if((*VAR_5->append_char)(VAR_5, '0'))
 return 1;
      VAR_13++;
    }
  }

  if(VAR_11 & VAR_0 && (VAR_7 == 16 || VAR_7 == 8)){
    if(VAR_7 == 16)
      if((*VAR_5->append_char)(VAR_5, VAR_8[10] + 23))
 return 1;
    if((*VAR_5->append_char)(VAR_5, '0'))
      return 1;
  }

  if(VAR_12){
    if((*VAR_5->append_char)(VAR_5, '-'))
      return 1;
    VAR_13++;
  } else if(VAR_11 & VAR_2) {
    if((*VAR_5->append_char)(VAR_5, '+'))
      return 1;
    VAR_13++;
  } else if(VAR_11 & VAR_3) {
    if((*VAR_5->append_char)(VAR_5, ' '))
      return 1;
    VAR_13++;
  }
  if(VAR_11 & VAR_1)

    for(VAR_14 = 0; VAR_14 < VAR_13 / 2; VAR_14++){
      char VAR_15 = VAR_5->s[-VAR_14-1];
      VAR_5->s[-VAR_14-1] = VAR_5->s[-VAR_13+VAR_14];
      VAR_5->s[-VAR_13+VAR_14] = VAR_15;
    }
  VAR_9 -= VAR_13;
  while(VAR_9-- > 0){
    if((*VAR_5->append_char)(VAR_5, ' '))
      return 1;
    VAR_13++;
  }
  if(!(VAR_11 & VAR_1))

    for(VAR_14 = 0; VAR_14 < VAR_13 / 2; VAR_14++){
      char VAR_16 = VAR_5->s[-VAR_14-1];
      VAR_5->s[-VAR_14-1] = VAR_5->s[-VAR_13+VAR_14];
      VAR_5->s[-VAR_13+VAR_14] = VAR_16;
    }

  return 0;
}
