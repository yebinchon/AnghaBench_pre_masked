
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w2 ;
typedef int w1 ;
struct both {int nread; int ev; } ;
typedef int r2 ;
typedef int r1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ,struct both*) ;
 int FUNC_4 (struct both*,int ,int) ;
 int * VAR_4 ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct both VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_5("Combined read/write: ");
 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 VAR_8 = 4096;
 VAR_9 = 8192;

 FUNC_3(&VAR_6, VAR_4[0], VAR_0, VAR_2, &VAR_6);
 FUNC_3(&VAR_8, VAR_4[0], VAR_1, VAR_3, &VAR_8);
 FUNC_3(&VAR_7, VAR_4[1], VAR_0, VAR_2, &VAR_7);
 FUNC_3(&VAR_9, VAR_4[1], VAR_1, VAR_3, &VAR_9);
 FUNC_6(FUNC_1(&VAR_6, ((void*)0)) != -1);
 FUNC_6(!FUNC_1(&VAR_8, ((void*)0)));
 FUNC_6(!FUNC_1(&VAR_7, ((void*)0)));
 FUNC_6(!FUNC_1(&VAR_9, ((void*)0)));
 FUNC_2();

 if (VAR_6 == 8192 && VAR_7 == 4096)
  VAR_5 = 1;

end:
 FUNC_0();
}
