
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int equal; int * arch; int * sec; int * manpath; int * query; } ;
struct req {int isquery; TYPE_1__ q; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char const*,size_t) ;
 int FUNC_3 (int **,char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct req *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_0->isquery = 1;
 VAR_0->q.manpath = ((void*)0);
 VAR_0->q.arch = ((void*)0);
 VAR_0->q.sec = ((void*)0);
 VAR_0->q.query = ((void*)0);
 VAR_0->q.equal = 1;

 VAR_2 = VAR_3 = ((void*)0);
 while (*VAR_1 != '\0') {



  VAR_4 = FUNC_5(VAR_1, "=;&");
  VAR_2 = FUNC_2(VAR_1, VAR_4);
  VAR_1 += VAR_4;
  if (*VAR_1 != '=')
   goto next;



  VAR_5 = FUNC_5(++VAR_1, ";&");
  VAR_3 = FUNC_2(VAR_1, VAR_5);
  VAR_1 += VAR_5;



  if ( ! (FUNC_1(VAR_2) && FUNC_1(VAR_3)))
   goto next;



  if ( ! FUNC_4(VAR_2, "query"))
   FUNC_3(&VAR_0->q.query, &VAR_3);

  else if ( ! FUNC_4(VAR_2, "apropos"))
   VAR_0->q.equal = !FUNC_4(VAR_3, "0");

  else if ( ! FUNC_4(VAR_2, "manpath")) {







   FUNC_3(&VAR_0->q.manpath, &VAR_3);
  }

  else if ( ! (FUNC_4(VAR_2, "sec")



      )) {
   if ( ! FUNC_4(VAR_3, "0"))
    *VAR_3 = '\0';
   FUNC_3(&VAR_0->q.sec, &VAR_3);
  }

  else if ( ! FUNC_4(VAR_2, "arch")) {
   if ( ! FUNC_4(VAR_3, "default"))
    *VAR_3 = '\0';
   FUNC_3(&VAR_0->q.arch, &VAR_3);
  }






next:
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
  FUNC_0(VAR_3);
  VAR_3 = ((void*)0);

  if (*VAR_1 != '\0')
   VAR_1++;
 }
}
