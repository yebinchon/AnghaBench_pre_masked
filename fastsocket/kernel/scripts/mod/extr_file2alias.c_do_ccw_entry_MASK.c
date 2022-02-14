
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device_id {int match_flags; int cu_type; int cu_model; int dev_type; int dev_model; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4,
   struct ccw_device_id *VAR_5, char *VAR_6)
{
 VAR_5->match_flags = FUNC_1(VAR_5->match_flags);
 VAR_5->cu_type = FUNC_1(VAR_5->cu_type);
 VAR_5->cu_model = FUNC_1(VAR_5->cu_model);
 VAR_5->dev_type = FUNC_1(VAR_5->dev_type);
 VAR_5->dev_model = FUNC_1(VAR_5->dev_model);

 FUNC_3(VAR_6, "ccw:");
 FUNC_0(VAR_6, "t", VAR_5->match_flags&VAR_1,
     VAR_5->cu_type);
 FUNC_0(VAR_6, "m", VAR_5->match_flags&VAR_0,
     VAR_5->cu_model);
 FUNC_0(VAR_6, "dt", VAR_5->match_flags&VAR_3,
     VAR_5->dev_type);
 FUNC_0(VAR_6, "dm", VAR_5->match_flags&VAR_2,
     VAR_5->dev_model);
 FUNC_2(VAR_6);
 return 1;
}
