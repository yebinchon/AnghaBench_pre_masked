
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int NumPids; int NumHosts; scalar_t__ MergePoolSize; int * Hostname; int * PidChars; int * FilenamePat; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1() {
  int VAR_2;
  if (!VAR_1.FilenamePat || !VAR_1.FilenamePat[0])
    return 0;

  if (!(VAR_1.NumPids || VAR_1.NumHosts ||
        VAR_1.MergePoolSize))
    return FUNC_0(VAR_1.FilenamePat);

  VAR_2 = FUNC_0(VAR_1.FilenamePat) +
        VAR_1.NumPids * (FUNC_0(VAR_1.PidChars) - 2) +
        VAR_1.NumHosts * (FUNC_0(VAR_1.Hostname) - 2);
  if (VAR_1.MergePoolSize)
    VAR_2 += VAR_0;
  return VAR_2;
}
