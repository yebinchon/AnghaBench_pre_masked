
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_consumer {int dummy; } ;
struct diocskerneldump_arg {int kda_index; } ;
struct cdev {scalar_t__ si_drv2; } ;
typedef int kda ;


 int VAR_0 ;
 int FUNC_0 (struct diocskerneldump_arg*,int) ;
 char* FUNC_1 (struct cdev*) ;
 int * VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_consumer*,int,int ,int ) ;
 int FUNC_4 (struct cdev*,struct diocskerneldump_arg*) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_2)
{
 struct diocskerneldump_arg VAR_3;
 struct g_consumer *VAR_4;
 const char *VAR_5 = "/dev/", *VAR_6;
 int VAR_7;
 size_t VAR_8;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.kda_index = VAR_0;

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_8 = FUNC_6(VAR_5);
 VAR_6 = FUNC_1(VAR_2);
 if (FUNC_5(VAR_6, VAR_1) != 0 &&
    (FUNC_7(VAR_1, VAR_5, VAR_8) != 0 ||
     FUNC_5(VAR_6, VAR_1 + VAR_8) != 0))
  return (0);

 VAR_4 = (struct g_consumer *)VAR_2->si_drv2;
 VAR_7 = FUNC_3(VAR_4, 1, 0, 0);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_4(VAR_2, &VAR_3);
 if (VAR_7 == 0) {
  FUNC_2(VAR_1);
  VAR_1 = ((void*)0);
 }

 (void)FUNC_3(VAR_4, -1, 0, 0);

 return (VAR_7);
}
