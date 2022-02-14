
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 int FUNC_1 (int ) ;
 struct gctl_req* FUNC_2 () ;
 char* FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*,char*,int,char*) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1)
{
 struct gctl_req *VAR_2;
 const char *VAR_3;
 char VAR_4[VAR_0];

 VAR_2 = FUNC_2();
 FUNC_4(VAR_2, "verb", -1, "destroy geom");
 FUNC_4(VAR_2, "class", -1, "BDE");
 FUNC_5(VAR_4, "%s.bde", VAR_1);
 FUNC_4(VAR_2, "geom", -1, VAR_4);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0(1, "Detach of %s failed: %s", VAR_1, VAR_3);
 FUNC_1 (0);
}
