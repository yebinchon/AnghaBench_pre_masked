
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct message {size_t seq; TYPE_1__ ts; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,char const*,int ,int *,int) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (int,struct message*,int,int ) ;
 int FUNC_5 (int,struct message*,int,int ,void*,int ) ;
 int FUNC_6 (char*,struct message*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(const int VAR_7, const char *VAR_8, const char *VAR_9, size_t VAR_10, bool VAR_11,
    bool VAR_12)
{
 int VAR_13;
 ssize_t VAR_14;
 struct message VAR_15;

 socklen_t VAR_16;

 VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_11 ? VAR_2 : VAR_3, &VAR_16, VAR_12);


 if (FUNC_8(VAR_7, 1) == -1)
  return -1;

 for (VAR_15.seq = 0; VAR_15.seq < VAR_10; VAR_15.seq++) {




  struct timeval VAR_17;
  if (FUNC_3(&VAR_17, ((void*)0)) == -1)
   FUNC_0(VAR_1, "clock (%s)", FUNC_7(VAR_5));
  VAR_15.ts.tv_sec = VAR_17.tv_sec;
  VAR_15.ts.tv_nsec = VAR_17.tv_usec * 1000;

  if (VAR_4)
   FUNC_6("sending", &VAR_15);
  VAR_14 = VAR_11 ? FUNC_4(VAR_13, &VAR_15, sizeof(VAR_15), 0) :
      FUNC_5(VAR_13, &VAR_15, sizeof(VAR_15), 0, (void *)&VAR_6, VAR_16);
  if (VAR_14 == -1)
   FUNC_0(VAR_1, "send (%s)", FUNC_7(VAR_5));
  FUNC_9(100);
 }


 if (FUNC_8(VAR_7, 1) == -1)
  return -1;

 return 0;
}
