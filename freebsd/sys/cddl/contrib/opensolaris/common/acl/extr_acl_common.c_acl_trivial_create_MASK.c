
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ everyone; scalar_t__ group; scalar_t__ owner; scalar_t__ deny2; scalar_t__ deny1; scalar_t__ allow0; } ;
typedef TYPE_1__ trivial_acl_t ;
typedef int mode_t ;
typedef int boolean_t ;
typedef int ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,int,int,scalar_t__,int ,int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (void**,int) ;

int
FUNC_3(mode_t VAR_6, boolean_t VAR_7, ace_t **VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 trivial_acl_t VAR_12;

 *VAR_9 = 3;
 FUNC_1(VAR_6, VAR_7, &VAR_12);

 if (VAR_12.allow0)
  (*VAR_9)++;
 if (VAR_12.deny1)
  (*VAR_9)++;
 if (VAR_12.deny2)
  (*VAR_9)++;

 if ((VAR_11 = FUNC_2((void **)VAR_8, *VAR_9 * sizeof (ace_t))) != 0)
  return (VAR_11);

 if (VAR_12.allow0) {
  FUNC_0(VAR_8, VAR_10, -1, VAR_12.allow0,
      VAR_0, VAR_5);
 }
 if (VAR_12.deny1) {
  FUNC_0(VAR_8, VAR_10, -1, VAR_12.deny1,
      VAR_1, VAR_5);
 }
 if (VAR_12.deny2) {
  FUNC_0(VAR_8, VAR_10, -1, VAR_12.deny2,
      VAR_1, VAR_3|VAR_4);
 }

 FUNC_0(VAR_8, VAR_10, -1, VAR_12.owner, VAR_0,
     VAR_5);
 FUNC_0(VAR_8, VAR_10, -1, VAR_12.group, VAR_0,
     VAR_4|VAR_3);
 FUNC_0(VAR_8, VAR_10, -1, VAR_12.everyone, VAR_0,
     VAR_2);

 return (0);
}
