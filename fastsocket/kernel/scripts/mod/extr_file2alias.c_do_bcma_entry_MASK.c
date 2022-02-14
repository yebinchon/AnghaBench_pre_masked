
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_device_id {scalar_t__ manuf; scalar_t__ id; scalar_t__ rev; scalar_t__ class; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4,
    struct bcma_device_id *VAR_5, char *VAR_6)
{
 VAR_5->manuf = FUNC_1(VAR_5->manuf);
 VAR_5->id = FUNC_1(VAR_5->id);
 VAR_5->rev = FUNC_1(VAR_5->rev);
 VAR_5->class = FUNC_1(VAR_5->class);

 FUNC_3(VAR_6, "bcma:");
 FUNC_0(VAR_6, "m", VAR_5->manuf != VAR_2, VAR_5->manuf);
 FUNC_0(VAR_6, "id", VAR_5->id != VAR_1, VAR_5->id);
 FUNC_0(VAR_6, "rev", VAR_5->rev != VAR_3, VAR_5->rev);
 FUNC_0(VAR_6, "cl", VAR_5->class != VAR_0, VAR_5->class);
 FUNC_2(VAR_6);
 return 1;
}
