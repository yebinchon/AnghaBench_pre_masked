
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {double tv_usec; scalar_t__ tv_sec; } ;
struct rusage {struct timeval ru_utime; } ;
struct mbuf {int m_len; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (char**) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*,int,int,int) ;
 int FUNC_4 (struct mbuf*,int,int) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct rusage*) ;
 int FUNC_10 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_11 (struct mbuf*,int,int,int) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 () ;
 void* VAR_2 ;
 int FUNC_14 (struct mbuf*) ;
 int FUNC_15 (struct timeval*,struct timeval*,struct timeval*) ;

int
FUNC_16(int VAR_3, char **VAR_4)
{
 struct rusage VAR_5;
 struct timeval VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;



 long VAR_12, VAR_13;
 uint32_t VAR_14;
 struct mbuf *VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_8 = 16;
 VAR_16 = 0;
 VAR_2 = 0;
 VAR_13 = 100000;

 while ((VAR_17 = FUNC_7(VAR_3, VAR_4, "i:l:u:v")) != -1) {
  switch (VAR_17) {
  case 'i':
   VAR_13 = FUNC_2(VAR_1);
   break;
  case 'l':
   VAR_8 = FUNC_2(VAR_1);
   break;
  case 'u':
   VAR_2 = FUNC_2(VAR_1);
   break;
  case 'v':
   VAR_16 = 1;
   break;
  default:
   FUNC_5(1, "%s [-l <loops>] [-u <unalign> [-i <iterations> "
       "[<mbuf-size> ...]", FUNC_8());
  }
 }

 for (; VAR_8; --VAR_8) {
  if ((VAR_15 = FUNC_1(VAR_4 + 4)) == ((void*)0))
   continue;
  FUNC_14(VAR_15);
  VAR_14 = FUNC_13();
  VAR_11 = FUNC_10(VAR_15);


  if (VAR_8 == 1)
   VAR_10 = 0;
  else
   VAR_10 = VAR_11 ? FUNC_13() % VAR_11 : 0;

  VAR_11 -= VAR_10;
  VAR_9 = FUNC_11(VAR_15, VAR_11, VAR_10, VAR_14);
  FUNC_0(VAR_9);


  if (VAR_13 == 0)
   continue;

  FUNC_9(VAR_0, &VAR_5);
  VAR_6 = VAR_5.ru_utime;
  for (VAR_12 = VAR_13; VAR_12; --VAR_12)
   (void)FUNC_11(VAR_15, VAR_11, VAR_10, VAR_14);
  FUNC_9(VAR_0, &VAR_5);
  FUNC_15(&VAR_5.ru_utime, &VAR_6, &VAR_7);
  if (VAR_16)
   FUNC_12("portable version: %jd.%06jd\n",
       (intmax_t)VAR_7.tv_sec, (intmax_t)VAR_7.tv_usec);
  FUNC_6(VAR_15);
 }

 return 0;
}
