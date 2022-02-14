
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_cpu_id {scalar_t__ feature; scalar_t__ family; scalar_t__ model; scalar_t__ vendor; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, struct x86_cpu_id *VAR_5,
      char *VAR_6)
{
 VAR_5->feature = FUNC_1(VAR_5->feature);
 VAR_5->family = FUNC_1(VAR_5->family);
 VAR_5->model = FUNC_1(VAR_5->model);
 VAR_5->vendor = FUNC_1(VAR_5->vendor);

 FUNC_3(VAR_6, "x86cpu:");
 FUNC_0(VAR_6, "vendor:", VAR_5->vendor != VAR_3, VAR_5->vendor);
 FUNC_0(VAR_6, ":family:", VAR_5->family != VAR_0, VAR_5->family);
 FUNC_0(VAR_6, ":model:", VAR_5->model != VAR_2, VAR_5->model);
 FUNC_0(VAR_6, ":feature:*,", VAR_5->feature != VAR_1, VAR_5->feature);
 FUNC_2(VAR_6, ",*");
 return 1;
}
