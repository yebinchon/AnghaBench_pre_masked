
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_status_entry {int status_code; } ;
typedef int cam_status ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 cam_status VAR_2;
 const struct cam_status_entry *VAR_3;

 VAR_2 = *(const cam_status *)VAR_0;
 VAR_3 = (const struct cam_status_entry *)VAR_1;

 return (VAR_2 - VAR_3->status_code);
}
