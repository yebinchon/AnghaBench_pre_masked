
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_callbacks {char* member_1; int member_2; int member_0; } ;
struct cis_buffer {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct tuple_callbacks*,struct cis_buffer*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3,
    struct cis_buffer *VAR_4)
{
 struct tuple_callbacks VAR_5[] = {
  {VAR_0, "GENERIC", VAR_1}
 };

 return (FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4));
}
