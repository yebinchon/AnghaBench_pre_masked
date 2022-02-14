
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
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char*,int *,int *,struct addrinfo**) ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,int ,...) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_6)
{
 char VAR_7[1024];
 pthread_t VAR_8 = FUNC_4();
 size_t VAR_9 = (FUNC_5() & 0x0fffffff) % VAR_4->sl_cur;
 char *VAR_10 = VAR_4->sl_str[VAR_9];
 struct addrinfo *VAR_11;
 int VAR_12, VAR_13;
 if (VAR_2) {
  VAR_13 = FUNC_6(VAR_7, sizeof(VAR_7), "%p: %d resolving %s %d\n",
   VAR_8, VAR_6, VAR_10, (int)VAR_9);
  (void)FUNC_7(VAR_0, VAR_7, VAR_13);
 }
 VAR_12 = FUNC_1(VAR_10, ((void*)0), ((void*)0), &VAR_11);
 if (VAR_2) {
  VAR_13 = FUNC_6(VAR_7, sizeof(VAR_7), "%p: host %s %s\n",
   VAR_8, VAR_10, VAR_12 ? "not found" : "ok");
  (void)FUNC_7(VAR_0, VAR_7, VAR_13);
 }
 FUNC_2(&VAR_5);
 VAR_1[VAR_9]++;
 VAR_3[VAR_9] += VAR_12 == 0;
 FUNC_3(&VAR_5);
 if (VAR_12 == 0)
  FUNC_0(VAR_11);
}
