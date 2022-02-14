
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limits {scalar_t__ limconst; } ;
struct command {int dummy; } ;
typedef int RLIM_TYPE ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct command*) ;
 struct limits* FUNC_1 (int ) ;
 struct limits* VAR_3 ;
 scalar_t__ FUNC_2 (struct limits*,int,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(Char **VAR_4, struct command *VAR_5)
{
    struct limits *VAR_6;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;

    FUNC_0(VAR_5);
    while (*++VAR_4 && **VAR_4 == '-') {
 Char *VAR_10 = *VAR_4;
 while (*++VAR_10)
     switch (*VAR_10) {
     case 'f':
  VAR_9 = 1;
  break;
     case 'h':
  VAR_8 = 1;
  break;
     default:
  FUNC_3(VAR_1);
  break;
     }
    }

    if (*VAR_4 == 0) {
 for (VAR_6 = VAR_3; VAR_6->limconst >= 0; VAR_6++)
     if (FUNC_2(VAR_6, VAR_8, (RLIM_TYPE) VAR_2) < 0)
  VAR_7++;
 if (!VAR_9 && VAR_7)
     FUNC_3(VAR_0);
 return;
    }
    while (*VAR_4) {
 VAR_6 = FUNC_1(*VAR_4++);
 if (FUNC_2(VAR_6, VAR_8, (RLIM_TYPE) VAR_2) < 0 && !VAR_9)
     FUNC_3(VAR_0);
    }
}
