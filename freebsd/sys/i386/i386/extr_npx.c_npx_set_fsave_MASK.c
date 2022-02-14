
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union savefpu {int sv_xmm; } ;
typedef int sv ;
struct fpacc87 {int dummy; } ;
struct env87 {int dummy; } ;


 int FUNC_0 (void*,union savefpu*,int) ;
 int FUNC_1 (union savefpu*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (int ,union savefpu*,int *,int ) ;

int
FUNC_4(void *VAR_2)
{
 union savefpu VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, sizeof(VAR_3));
 if (VAR_0)
  FUNC_2(VAR_2, &VAR_3.sv_xmm);
 else
  FUNC_0(VAR_2, &VAR_3, sizeof(struct env87) +
      sizeof(struct fpacc87[8]));
 VAR_4 = FUNC_3(VAR_1, &VAR_3, ((void*)0), 0);
 return (VAR_4);
}
