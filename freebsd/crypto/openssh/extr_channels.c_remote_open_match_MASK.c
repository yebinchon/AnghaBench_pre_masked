
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct permission {scalar_t__ listen_port; int * listen_host; } ;
struct Forward {scalar_t__ listen_port; int * listen_host; int * listen_path; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct permission *VAR_1, struct Forward *VAR_2)
{
 int VAR_3;
 char *VAR_4;


 if (VAR_2->listen_path != ((void*)0))
  return 1;

 if (VAR_2->listen_host == ((void*)0) || VAR_1->listen_host == ((void*)0))
  return 0;

 if (VAR_1->listen_port != VAR_0 &&
     VAR_1->listen_port != VAR_2->listen_port)
  return 0;


 VAR_4 = FUNC_3(VAR_2->listen_host);
 FUNC_1(VAR_4);
 VAR_3 = FUNC_2(VAR_4, VAR_1->listen_host);
 FUNC_0(VAR_4);

 return VAR_3;
}
