
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int,int,char) ;
 int FUNC_2 (struct ssh*,char*) ;
 int FUNC_3 (struct ssh*,int) ;
 int FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ssh *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 if ((VAR_4 = FUNC_1(0, 1, 1, ',')) == ((void*)0))
  return VAR_1;

 if ((VAR_3 = FUNC_5(VAR_2, VAR_0)) != 0 ||
     (VAR_3 = FUNC_3(VAR_2, 1)) != 0 ||
     (VAR_3 = FUNC_2(VAR_2, "server-sig-algs")) != 0 ||
     (VAR_3 = FUNC_2(VAR_2, VAR_4)) != 0 ||
     (VAR_3 = FUNC_4(VAR_2)) != 0)
  goto out;

 VAR_3 = 0;
 out:
 FUNC_0(VAR_4);
 return VAR_3;
}
