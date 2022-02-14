
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {float tv_sec; scalar_t__ tv_usec; } ;
struct rusage {int ru_utime; } ;
struct TYPE_3__ {char* name; char* (* End ) (int *,char*) ;int (* Update ) (int *,unsigned char*,int) ;int (* Init ) (int *) ;} ;
typedef int DIGEST_CTX ;
typedef TYPE_1__ Algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct rusage*) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *,struct timeval*) ;

__attribute__((used)) static void
FUNC_7(const Algorithm_t *VAR_5)
{
 DIGEST_CTX VAR_6;
 struct rusage VAR_7, VAR_8;
 struct timeval VAR_9;
 float VAR_10;
 unsigned char VAR_11[VAR_3];
 unsigned int VAR_12;
 char *VAR_13, VAR_14[VAR_0];

 FUNC_2("%s time trial. Digesting %d %d-byte blocks ...",
     VAR_5->name, VAR_2, VAR_3);
 FUNC_0(VAR_4);


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_11[VAR_12] = (unsigned char) (VAR_12 & 0xff);


 FUNC_1(VAR_1, &VAR_7);


 VAR_5->Init(&VAR_6);
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  VAR_5->Update(&VAR_6, VAR_11, VAR_3);
 VAR_13 = VAR_5->End(&VAR_6, VAR_14);


 FUNC_1(VAR_1, &VAR_8);
 FUNC_6(&VAR_8.ru_utime, &VAR_7.ru_utime, &VAR_9);
 VAR_10 = VAR_9.tv_sec + (float) VAR_9.tv_usec / 1000000;

 FUNC_2(" done\n");
 FUNC_2("Digest = %s", VAR_13);
 FUNC_2("\nTime = %f seconds\n", VAR_10);
 FUNC_2("Speed = %f MiB/second\n", (float) VAR_3 *
  (float) VAR_2 / VAR_10 / (1 << 20));
}
