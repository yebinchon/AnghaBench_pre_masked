
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int rd_size; int rd_data; int hid; } ;
struct hid_device {struct hidp_session* driver_data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0)
{
 struct hidp_session *VAR_1 = VAR_0->driver_data;

 return FUNC_0(VAR_1->hid, VAR_1->rd_data,
   VAR_1->rd_size);
}
