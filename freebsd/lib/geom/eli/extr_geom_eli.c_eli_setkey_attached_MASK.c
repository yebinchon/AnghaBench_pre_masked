
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {int md_iterations; } ;
typedef int key ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct gctl_req*,struct g_eli_metadata*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (struct gctl_req*,char*,int,int*) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*) ;
 int FUNC_6 (struct gctl_req*,char*,int,unsigned char*) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_1, struct g_eli_metadata *VAR_2)
{
 unsigned char VAR_3[VAR_0];
 intmax_t VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_1, "iterations");

 if (VAR_4 != -1)
  VAR_2->md_iterations = VAR_4;
 else
  VAR_5 = VAR_2->md_iterations;


 if (FUNC_1(VAR_1, VAR_2, VAR_3, 1) == ((void*)0)) {
  FUNC_2(VAR_3, sizeof(VAR_3));
  return;
 }




 if (VAR_4 == -1 && VAR_2->md_iterations != VAR_5) {
  VAR_6 = FUNC_3(VAR_1, "iterations", sizeof(intmax_t),
      &VAR_2->md_iterations);
  FUNC_0(VAR_6 == 0);
 }

 FUNC_6(VAR_1, "key", sizeof(VAR_3), VAR_3);
 FUNC_5(VAR_1);
 FUNC_2(VAR_3, sizeof(VAR_3));
}
