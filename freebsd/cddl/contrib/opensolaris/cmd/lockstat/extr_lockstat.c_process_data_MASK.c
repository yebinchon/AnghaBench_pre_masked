
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsrec_t ;
struct TYPE_4__ {int lsd_count; int * lsd_next; } ;
typedef TYPE_1__ lsdata_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_4, char *VAR_5)
{
 lsdata_t VAR_6;


 VAR_6.lsd_next = (lsrec_t *)VAR_5;
 VAR_6.lsd_count = 0;

 if (VAR_1) {
  if (FUNC_2(VAR_0, VAR_4,
      VAR_3, ((void*)0), &VAR_6) != 0)
   FUNC_0("failed to consume buffer");

  return (VAR_6.lsd_count);
 }

 if (FUNC_1(VAR_0,
     VAR_2, &VAR_6) != 0)
  FUNC_0("failed to walk aggregate");

 return (VAR_6.lsd_count);
}
