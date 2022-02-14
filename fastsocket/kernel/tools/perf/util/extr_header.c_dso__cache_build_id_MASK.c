
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char* long_name; int build_id; int short_name; scalar_t__ kernel; } ;


 int FUNC_0 (int ,int,char*,char const*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dso *VAR_0, const char *VAR_1)
{
 bool VAR_2 = VAR_0->kernel && VAR_0->long_name[0] != '/';
 bool VAR_3 = FUNC_1(VAR_0->short_name);

 return FUNC_0(VAR_0->build_id, sizeof(VAR_0->build_id),
         VAR_0->long_name, VAR_1,
         VAR_2, VAR_3);
}
