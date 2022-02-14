
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vdev_state_t ;



__attribute__((used)) static const char *
FUNC_0(vdev_state_t VAR_0)
{
 static const char* VAR_1[] = {
  "UNKNOWN",
  "CLOSED",
  "OFFLINE",
  "REMOVED",
  "CANT_OPEN",
  "FAULTED",
  "DEGRADED",
  "ONLINE"
 };
 return VAR_1[VAR_0];
}
