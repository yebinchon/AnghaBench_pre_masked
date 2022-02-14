
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int equal; int * arch; int * sec; int * manpath; void* query; } ;
struct req {TYPE_1__ q; scalar_t__ isquery; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 void* FUNC_3 (char const*) ;
 void* FUNC_4 (char const*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 char* FUNC_8 (char const*,char) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct req*,int *) ;

__attribute__((used)) static void
FUNC_11(struct req *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;

 VAR_1->isquery = 0;
 VAR_1->q.equal = 1;
 VAR_1->q.manpath = ((void*)0);
 VAR_1->q.arch = ((void*)0);


 if ((VAR_3 = FUNC_8(VAR_2, '/')) == ((void*)0))
  VAR_3 = VAR_2;
 else
  VAR_3++;


 VAR_4 = FUNC_8(VAR_3, '.');
 if (VAR_4 != ((void*)0) && FUNC_2((unsigned char)*++VAR_4)) {
  VAR_1->q.query = FUNC_4(VAR_3, VAR_4 - VAR_3 - 1);
  VAR_1->q.sec = FUNC_3(VAR_4);
 } else {
  VAR_1->q.query = FUNC_3(VAR_3);
  VAR_1->q.sec = ((void*)0);
 }


 if (VAR_3 == VAR_2)
  return;


 VAR_5 = FUNC_6(VAR_2, '/');
 VAR_1->q.manpath = FUNC_4(VAR_2, VAR_5 - VAR_2);
 if (FUNC_10(VAR_1, VAR_1->q.manpath)) {
  VAR_2 = VAR_5 + 1;
  if (VAR_3 == VAR_2)
   return;
 } else {
  FUNC_1(VAR_1->q.manpath);
  VAR_1->q.manpath = ((void*)0);
 }


 if (FUNC_7(VAR_2, "man", 3) == 0 || FUNC_7(VAR_2, "cat", 3) == 0) {
  VAR_2 += 3;
  VAR_5 = FUNC_6(VAR_2, '/');
  FUNC_1(VAR_1->q.sec);
  VAR_1->q.sec = FUNC_4(VAR_2, VAR_5 - VAR_2);
  VAR_2 = VAR_5 + 1;
  if (VAR_3 == VAR_2)
   return;
 }


 VAR_5 = FUNC_6(VAR_2, '/');
 if (VAR_5 + 1 != VAR_3) {
  FUNC_5(
      "You specified too many directory components.");
  FUNC_0(VAR_0);
 }
 VAR_1->q.arch = FUNC_4(VAR_2, VAR_5 - VAR_2);
 if (FUNC_9(VAR_1->q.arch) == 0) {
  FUNC_5(
      "You specified an invalid directory component.");
  FUNC_0(VAR_0);
 }
}
