
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ib_portid_t ;
struct TYPE_3__ {int* fdb; int linearcap; int linearFDBtop; int enhsp0; void* switchinfo; } ;
typedef TYPE_1__ Switch ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int ,int*) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int *,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(Switch * VAR_7, ib_portid_t * VAR_8, int VAR_9)
{
 void *VAR_10 = VAR_7->switchinfo, *VAR_11 = VAR_7->fdb;

 FUNC_2(VAR_10, 0, sizeof(VAR_7->switchinfo));
 if (!FUNC_4(VAR_10, VAR_8, VAR_1, 0, VAR_6,
      VAR_5))
  return -1;

 FUNC_1(VAR_10, VAR_3, &VAR_7->linearcap);
 FUNC_1(VAR_10, VAR_4, &VAR_7->linearFDBtop);
 FUNC_1(VAR_10, VAR_2, &VAR_7->enhsp0);

 if (VAR_9 >= VAR_7->linearcap && VAR_9 > VAR_7->linearFDBtop)
  return -1;

 FUNC_2(VAR_11, 0, sizeof(VAR_7->fdb));
 if (!FUNC_4(VAR_11, VAR_8, VAR_0, VAR_9 / 64,
      VAR_6, VAR_5))
  return -1;

 FUNC_0("portid %s: forward lid %d to port %d",
       FUNC_3(VAR_8), VAR_9, VAR_7->fdb[VAR_9 % 64]);
 return VAR_7->fdb[VAR_9 % 64];
}
