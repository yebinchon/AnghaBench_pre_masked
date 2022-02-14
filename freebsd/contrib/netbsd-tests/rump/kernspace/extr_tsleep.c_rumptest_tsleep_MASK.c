
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int *,int ,void*,struct lwp**,char*) ;
 int FUNC_1 (struct lwp*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,int) ;
 int VAR_7 ;

void
FUNC_4()
{
 struct lwp *VAR_8[VAR_4];
 int VAR_9, VAR_10;

 FUNC_2(&VAR_6, VAR_3, VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_0(VAR_5, VAR_2| VAR_1,
      ((void*)0), VAR_7, (void *)(uintptr_t)VAR_10, &VAR_8[VAR_10], "nb");
  if (VAR_9)
   FUNC_3("thread create failed: %d", VAR_9);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_1(VAR_8[VAR_10]);
 }
}
