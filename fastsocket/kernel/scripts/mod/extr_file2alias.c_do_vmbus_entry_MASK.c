
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_vmbus_device_id {int* guid; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, struct hv_vmbus_device_id *VAR_1,
     char *VAR_2)
{
 int VAR_3;
 char VAR_4[((sizeof(VAR_1->guid) + 1)) * 2];

 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_1->guid) * 2); VAR_3 += 2)
  FUNC_0(&VAR_4[VAR_3], "%02x", VAR_1->guid[VAR_3/2]);

 FUNC_2(VAR_2, "vmbus:");
 FUNC_1(VAR_2, VAR_4);

 return 1;
}
