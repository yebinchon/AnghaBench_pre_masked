
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nbits; scalar_t__ val; } ;
typedef TYPE_1__ parameter ;
typedef scalar_t__ dwordU ;
typedef int ULONGLONG ;


 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static parameter
FUNC_1 (ULONGLONG VAR_0, int VAR_1, int VAR_2)
{
  parameter VAR_3;

  VAR_3.val = (dwordU) FUNC_0 (VAR_0, 48 - VAR_2, VAR_2 - VAR_1);
  VAR_3.nbits = VAR_2 - VAR_1;
  return VAR_3;
}
