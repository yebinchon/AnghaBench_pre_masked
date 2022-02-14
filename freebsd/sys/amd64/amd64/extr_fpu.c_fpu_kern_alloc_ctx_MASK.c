
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpu_kern_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fpu_kern_ctx* FUNC_0 (size_t,int ,int) ;

struct fpu_kern_ctx *
FUNC_1(u_int VAR_7)
{
 struct fpu_kern_ctx *VAR_8;
 size_t VAR_9;

 VAR_9 = sizeof(struct fpu_kern_ctx) + VAR_5 +
     VAR_6;
 VAR_8 = FUNC_0(VAR_9, VAR_1, ((VAR_7 & VAR_0) ?
     VAR_2 : VAR_3) | VAR_4);
 return (VAR_8);
}
