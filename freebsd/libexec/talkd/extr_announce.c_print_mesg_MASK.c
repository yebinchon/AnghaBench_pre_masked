
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_year; int tm_mon; int tm_mday; } ;
struct timeval {int tv_sec; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct TYPE_3__ {char* l_name; } ;
typedef TYPE_1__ CTL_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct timeval*,int *) ;
 char* VAR_6 ;
 struct tm* FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;
 int * FUNC_7 (struct iovec*,int,char const*,scalar_t__) ;

int
FUNC_8(const char *VAR_7, CTL_MSG *VAR_8,
    const char *VAR_9)
{
 struct timeval VAR_10;
 time_t VAR_11;
 struct tm *VAR_12;
 struct iovec VAR_13;
 char VAR_14[VAR_2][VAR_1];
 int VAR_15[VAR_2];
 char VAR_16[VAR_2*VAR_1];
 char *VAR_17, *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_20 = 0;
 VAR_22 = 0;
 FUNC_0(&VAR_10, ((void*)0));
 VAR_11 = VAR_10.tv_sec;
 VAR_12 = FUNC_1(&VAR_11);
 (void)FUNC_4(VAR_14[VAR_20], VAR_1, " ");
 VAR_15[VAR_20] = FUNC_5(VAR_14[VAR_20]);
 VAR_22 = FUNC_3(VAR_22, VAR_15[VAR_20]);
 VAR_20++;
 (void)FUNC_4(VAR_14[VAR_20], VAR_1,
  "Message from Talk_Daemon@%s at %d:%02d on %d/%.2d/%.2d ...",
  VAR_6, VAR_12->tm_hour , VAR_12->tm_min,
  VAR_12->tm_year + 1900, VAR_12->tm_mon + 1,
  VAR_12->tm_mday);
 VAR_15[VAR_20] = FUNC_5(VAR_14[VAR_20]);
 VAR_22 = FUNC_3(VAR_22, VAR_15[VAR_20]);
 VAR_20++;

 VAR_19 = FUNC_2(FUNC_5(VAR_8->l_name) * 4 + 1);
 FUNC_6(VAR_19, VAR_8->l_name, VAR_5);
 (void)FUNC_4(VAR_14[VAR_20], VAR_1,
     "talk: connection requested by %s@%s", VAR_19, VAR_9);
 VAR_15[VAR_20] = FUNC_5(VAR_14[VAR_20]);
 VAR_22 = FUNC_3(VAR_22, VAR_15[VAR_20]);
 VAR_20++;
 (void)FUNC_4(VAR_14[VAR_20], VAR_1, "talk: respond with:  talk %s@%s",
     VAR_19, VAR_9);
 VAR_15[VAR_20] = FUNC_5(VAR_14[VAR_20]);
 VAR_22 = FUNC_3(VAR_22, VAR_15[VAR_20]);
 VAR_20++;
 (void)FUNC_4(VAR_14[VAR_20], VAR_1, " ");
 VAR_15[VAR_20] = FUNC_5(VAR_14[VAR_20]);
 VAR_22 = FUNC_3(VAR_22, VAR_15[VAR_20]);
 VAR_20++;
 VAR_17 = VAR_16;
 *VAR_17++ = '\007';
 *VAR_17++ = '\r';
 *VAR_17++ = '\n';
 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {

  VAR_18 = VAR_14[VAR_20];
  while (*VAR_18 != '\0')
   *(VAR_17++) = *(VAR_18++);

  for (VAR_21 = VAR_15[VAR_20]; VAR_21 < VAR_22 + 2; VAR_21++)
   *(VAR_17++) = ' ';
  *(VAR_17++) = '\r';
  *(VAR_17++) = '\n';
 }
 *VAR_17 = '\0';
 VAR_13.iov_base = VAR_16;
 VAR_13.iov_len = VAR_17 - VAR_16;





 if (FUNC_7(&VAR_13, 1, VAR_7, VAR_3 - 5) != ((void*)0))
  return (VAR_0);

 return (VAR_4);
}
