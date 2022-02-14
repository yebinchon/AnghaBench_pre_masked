
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int dummy; } ;
typedef int pthread_t ;
typedef int buf ;
struct TYPE_2__ {int sl_cur; char** sl_str; } ;





 int VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int,char*,int ,int,char*,int) ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(int VAR_6)
{
 char VAR_7[1024];
 pthread_t VAR_8 = FUNC_2();
 size_t VAR_9 = (FUNC_3() & 0x0fffffff) % VAR_3->sl_cur;
 char *VAR_10 = VAR_3->sl_str[VAR_9];
 struct addrinfo VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_7(VAR_7, sizeof(VAR_7), "%p: %d resolving %s %d\n",
     VAR_8, VAR_6, VAR_10, (int)VAR_9);
 (void)FUNC_8(VAR_0, VAR_7, VAR_14);
 switch (VAR_4) {
 case 130:
  VAR_13 = FUNC_4(VAR_8, VAR_10, VAR_9);
  break;
 case 129:
  VAR_13 = FUNC_5(VAR_8, VAR_10);
  break;
 case 128:
  VAR_13 = FUNC_6(VAR_8, VAR_10);
  break;
 default:
  break;
 }
 FUNC_0(&VAR_5);
 VAR_1[VAR_9]++;
 VAR_2[VAR_9] += VAR_13 == 0;
 FUNC_1(&VAR_5);
}
