
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fts_info; char const* fts_path; struct stat const* fts_statp; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


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
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char* const*,int,int *) ;
 TYPE_1__* FUNC_2 (int *) ;

int
FUNC_3(const char *VAR_11, int (*VAR_12)(const char *, const struct stat *, int),
    int VAR_13)
{
 char * const VAR_14[2] = { (char *)VAR_11, ((void*)0) };
 FTSENT *VAR_15;
 FTS *VAR_16;
 int VAR_17 = 0, VAR_18, VAR_19;


 if (VAR_13 < 1) {
  VAR_10 = VAR_0;
  return (-1);
 }

 VAR_16 = FUNC_1(VAR_14, VAR_3 | VAR_2 | VAR_4, ((void*)0));
 if (VAR_16 == ((void*)0))
  return (-1);
 while ((VAR_15 = FUNC_2(VAR_16)) != ((void*)0)) {
  switch (VAR_15->fts_info) {
  case 137:
   VAR_18 = VAR_5;
   break;
  case 134:
   VAR_18 = VAR_6;
   break;
  case 133:

   continue;
  case 132:
  case 135:
   VAR_18 = VAR_7;
   break;
  case 131:
  case 130:
  case 128:
   VAR_18 = VAR_8;
   break;
  case 129:
   VAR_18 = VAR_9;
   break;
  case 136:
   VAR_10 = VAR_1;

  default:
   VAR_17 = -1;
   goto done;
  }
  VAR_17 = VAR_12(VAR_15->fts_path, VAR_15->fts_statp, VAR_18);
  if (VAR_17 != 0)
   break;
 }
done:
 VAR_19 = VAR_10;
 if (FUNC_0(VAR_16) != 0 && VAR_17 == 0)
  VAR_17 = -1;
 else
  VAR_10 = VAR_19;
 return (VAR_17);
}
