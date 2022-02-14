
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;


 int FUNC_0 (char*,int,float) ;
 TYPE_2__ VAR_0 ;
 float VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,long long) ;
 TYPE_1__ VAR_2 ;
 char* VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 char VAR_6[32];
 float VAR_7;
 long long VAR_8;

 VAR_7 = (VAR_0.tv_sec - VAR_2.tv_sec) * 1000000 + (VAR_0.tv_usec - VAR_2.tv_usec);
 VAR_8 = (long long) VAR_1 * VAR_4 * VAR_5 * 2;


 FUNC_1("%-10s", VAR_3);
 FUNC_2(VAR_6, sizeof VAR_6, VAR_5);
 FUNC_1("%-8s", VAR_6);
 FUNC_0(VAR_6, sizeof VAR_6, VAR_4);
 FUNC_1("%-8s", VAR_6);
 FUNC_0(VAR_6, sizeof VAR_6, VAR_1);
 FUNC_1("%-8s", VAR_6);
 FUNC_2(VAR_6, sizeof VAR_6, VAR_8);
 FUNC_1("%-8s", VAR_6);
 FUNC_1("%8.2fs%10.2f%11.2f\n",
  VAR_7 / 1000000., (VAR_8 * 8) / (1000. * VAR_7),
  (VAR_7 / VAR_1) / (VAR_4 * 2));
}
