
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tv_sec; int tv_usec; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,long long) ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 char VAR_7[32];
 float VAR_8;
 long long VAR_9;
 int VAR_10;

 VAR_8 = (VAR_1.tv_sec - VAR_3.tv_sec) * 1000000 + (VAR_1.tv_usec - VAR_3.tv_usec);
 VAR_10 = VAR_0 ? VAR_5 * 2 : FUNC_0(VAR_2.data);
 VAR_9 = (long long) VAR_10 * VAR_6;


 FUNC_2("%-10s", VAR_4);
 FUNC_3(VAR_7, sizeof VAR_7, VAR_6);
 FUNC_2("%-8s", VAR_7);
 FUNC_1(VAR_7, sizeof VAR_7, VAR_10);
 FUNC_2("%-8s", VAR_7);
 FUNC_3(VAR_7, sizeof VAR_7, VAR_9);
 FUNC_2("%-8s", VAR_7);
 FUNC_2("%8.2fs%10.2f%11.2f\n",
  VAR_8 / 1000000., (VAR_9 * 8) / (1000. * VAR_8),
  (VAR_8 / VAR_10));
}
