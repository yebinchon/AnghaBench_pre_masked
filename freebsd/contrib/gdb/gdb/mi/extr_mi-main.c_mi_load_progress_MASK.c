
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct timeval*,int *) ;
 char* VAR_2 ;
 struct cleanup* FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int ,char*,unsigned long) ;
 int FUNC_9 (int ,char*,char const*) ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*) ;

void
FUNC_12 (const char *VAR_5,
    unsigned long VAR_6,
    unsigned long VAR_7,
    unsigned long VAR_8,
    unsigned long VAR_9)
{
  struct timeval VAR_10, VAR_11, VAR_12;
  static struct timeval VAR_13;
  static char *VAR_14 = ((void*)0);
  int VAR_15;

  if (!FUNC_0 (VAR_0)
      && !FUNC_0 (VAR_1))
    return;

  VAR_12.tv_sec = 0;
  VAR_12.tv_usec = 500000;
  FUNC_4 (&VAR_10, ((void*)0));

  VAR_11.tv_usec = VAR_10.tv_usec - VAR_13.tv_usec;
  VAR_11.tv_sec = VAR_10.tv_sec - VAR_13.tv_sec;

  if (VAR_11.tv_usec < 0)
    {
      VAR_11.tv_sec -= 1;
      VAR_11.tv_usec += 1000000;
    }

  VAR_15 = (VAR_14 ?
   FUNC_7 (VAR_14, VAR_5) : 1);
  if (VAR_15)
    {
      struct cleanup *VAR_16;
      FUNC_10 (VAR_14);
      VAR_14 = FUNC_11 (VAR_5);

      if (VAR_2)
 FUNC_2 (VAR_2, VAR_3);
      FUNC_2 ("+download", VAR_3);
      VAR_16 = FUNC_5 (VAR_4, ((void*)0));
      FUNC_9 (VAR_4, "section", VAR_5);
      FUNC_8 (VAR_4, "section-size", VAR_7);
      FUNC_8 (VAR_4, "total-size", VAR_9);
      FUNC_1 (VAR_16);
      FUNC_6 (VAR_4, VAR_3);
      FUNC_2 ("\n", VAR_3);
      FUNC_3 (VAR_3);
    }

  if (VAR_11.tv_sec >= VAR_12.tv_sec &&
      VAR_11.tv_usec >= VAR_12.tv_usec)
    {
      struct cleanup *VAR_17;
      VAR_13.tv_sec = VAR_10.tv_sec;
      VAR_13.tv_usec = VAR_10.tv_usec;
      if (VAR_2)
 FUNC_2 (VAR_2, VAR_3);
      FUNC_2 ("+download", VAR_3);
      VAR_17 = FUNC_5 (VAR_4, ((void*)0));
      FUNC_9 (VAR_4, "section", VAR_5);
      FUNC_8 (VAR_4, "section-sent", VAR_6);
      FUNC_8 (VAR_4, "section-size", VAR_7);
      FUNC_8 (VAR_4, "total-sent", VAR_8);
      FUNC_8 (VAR_4, "total-size", VAR_9);
      FUNC_1 (VAR_17);
      FUNC_6 (VAR_4, VAR_3);
      FUNC_2 ("\n", VAR_3);
      FUNC_3 (VAR_3);
    }
}
