
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_guid_inst; int ch_guid_type; } ;
typedef int guidbuf ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,char*,size_t) ;
 struct vmbus_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, char *VAR_3, size_t VAR_4)
{
 const struct vmbus_channel *VAR_5;
 char VAR_6[VAR_0];

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0)) {

  return (0);
 }

 FUNC_1(VAR_3, "classid=", VAR_4);
 FUNC_0(&VAR_5->ch_guid_type, VAR_6, sizeof(VAR_6));
 FUNC_1(VAR_3, VAR_6, VAR_4);

 FUNC_1(VAR_3, " deviceid=", VAR_4);
 FUNC_0(&VAR_5->ch_guid_inst, VAR_6, sizeof(VAR_6));
 FUNC_1(VAR_3, VAR_6, VAR_4);

 return (0);
}
