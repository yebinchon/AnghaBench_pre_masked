
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int ino_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int,char const*,int,int ,int ) ;
 int FUNC_1 (struct thread*,int,char const*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_3, int VAR_4, const char *VAR_5, int VAR_6,
    int VAR_7, enum uio_seg VAR_8, ino_t VAR_9)
{

 if ((VAR_7 & ~VAR_0) != 0)
  return (VAR_1);

 if ((VAR_7 & VAR_0) != 0)
  return (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2, 0));

 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2, 0, 0));
}
