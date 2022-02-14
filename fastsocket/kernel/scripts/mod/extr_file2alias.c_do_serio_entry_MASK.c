
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_device_id {scalar_t__ type; scalar_t__ proto; scalar_t__ id; scalar_t__ extra; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
     struct serio_device_id *VAR_2, char *VAR_3)
{
 VAR_2->type = FUNC_1(VAR_2->type);
 VAR_2->proto = FUNC_1(VAR_2->proto);
 VAR_2->id = FUNC_1(VAR_2->id);
 VAR_2->extra = FUNC_1(VAR_2->extra);

 FUNC_3(VAR_3, "serio:");
 FUNC_0(VAR_3, "ty", VAR_2->type != VAR_0, VAR_2->type);
 FUNC_0(VAR_3, "pr", VAR_2->proto != VAR_0, VAR_2->proto);
 FUNC_0(VAR_3, "id", VAR_2->id != VAR_0, VAR_2->id);
 FUNC_0(VAR_3, "ex", VAR_2->extra != VAR_0, VAR_2->extra);

 FUNC_2(VAR_3);
 return 1;
}
