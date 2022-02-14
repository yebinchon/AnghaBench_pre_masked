
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct timespec*,struct timespec*) ;

void
FUNC_3(struct timespec *VAR_1, struct timespec *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 static int VAR_5;
 struct timespec VAR_6;

 FUNC_1("%d.%09d ", VAR_1->tv_sec, VAR_1->tv_nsec);
 FUNC_1("%d.%09d ", VAR_2->tv_sec, VAR_2->tv_nsec);
 FUNC_1("%u %u ", VAR_3, VAR_4);

 VAR_6 = *VAR_2;
 FUNC_2(&VAR_6,VAR_1);
 FUNC_1("%.9f ", VAR_6.tv_sec + VAR_6.tv_nsec / 1e9);
 FUNC_1("\n");
 FUNC_0(VAR_0);
}
