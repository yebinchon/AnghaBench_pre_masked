
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct vmctx {int memflags; int fd; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (char*,size_t,int ,int,int ,int ) ;
 int FUNC_1 (struct vmctx*,int ,int ,int ,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_8, vm_paddr_t VAR_9, size_t VAR_10, char *VAR_11)
{
 char *VAR_12;
 int VAR_13, VAR_14;


 VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_7, VAR_9, VAR_10, VAR_4);
 if (VAR_13)
  return (VAR_13);

 VAR_14 = VAR_3 | VAR_1;
 if ((VAR_8->memflags & VAR_6) == 0)
  VAR_14 |= VAR_2;


 VAR_12 = FUNC_0(VAR_11 + VAR_9, VAR_10, VAR_5, VAR_14, VAR_8->fd, VAR_9);
 if (VAR_12 == VAR_0)
  return (-1);

 return (0);
}
